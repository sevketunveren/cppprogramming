#include <TimeStamp.h>

void TimeStamp::set(long s)
{
    if(p==NULL)
        p=new int();
    if (s == 0)
    {
        stamp = time(0);
    }
    else if (s < 0)
    {
        cerr << "Error\t";
        throw invalid_argument("an invalid argument");
    }
    else
    {
        stamp = s;
    }
    *p = stamp/100000;
}

string TimeStamp::getAsString()
{
    if (stamp > 17008588210)
    {
        logic_error er("too big");
        throw er;
    }
    else
    {
        return string(ctime(&stamp));
    }
}

long TimeStamp::get()
{
    return stamp;
}

unsigned short TimeStamp::getYear()
{
    return static_cast<unsigned short>(stoi((string(ctime(&stamp)).substr(20,4))));
}
