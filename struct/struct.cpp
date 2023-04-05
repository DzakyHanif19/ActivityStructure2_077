#include <iostream>

using namespace std;

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs, mhs2;

	mhs.nim = "20210140077";
	mhs.umur = 19;
	mhs.nama = "Dzaky";
	mhs.alamat = "Bekasi";


	cout << "Masukkan nim: ";
	cin >> mhs2.nim;
	cout << "Masukkan umur: ";
	cin >> mhs2.umur;
	cout << "Masukkan nama: ";
	cin >> mhs2.nama;
	cout << "Masukkan alamat: ";
	cin >> mhs2.alamat;

	cout << "\nNim : " << mhs.nim;
	cout << "\numur : " << mhs.umur;
	cout << "\nnama : " << mhs.nama;
	cout << "\nalamat : " << mhs.alamat;
	
	cout << "\nNim : " << mhs2.nim;
	cout << "\numur : " << mhs2.umur;
	cout << "\nnama : " << mhs2.nama;
	cout << "\nalamat : " << mhs2.alamat;

}