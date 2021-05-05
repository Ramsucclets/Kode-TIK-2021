#include <iostream>
#include <numeric> 
using namespace std;
int main()
{
    int NT,i; 
    int Bilangan[4];
    cout<<"Masukan Bilangan 1 - 4 "<<endl; 
     for (int i = 1; i < 5; i++) {
        cout << "Bilangan " << i << " : "; 
        cin >> Bilangan[i];

    }
    cout << "Bilangan 1-4 :  ";
    for (int n = 1; n < 5; ++n) {
        cout << Bilangan[n] << "  ";
    }
    int n = 4, sum = 0;
    sum = accumulate(Bilangan, Bilangan+n, sum);
    cout<<"\nHasil : "<<sum;
    NT=sum/4;
    cout<<"\nRata-Rata ： "<< NT ;
    
}
    


