#include <iostream>
using namespace std;
class Film
{
public:
   void setTitle(const string &t) { title = t; }
   void setTitle(const char *t) { title = t; }
   void setDirector(const string &d) { director = d; }
   void setDirector(const char *d) { director = d; }
   void setTime(int t)
   {
      time = t;
      setSize();
   }
   void setQuality(int q) { quality = q; }
   void output() const;
   int getSize() const
   {
      return size;
   }
   Film() : title(""), director(""), time(0), quality(0), size(0), qualityRate(1024) {}
   Film(const string &t) : title(t) {}

protected:
   void setSize()
   {
      size = time * qualityRate;
   }

   void setQualityRate(const int &qr)
   {
      qualityRate = qr;
      setSize();
   }

private:
   string title;
   string director;
   int time;    // in minutes
   int quality; // 0 (bad) to 4 (tops)
   int size;    // in kilobytes
   int qualityRate;
};

void Film::output() const
{
   cout << "Title: " << title << '\n';
   cout << "Director: " << director << '\n';
   cout << "Time: " << time << " mins" << '\n';
   cout << "Size: " << size << " kilobytes" << endl;
   cout << "Quality: ";
   for (int i = 0; i < quality; i++)
      cout << '*';
   cout << '\n';
}

class Documentary : public Film
{
public:
   void setLocation(const string &l) { location = l; }
   void setLocation(const char *l) { location = l; }
   void setDayNight(const bool &b)
   {
      dayNight = b;
      if (!dayNight)
      {
         setQualityRate(4096);
      }
      else
      {
         setQualityRate(2048);
      }
   }
   void output()
   {
      Film::output();
      cout << "Location: " << location << endl;
   }
   Documentary(const string &t) : Film(t) { setQualityRate(2048); }

private:
   string location;
   bool dayNight;
};

int main()
{
   Documentary d("Hunters");
   d.setQuality(2);
   d.setDayNight(true);
   d.setTime(10);
   d.output();
   return 0;
}