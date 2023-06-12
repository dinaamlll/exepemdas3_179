#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
		virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran :public bidangDatar {  
private:
	int q;
public:
	void input() {
		int q;
		cout << "lingkaran dibuat\n " << endl;
		cout << " Masukkan jari-jari lingkaran: ";
		cin >> q;
		setX(q);
	}
	float Luas() {
		int q = getX();
		return 3.14 * q * q;
	}
	float Keliling() {
		int q = getX();
		return 3.14 * 2 * q;
	}
};
class Bujursangkar :public bidangDatar {
public:
	void input() {
		int s;
		cout << "Masukkan sisi bujursangkar ";
		cin >> s;
			setX(s);
	}
	float Keliling() {
		int s = getX();
		return s * s;
	}
	float Luas() {
		int s = getX();
		return 4 * s;
	}
};

int main() {
	Lingkaran lingkaran;
	lingkaran.input();
	cout << "Luas Lingkaran: " << lingkaran.Luas() << endl;
	cout << "Keliling Lingkaran: " << lingkaran.Keliling() << endl;

	Bujursangkar bujursangkar;
	bujursangkar.input();
	cout << "Luas Bujursangkar: " << bujursangkar.Luas() << endl;
	cout << "Keliling Bujursangkar: " << bujursangkar.Keliling() << endl;
	return 0;
}