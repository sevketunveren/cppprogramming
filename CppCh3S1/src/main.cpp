#include <iostream>
#include <TimeStamp.h>

int main()
{
    TimeStamp ts;
    try
    {
        ts.set(17008588250);
        cout << ts.getAsString();
        cout << ts.get() << endl;
    }
    catch (const invalid_argument &e)
    {
        cout << e.what() << endl;
    }
    catch (...)
    {
        cout << "another exxception" << endl;
    }
    try
    {
        ts.set(-1);
        cout << ts.getAsString();
        cout << ts.get() << endl;
    }
    catch (const invalid_argument &e)
    {
        cout << e.what() << endl;
    }
    try
    {
        ts.set(0);
        cout << ts.getAsString();
        cout << ts.get() << endl;
    }
    catch (const invalid_argument &e)
    {
        cout << e.what() << endl;
    }
    catch (...)
    {
        cout << "another exxception" << endl;
    }
    cout<<ts.getYear()<<endl;
    TimeStamp tp(ts);
    ts.set(15);
    TimeStamp tx;
    tx = tp;
    return 0;
}