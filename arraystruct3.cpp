include <iostream>
#include <string>
using namespace std;

struct mahasiswa
{
    string Desa;
    string kota;
}

struct mahasiswa
{
    string nama;
    alamatDetail alamat;
    int umur;
}

int main()
{
    // deklarasi variabel struct
    mahasiswa mhs;
    //Mengisi data
    cout << "isikan Data Nama : ";
    getline(cin, mhs.nama);
    cout<< "isikan data kota : ";
    getline(cin, mhs.alamat.kota);
    cout << "isikan Dta Desa : ";
    getline(cin, mhs.alamat.Desa);
    cout << "isikan Dta Usia : ";
    cin >> mhs.umur;
