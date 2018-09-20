#include <iostream>
using namespace std;

class PrimeList 
{
public:
   static const int DEFAULT_LIST_LEN = 1000;

private:
   long listLength;
   int list[];

public:
   PrimeList(long listLen);
   void generatePrimeList();
   friend ostream& operator<<(ostream &strm, const PrimeList& pl);
};
