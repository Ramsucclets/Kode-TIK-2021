#include <iostream> 
using namespace std; 
float ds,dd,d;
int main ()
{
    string ns; 
    cout << "Nama siswa : ";
    cin >> ns;
    cout << "Input diagonal 1 :  ";
    cin >> ds;
    cout << "Input diagonal 2 :  ";
    cin >> dd; 
    d = ds * (dd/2);
    cout << "hasil :" << d;
}