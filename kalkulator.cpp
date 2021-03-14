#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

    

    void tambah(float nilai_1, float nilai_2)
    { 
        cout<<"hasil penambahan = ";
        cout<<nilai_1+nilai_2;
    }
    void kurang(float nilai_1, float nilai_2)
    { 
        cout<<"hasil pengurangan = "<<nilai_1-nilai_2;
    }
     void kali(float nilai_1, float nilai_2)
    { 
        cout<<"hasil kalinya = "<<nilai_1*nilai_2;
    }
    void bagi(float nilai_1, float nilai_2)
    { 
        cout<<"hasil baginya = "<<nilai_1/nilai_2;   
    }

    int main()
    {
    float nilai_1, nilai_2;
    char k;
    int kode;
     
    menu:
    cout<<"=================================\n";
    cout<<"Kalkulator\n";
    cout<<"=================================\n";
    
    
    cout<<"\nmasukan bilangan pertama = ";
    cin>>nilai_1;

    cout<<"\n\npilih kode\n1.Tambah\n2.Kali\n3.Bagi\n4.Kurang\nMasukan Kode = ";
    cin>>kode;
    cout<<endl;
    
    input :
    if(kode==1||kode==2||kode==3||kode==4){
        goto function;
    }
    else{
        goto again;
    }

    function : 
    cout<<"\nmasukan bilangan kedua = ";
    cin>>nilai_2;
    
    cout<<endl;
       if (kode==1){
            tambah(nilai_1,nilai_2);
        }
        else if (kode==2){
            kali(nilai_1,nilai_2);
        }
        else if (kode==3){
            bagi(nilai_1,nilai_2);
        }
        else if (kode==4){
            kurang(nilai_1,nilai_2);
        }
    
       else{     
    cout<<"salah";
        }
     
 
    cout<<"\n\nMau coba lagi ? (y/n)";
    cin>>k;
    
    if(k=='Y'||k=='y')
    {
        system("clear");
         goto menu;
    }
    
    if(k=='N'||k=='n')
    {
        goto end;
    }
    
    again :
        cout<<"masukan anda salah, masukan lagi = ";
        cin>>kode;
        goto input;
    end :
        cout<<"\n\nTerima Kasih\n\n";
    }