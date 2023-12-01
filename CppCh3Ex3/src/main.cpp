#include <iostream>
#include <iomanip>
#include <Book.h>

const void printIsbn(const ISBN &);

int main()
{
    ISBN oopInCpp("0-13-015885-2");
    ISBN invalidBook("0-13-015885-3");
    ISBN copyOfOopInCpp(oopInCpp);
    try
    {
        ISBN iTry("0-13-015885-21");
    }
    catch (exception &ex)
    {
        cerr << ex.what() << endl;
    }
    cout << "Country Code Publication Code Unique Id Check ISBN          Valid" << endl;
    printIsbn(oopInCpp);
    printIsbn(invalidBook);
    printIsbn(copyOfOopInCpp);
    Book theOdyssey("0-670-82162-4");
    theOdyssey.setTitle("The Odyssey");
    theOdyssey.setDate(time_t(20));
    theOdyssey.setAuthor("Homer");
    float price = 20.05f;
    theOdyssey.setPrice(price);
    theOdyssey.setPublisher("Viking Press");
    cout << theOdyssey.getAuthor() << ": " << theOdyssey.getTitle() << endl;
    printIsbn(theOdyssey.getIsbn());
    return 0;
}

const void printIsbn(const ISBN &isbn)
{
    cout << left << setw(12) << setfill(' ') << isbn.getCountryCode() << " "
         << left << setw(16) << setfill(' ') << isbn.getPublicationCode() << " "
         << left << setw(9) << setfill(' ') << isbn.getUniqueId() << " "
         << left << setw(5) << setfill(' ') << isbn.getCheck() << " "
         << isbn.toString() << " "
         << isbn.getValid() << endl;
}
