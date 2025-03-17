#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
   

int main() {
    int counter;
    int i;
    int perulanganWhile = 0;
    int perulanganDo = 0;
    
    //Loop with for
    //Loop for ascending
    for (counter = 0; counter < 5; counter++)
    {
        cout << "Nilai Counter = " << counter << " TI UMY" << endl;
    }
    cout << "Nilai Counter terakhir = " << counter << endl;
    cout << endl;


 //Loop for descending
 for (counter = 5; counter < 0; counter--)
 {
     cout << "Nilai Counter = " << counter << " TI UMY" << endl;
 }
 cout << "Nilai Counter terakhir = " << counter << endl;
 cout << endl;


 //Loop with while
 srand(time(0));
 i = rand() % 10;

 cout << "Nilai awal i " << i << endl;
 while (i < 7)
 {
     cout << "Nilai awal i = " << i << "TI UMY" << endl;
     i = rand() % 10;
     perulanganWhile++;
 }
 cout << "Jumlah perulangan = " << perulanganWhile << endl;
 cout << "Nilai akhir i = " << i << endl;

 cout << endl;
 //Loop do while
 cout << "Perulangan Do while"<< endl;
 do
 {
     cout << "Nilai i = " << i << "TI UMY" << endl;
     i = rand() % 10;
     perulanganWhile;
 } while (i < 7);
 cout << "Jumlah perulangan = " << perulanganDo << endl;
 cout << "Nilai akhir i = " << i << endl;
