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
	int umur;
	AlamatDetail alamat;

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
		cout << "\numur : " << mhs.umur;
		cout << "\nnama : " << mhs.nama;
		cout << "\nAlamat : ";
		cout << "\ndesa : " << mhs.alamat.desa;
		cout << "\nkota : " << mhs.alamat.kota;
		
}
