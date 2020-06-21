#include <iostream>
using namespace std;

void biner(int desimal)
{ 
     int sisa;
     int hasil;
     
     if ( desimal <=1)
     {
        cout<<desimal;
        return;
     }
     sisa = desimal %2;
     hasil = desimal / 2;
     biner(hasil);
     cout<<sisa;
}

int main()
{
    int a;
    cout << "Masukkan Bilangan yang akan dikonversi : ";
    cin>>a;
    cout << a << " dalam biner adalah " ; 
    biner(a);
    cout<<endl;
     
    return 0;

}
