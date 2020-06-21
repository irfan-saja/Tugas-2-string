#include<cstdlib>
#include<iostream>
#include<string.h>

using namespace std;
void Enkrip (char plain[],int a,char chiper[]);
void Diskrip (char chiper[],int a,char teks[]);

int main()
{
    int pil;char kata[100];char chiper[100];int key;int plain;       
        cout << "1. Dengan Fungsi Enkripsi \n";
        cout << "2. Dengan Fungsi Descripsi \n";
        cout << "Silahkan Masukkan Pilihan Anda : ";
        cin  >> pil;
        if(pil==1){
     		cout << "masukkan text yang asli : " ; 
            cin >> kata;
            cout << "masukkan key :"; cin >> key;
            Enkrip (kata,key,chiper);
                }    
        else{        
            cout << "masukkan chiper : ";
			cin >> chiper;
            cout<< " Masukkan key descriptnya : ";   cin >> key;
            Diskrip (chiper,key,kata);
                }                   
    return main();
}

void Enkrip (char plain[],int key,char chiper[])
    {
         for (int i=0;i<strlen(plain);i+=1){
             cout << plain[i] << "(" << int(plain[i]) << ")";
             chiper [i] = (plain[i]+key) % 128;
             }
            cout << "\n Hasil Kata Setelah di Enkrip : " << endl;
             for (int i=0;i<strlen(plain);i+=1){
                 cout << chiper[i];
                 }
                cout << endl;
                 }
 void Diskrip (char chiper[],int key,char teks[]){
        char plain[100];
         for (int i=0;i<strlen(plain);i+=1) {
             teks[i] = (chiper [i] - key) % 128;
          
             }
             cout<<" Hasil Kata Setelah di Diskrip : ";
             for (int i=0;i<strlen(plain);i+=1){
               cout<<teks[i];
             }
             cout<<endl;
}
