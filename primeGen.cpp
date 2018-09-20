
#include <iostream>
using namespace std;

PrimeList::PrimeList(long listlen)
{
   this->listLength = listlen;

   for (int k = 0; k < listlen; k++)
   {
      list[k] = 0;
   }
}

void PrimeList::generatePrimeList()
{
   long listpos;
   for (int k = 1; k < 100; k += 2) 
   {
      for (int i = 3; i < k; k += 2 ) 
      {
         if (k % i == 0 || k % 2 == 0) 
         {
            break;
         }
         list[listpos] = k;
      }
   }

}

ostream& operator<<(ostream &strm, const PrimeList& pl) 
{
   return strm;
}
