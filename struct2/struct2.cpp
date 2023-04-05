#include <iostream>

using namespace std;
struct AlamatDetail
{
	char desa[20];
	char kota[20];
};

struct Mahasiswa {
	char nim[14];
	char nama[20];
	AlamatDetail alamat;
	int umur;
};