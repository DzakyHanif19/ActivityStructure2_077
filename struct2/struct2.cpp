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

int main() {

	Mahasiswa mhs;

		cout << "Masukkan nim: ";
		cin.getline(mhs.nim, 12);
		cout << "Masukan umur: ";
		cin >> mhs.umur;
		cin.ignore(1, '\n');
		cout << "Masukkan nama: ";
		cin.getline(mhs.nama, 20);
		cout << "Alamat: ";
		cout << "\tMasukan desa : ";
		cin.getline(mhs.alamat.desa, 20);
		cout << "\tMasukan kota : ";
		cin.getline(mhs.alamat.kota, 20);
		
		cout << "\nNim : " << mhs.nim;
		cout << "\nnama : " << mhs.nama;
		cout << "\ndesa : " << mhs.alamat.desa;
		cout << "\nkota : " << mhs.alamat.kota;
		cout << "\numur : " << mhs.umur;

}