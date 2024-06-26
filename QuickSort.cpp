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

void swap(int x, int y) {	//Prosedur swap
	int temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
	mov_count++;
}

void q_short(int low, int high) {	//Prosedur quick short
	int temp;
	int pivot, i, j;
	if (low > high) {	//step 1
		return;
	}
	pivot = arr[low]; //step 2
	i = low + 1;	//step 3
	j = high;	//step 4
	while (i <= j) {	//step 10
		//Mencari elemen yang lebih besar dari pivot
		while ((arr[i] <= pivot) && (i <= high)) {	//step 5
			i++;	//step 6
			cmp_count++;
		}
		cmp_count++;
		//Mencari elemen yang lebih kecil atau sama dengan pivot
		while ((arr[j] > pivot) && (j >= low)) {	//step 7
			j--;	//step 8
			cmp_count++;
		}
		cmp_count++;
		if (i < j) {	//step 9
			//Menukarkan element pada index i dengan elemen pada index j
			swap(i, j);
		}
	}
	if (low < j) {	//step 11
		//Menukarkan elemen pivot dengan elemen index j
		swap(low, j);
	}
	//Memanggil prosedur secara rekursif untuk mengurutkan bagian kiri array
	q_short(low, j - 1);	//step 12
	//Memanggil prosedur secara rekursif untuk mengurutkan bagian kanan array
	q_short(j + 1, high);	//step 13
}

void display() {	//Prosedur display
	cout << "\n========================" << endl;
	cout << "\nArray yang sudah terurut" << endl;
	cout << "\n========================" << endl;

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << "\nJumlah perbandingan: " << cmp_count << endl;
	cout << "Jumlah perpindahan data :" << mov_count << endl;
}

int main() {
	char ch;

	do {
		input();
		q_short(0, n - 1);
		display();
		cout << "\n\nApakah Anda ingin melanjutkan? (y/n): ";
		cin >> ch;
		if (ch == 'n' || ch == 'N')
			break;

		system("pause");
		system("cls");

	} while (true);

	return 0;
}