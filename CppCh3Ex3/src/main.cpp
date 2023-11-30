#include <iostream>
#include <ISBN.h>

int main()
{
    ISBN oopInCpp("0-13-015885-2");
    /*try
    {
        ISBN iTry("0-13-015885-21");
    }
    catch (exception& ex)
    {
        cerr<<ex.what()<<endl;
    }*/
    cout<<oopInCpp.getValid()<<endl;
    return 0;
}