#include <iostream>
using namespace std;
string nm,hr ; int hd,dt,fl,rx,ez,nf;
int main()
{
    cout << "Input nama : ";
    cin >> nm;
    cout << "Input bulan :  ";
    cin >> hr;
    cout << "Input biaya internet :  ";
    cin >> hd;
    cout << "Input biaya pemerintahan :  ";
    cin >> dt; 
    cout << "Input biaya listrik : ";
    cin >> fl; 
    cout << "Input biaya air : ";
    cin >> rx;
    cout << "Input biaya makan : ";
    cin >> ez;
    nf = hd+fl+ez+rx-dt;
    cout << "total :" << nf; 
}