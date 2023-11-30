#include <ctime>
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class TimeStamp
{
public:
    void set(long s = 0);
    long get();
    unsigned short getYear();
    string getAsString();
private:
    time_t stamp;
    int *p = NULL;
};
