#include <iostream>
using namespace std;

int main() {
	// Deklarasi variabel
	float absensi, tugas, uts, uas, nilai_akhir;
	char nilai_huruf;
	
	cout << "Program Menghitung Nilai Akhir Mahasiswa" << endl;
	cout << "----------------------------------------" << endl;
	
	// Proses Input
	cout << "Masukkan Nilai Absensi\t: ";
	cin >> absensi;
	
	cout << "Masukkan Nilai Tugas\t: ";
	cin >> tugas;
	
	cout << "Masukkan Nilai UTS\t: ";
	cin >> uts;
	
	cout << "Masukkan Nilai UAS\t: ";
	cin >> uas;
	
	//Rumus
	nilai_akhir=((absensi*0.1)+(tugas*0.2)+(uts*0.3)+(uas*0.4));
	
	if (nilai_akhir>=90){
		nilai_huruf='A';
	}else if (nilai_akhir>=80){
		nilai_huruf='B';
	}else if (nilai_akhir>=70){
		nilai_huruf='C';
	}else if (nilai_akhir>=60){
		nilai_huruf='D';
	}else {
		nilai_huruf='E';
	}
	
	//Proses Output
	
	cout << "Nilai Akhir\t	: "<<nilai_akhir<<endl;
	cout << "Nilai Huruf\t	: "<<nilai_huruf<<endl;
	
	return 0;
	
}
