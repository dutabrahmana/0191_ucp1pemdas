//	1. -contoh deklarasi variabel
//		-int umur = 20; 
//  dan tiga varaibel, int, float, bool,
//	2.contoh imeplementasi dari conditional statetment
//	if (nRerata > 60) {if (nRerata > 60) {
//		status = "lulus"
//  else if (NilaiMatematika > 80) {
//      status = "diterima";
//	3.struct adalaha untuk digunakan Untuk mengabungkan data " yg terlibatkan daan contohnya adalah
//  struct mahasiswa{,
//  string nim;
//  string nama; 
//  struct Detail alamaat{
//  string desa;
//  string kota;
//	4.prosedur adalah satu blok program untuk menyelasaikan satu tugas tertentu tpi tidak mengembalikan nilai contohnya
//		void nama prosedure () {}
//		sedangkan fungsi adalah satu blok program untuk menyelasaikan satu tugas tertentu tpi bisa mengembalikan nilai, contoh nya
//		tipe data, nama.fungsi () {
//  	return nilai yang dikembalikan
//   }
//	5.looping merupakan perulanagan yanag dilakaukan secara berulang kali, contohnya
//		For (kondisi awal, kondisi akhir, pengubah kondisi) {
//		proses yang diulang		
//  }


#include <iostream>
using namespace std;

    


int main()
{
    int NilaiMatematika, NilaiBahasaInggris, Rerata;
    string status;

    cout << "Masukkan nilai Matematika: ";
    cin >> NilaiMatematika;

    cout << "Masukkan nilai Bahasa Inggris: ";
    cin >> NilaiBahasaInggris;

    Rerata = (NilaiMatematika + NilaiBahasaInggris) / 2;

    if (Rerata > 70) {
        status = "diterima";
    }
    else if (NilaiMatematika > 80) {
        status = "diterima";
    }
    else {
        status = "ditolak";
    }

    cout << "Nilai Matematika " << NilaiMatematika << endl;
    cout << "NilaiBahasaInggris  " << NilaiBahasaInggris << endl;
    cout << "Rerata " << Rerata << endl;
    cout << "Anda Dinyatakan " << status << endl;

   
    return 0;
}