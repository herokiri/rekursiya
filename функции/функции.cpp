#include<iostream>

using namespace std;

double init(double* arr, int size, double element = rand() % 10 - 5) {
	*(arr + 0) = element;

	if (size > 0) return init((arr + 1), size - 1);
	else return 0;
	
}
double prod(double* arr, int size) {
	if (size > 0) return *(arr + 0) * prod((arr + 1), size - 1);
	else return (*(arr + 0)) * (*(arr - 1));
}
void print(double *arr, int size) {
	if (size == 1) cout << arr[0] << " ";
	cout << arr[size - 1] << " ";
	if(size != 1) return print(arr, size - 1);
}
int main() {
	int size; cin >> size;
	double* arr = new double[size];
	init(arr, size);
	print(arr, size);
	cout << endl << prod(arr, size);
	
}