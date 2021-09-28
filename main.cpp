//Program menghitung jumlah air yang diperlukan untuk mengisi sebuah kolam alas lingkaran atau persegi panjang

#include <iostream>
#include <math.h>
#define phi 3.14

using namespace std;

int main()
{
    int jenis, diameter, tinggi, panjang, lebar, persentase, volume, jari_jari;
    
        cout<<"Kalkulator Penghitung Jumlah Air yang Digunakan untuk Mengisi Sebuah Kolam"<<endl;
        cout<<"Jenis Alas Kolam: "<<endl;
        cout<<"Persegi Panjang (1)"<<endl;
        cout<<"Lingkaran (2)"<<endl;
        cout<<"Masukkan jenis alas kolam (dalam angka):";
            cin>> jenis;
            
            switch(jenis)
            {
                { case 1:
                    cout<<"Panjang alas dalam meter = ";
                        cin>> panjang;
                    cout<<"Lebar alas dalam meter = ";
                        cin>> lebar;
                    cout<<"Tinggi kolam dalam meter = ";
                        cin>> tinggi;
                    cout<<"Persentase kepenuhan kolam (1-100) = ";
                        cin>> persentase;
                           volume = panjang * lebar * tinggi * persentase/100 * 1000;
                    cout<<"Maka jumlah air yang diperlukan adalah: "<<volume<<" liter"<<endl;
                    break; }
                    
                { case 2:
                    cout<<"Diameter alas dalam meter = ";
                        cin>> diameter;
                    cout<<"Tinggi kolam dalam meter = ";
                        cin>> tinggi;
                    cout<<"Persentase kepenuhan kolam (1-100) = ";
                        cin>> persentase;
                            jari_jari = diameter/2;
                            volume = 2 * phi * pow(jari_jari,2) * tinggi * persentase/100 * 1000;
                    cout<<"Maka jumlah air yang diperlukan adalah: "<<volume<<" liter"<<endl;
                    break; }
            }
    return 0;
}
