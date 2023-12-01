
#ifndef BOOK_H
#define BOOK_H
#include "ISBN.h"

class Book
{
public:
  ISBN getIsbn() const
  {
    return isbn;
  }

  void setTitle(const string value)
  {
    title = value;
  }

  string getTitle() const
  {
    return title;
  }

  void setAuthor(const string value)
  {
    author = value;
  }

  string getAuthor() const
  {
    return author;
  }

  void setPublisher(const string value)
  {
    publisher = value;
  }

  string getPublisher() const
  {
    return publisher;
  }

  void setCity(const string value)
  {
    city = value;
  }

  string getCity() const
  {
    return city;
  }

  void setDate(const time_t value)
  {
    date = value;
  }

  time_t getDate() const
  {
    return date;
  }

  void setPrice(const float value)
  {
    price = value;
  }

  float getPrice() const
  {
    return price;
  }
  Book(const string isbnP):isbn(isbnP) //string to ISBN conversion
  {}
private:
  const ISBN isbn;
  string title;
  string author;
  string publisher;
  string city;
  time_t date;
  float price;
  Book();
};

#endif // BOOK_H
