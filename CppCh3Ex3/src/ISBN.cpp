#include <ISBN.h>

ISBN::ISBN(const string isbnP) : isbn(isbnP), isValid(false)
{
    if (isbnP.length() > ISBNSIZE)
    {
        throw invalid_argument("size is more than " + to_string(ISBNSIZE));
    }
    else
    {
        setCodes();
        isValid = validate();
    }
}

/*ISBN::ISBN(const char* const pisbn):isbn(pisbn)
{
    if(strlen(isbn)>ISBNSIZE)
    {
        //isbn = "empty";
    }
}*/

string ISBN::getCountryCode() const
{
    return countryCode;
}

string ISBN::getPublicationCode() const
{
    return publicationCode;
}

string ISBN::getUniqueId() const
{
    return uniqueId;
}

string ISBN::getCheck() const
{
    return check;
}

bool ISBN::getValid() const
{
    return isValid;
}

string ISBN::toString() const
{
    return isbn;
}

bool ISBN::validate()
{
    if (isbn.size() != ISBNSIZE)
        return false;
    int sum = isbn[0] - '0';
    for (int i = 1, k = 0; i < ISBNSIZE - 1; ++i)
    {
        if (isbn[i] == '-')
            continue;
        sum += (k++ + 2) * (isbn[i] - '0');
    }
    return sum % 11 == stoi(check);
}

void ISBN::setCodes()
{
    vector<string> token = split(isbn, "-");
    if (token.size() != 4)
    {
        throw invalid_argument("provided isbn is not valid: " + isbn);
    }
    else
    {
        countryCode = token[0];
        publicationCode = token[1];
        uniqueId = token[2];
        check = token[3];
    }
}

// In C++11, don't have to do return value optimization
vector<string> ISBN::split(string s, string delimiter)
{
    size_t pos = 0;
    int index = 0;
    vector<string> token;
    while ((pos = s.find(delimiter)) != string::npos)
    {
        token.push_back(s.substr(0, pos));
        s.erase(0, pos + delimiter.length());
    }
    token.push_back(s);
    return token;
}
