#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

int main()
{
    utama:
    int pil;
    system("cls");
    float a,b,c,t;
    cout<<"===================MENU UTAMA======================"<<endl;
    cout<<"====        _ _ _ _ _  _ _ _ _ _   _ _ _ _ _   ===="<<endl;
    cout<<"====    || |_ _ _ _ _||_ _ _ _ _| |         |  ===="<<endl;
    cout<<"====    ||     ||         ||      |  _ _ _ _|  ===="<<endl;
    cout<<"====    ||     ||         ||      |=|          ===="<<endl;
    cout<<"====    ||     ||         ||      |=|          ===="<<endl;
    cout<<"====    ||     ||         ||      |=|          ===="<<endl;
    cout<<"==================================================="<<endl;
    cout<<"|Created by Victory(18101105) & Khelvin (18101089)|"<<endl;
    cout<<"|[1] Penjumlahan                                  |"<<endl;
    cout<<"|[2] Pengurangan                                  |"<<endl;
    cout<<"|[3] Perkalian                                    |"<<endl;
    cout<<"|[4] Pembagian                                    |"<<endl;
    cout<<"|[5] Pemangkatan                                  |"<<endl;
    cout<<"|[6] Akar Kuadrat                                 |"<<endl;
    cout<<"|[7] Menghitung Luas Persegi                      |"<<endl;
    cout<<"|[8] Menghitung Luas Segitiga                     |"<<endl;
    cout<<"|[9] Menghitung Phytagoras                        |"<<endl;
    cout<<"|[10]Menghitung Volume Kubus                      |"<<endl;
    cout<<"|[11]Keluar                                       |"<<endl;
    cout<<"==================================================="<<endl;
    cout<<"Masukkan Pilihan : ";cin>>pil;
    switch(pil)
    {
        ///Penjumlahan
        case 1:
        cout<<"============Penjumlahan==========="<<endl;
        cout<<"Masukkan Nilai A : ";cin>>a;
        cout<<"Masukkan Nilai B : ";cin>>b;
        c=a+b;
        cout<<"Hasil : "<<c;
        getch();
        goto utama;
        ///Pengurangan
        case 2:
        cout<<"============Pengurangan==========="<<endl;
        cout<<"Masukkan Nilai A : ";cin>>a;
        cout<<"Masukkan Nilai B : ";cin>>b;
        c=a-b;
        cout<<"Hasil : "<<c;
        getch();
        goto utama;
        ///Perkalian
        case 3:
        cout<<"============Perkalian==========="<<endl;
        cout<<"Masukkan Nilai A : ";cin>>a;
        cout<<"Masukkan Nilai B : ";cin>>b;
        c=a*b;
        cout<<"Hasil : "<<c;
        getch();
        goto utama;
        ///Pembagian
        case 4:
        cout<<"============Pembagian==========="<<endl;
        cout<<"Masukkan Nilai A : ";cin>>a;
        cout<<"Masukkan Nilai B : ";cin>>b;
        c=a/b;
        cout<<"Hasil : "<<c;
        getch();
        goto utama;
        ///Pemangkatan
        case 5:
        cout<<"============Pemangkatan==========="<<endl;
        cout<<"Masukkan Nilai A : ";cin>>a;
        c=a*a;
        cout<<"Hasil : "<<c;
        getch();
        goto utama;
        ///Akar Kuadrat
        case 6:
        cout<<"============Akar Kuadrat==========="<<endl;
        cout<<"Masukkan Nilai A : ";cin>>a;
        c=sqrt(a);
        cout<<"Hasil : "<<c;
        getch();
        goto utama;
        ///Menghitung persentase
        case 7:
        cout<<"=======Luas Persegi======="<<endl;
        cout<<"Masukan sisi persegi : ";cin>>a;
        c=a*a;
        cout<<"Luas Persegi adalah : "<<c;
        getch();
        goto utama;
        case 8:
        cout<<"=======Luas Segitiga======="<<endl;
        cout<<"Masukkan Alas : ";cin>>a;
        cout<<"Masukkan Tinggi : ";cin>>t;
        c=0.5*a*t;
        cout<<"Luas Segitiga adalah : "<<c;
        getch();
        goto utama;
        ///Menghitung Phytagoras
        case 9:
        cout<<"===Menghitung Phytagoras==="<<endl;
        cout<<"Masukkan Nilai A : ";cin>>a;
        cout<<"Masukkan Nilai B : ";cin>>b;
        c=sqrt((a*a)+(b*b));
        cout<<"Hasil : "<<c;
        getch();
        goto utama;
        case 10:
        cout<<"======Volume Kubus========"<<endl;
        cout<<"Masukkan sisi kubus : ";cin>>a;
        c=a*a*a;
        cout<<"Hasil : "<<c;
        getch();
        goto utama;
        case 11:
        exit(0);
     default:cout<<"Pilihan yang anda masukkan tidak ada,silahkan ulangi kembali(^_^)"<<endl;
     getch();
     goto utama;
    }
}
