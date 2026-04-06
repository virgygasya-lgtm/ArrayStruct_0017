include <iostream>
#include <string>
using namespace std;

struct alamat Detail
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

    cout <<"Data Mahasiswa"<< endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "kota : "<< mhs.alamat.kota << endl;
    cout << "Desa : "<< mhs.alamat.Desa << endl;
    cout << "usia : "<< mhs.umur << endl;
}
