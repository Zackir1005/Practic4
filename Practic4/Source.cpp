#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

template <typename T> void showArr(T arr[],int length){
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}

void fillArr(int arr[], int length, int min = 0, int max = 10) {
	for (int i = 0; i < length; i++)
		arr[i] = i;
}

// Задача 1
template<typename T> void clearArray(T arr1[], int length1,T key) {
	for (int i = 0; i < length1; i++)
		if (arr1[i] == key)
			arr1[i] = 0;

}

// Задача 2
int indexSum(int arr2_1[], int length2_1, int arr2_2[], int length2_2, int index) {
	if (index < length2_1 && index < length2_2)
		return arr2_1[index] + arr2_2[index];
	cout << "ERROR!\n";
	return 0;
}

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int n, m;

	// Задача 1
	cout << "Задача 1.\nИзначальный массив:\n";
	int z1[10];
	fillArr(z1, 10);
	showArr(z1, 10);
	cin >> n;
	clearArray(z1, 10, n);
	cout << "Итоговый массив:\n";
	showArr(z1, 10);
	cout << endl;

	// Задача 2
	cout << "Задача 2.\n";
	int z2_1[5] = { 8,4,7,6,3 };
	int z2_2[6] = { 3,8,5,2,8,3 };
	showArr(z2_1, 5);
	showArr(z2_2, 6);
	cout << "Введите индекс: ";
	cin >> n;
	cout << indexSum(z2_1, 5, z2_2, 6, n) << "\n\n";

	return 0;
}
