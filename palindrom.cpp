#include<iostream>  
#include<string.h>
  
using namespace std;  
  
main()  
{  
      
    char kata[20];  
    int belakang;  
    bool palindrom = true;  
  
    cout <<"Masukkan kata : "; 
	if(true){
    cin.getline(kata, sizeof(kata));  
  }
  	
    int pkata = strlen(kata);  //mencari panjang kata 
    belakang = pkata-1;  
  
    for(int a=0; a<pkata; a++)  
    {  
          
        if(tolower(kata[a])!=tolower(kata[belakang]))  
        {  
            palindrom = false;  
            break;  
        }  
        belakang--;  
    }  
  
    if(palindrom)  
    cout<<kata<<" Merupakan Palindrom"<<endl;  
    else  
    cout<<kata<<" Bukan Palindrom"<<endl;  
  
    return 0;  
}          
