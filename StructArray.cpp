#include <iostream>
#include <string>
using namespace std;

struct DetailAlamat
{
    string desa;
    string kota;
};

struct orang
{
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main()
{
    // Deklarasi array dari struct orang
    orang mhs[3];
