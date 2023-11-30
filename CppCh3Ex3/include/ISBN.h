#include <ctime>
#include <iostream>
#include <stdexcept>
#include <vector>
#define ISBNSIZE 13
using namespace std;

class ISBN
{
public:
    //ISBN(const char* const pisbn);
    ISBN(const string pisbn);
    string getCountryCode() const;
    bool getValid() const;
private:
    ISBN();
    //const char* const isbn;
    const string isbn;
    string countryCode;
    string publicationCode;
    string uniqueId;
    string check;
    bool isValid;
    bool validate();
    void setCodes();
    vector<string> split(string s, string delimiter);
};
