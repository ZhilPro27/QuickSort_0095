#include <iostream>
using namespace std;

//Array bertipe integer untuk menyimpan nilai
int arr[20];
int cmp_count = 0;	// jumlah perulangan
int mov_count = 0;	// jumlah pemindahan data
int n;

void input() { // Prodedur input
	while (true) {
		cout << "Masukkan panjang elemen array: ";	//Perulangan untuk input yang 	
		cin >> n;									//menentukan panjang array
		if (n <= 20)
			break;
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;
			cout << "Silahkan coba lagi" << endl;
	}

	cout << "\n====================" << endl;
	cout << "\nMasukkan Nilai Array" << endl;
	cout << "\n====================" << endl;

	for (int i = 0; i < n; i++) {								//Perulangan untuk input nilai
		cout << "Masukkan nilai " << "<" << (i + 1) << "> ";	//ke dalam array
		cin >> arr[i];
	}
}