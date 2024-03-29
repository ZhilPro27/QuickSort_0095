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
}