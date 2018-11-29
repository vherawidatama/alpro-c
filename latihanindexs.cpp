#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int bilangan;
    cout<<"Memunculkan Nilai INDEKS Mahasiswa "<<endl;
    cout<<"Masukkan Nilai Mahasiswa : ";cin>>bilangan;
    if (bilangan>=85)
    cout<<"A"<<endl;
    else if(bilangan>=70 && bilangan<85)
        cout<<"B"<<endl;
    else if(bilangan>=55 && bilangan<70)
        cout<<"C"<<endl;
    else if(bilangan>=40 && bilangan<55)
        cout<<"D"<<endl;
    else
        cout<<"E"<<endl;

}
