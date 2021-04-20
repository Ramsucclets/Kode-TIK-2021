#include <iostream>
using namespace std;
int main()
{
    int bil;
    cout<<"\t== Tampil Bilangan Positif Menurun ==\n";
    cout<<"\n*Maksimum bilangan tertinggi adalah : 20";
    cout<<"\nMasukkan bilangan tertinggi yang akan ditampilakan : ";
    cin>>bil;
    for(int i=bil; i>=0; --i)
    {
        if(bil>20)
        {
            cout<<"\n== Program dihentikan disini ==\n";
            // Parameter 0 berguna sebagai tanda
            // Program berjalan secara normal
            exit(0);
        }
        cout<<"\nBilangan "<<i;
    }
    cout<<"\n\n=== Program Selesai ===";
    return 0;
}