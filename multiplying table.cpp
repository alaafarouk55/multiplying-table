#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 int num ;
 cout << "enter numbers from 1to 50" ;
 cin >> num ;
 cout << setw (4) << num << "|" << endl ;
 cout << "------------------------\n" ;
 for (int i=0 ; i <= 12 ; i++){
    cout << setw (2) << "x" << setw(3) << "i" ;
    cout << setw(5) << i*( num ) << endl ;
 }
}
