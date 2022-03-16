#include <iostream>
using namespace std;

inline int myPow(int num) {
	return num * num;// тело функции
}
inline int absolute(int num) {// функция для нахождения модуля
	return num < 0 ? -num : num;
}

int maxEl(int num1, int num2) {
	cout << "INT\n";
	if (num1 > num2)
		return num1;
	return num2;
	
}

double maxEl(double num1, double num2) {
	cout << "DOUBLE\n";
	if (num1 > num2)
		return num1;
	return num2;
}

bool maxEl(int num1, double num2) {
	cout << "BOOL\n";
	if (num1 > num2)
		return true;
	return false;
}

int maxEl(int num1, int num2, int num3) {
	cout << "THREE\n";
	if (num1 >= num2 && num1 >= num3)
		return num1;
	if (num2 >= num1 && num2 >= num3)
		return num2;
	return num3;
}

int sum(int num1, int num2) {
	return num1 + num2;
}

template < typename T> T newsum(T num1, T num2) {
	return num1 + num2;
}
 
template < typename T>  void showArray ( T arrai[], int L) {
	cout << "[";
	for (int i = 0, i < L; i++)
		cout << array[i] << ", ";
	cout"\b\b]\n";
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	int a1[5] = { 7,4,6,3,6 };
	double a2[4] = { 4.8,5.9,3.7, 7.6 };
	cout << " массив int: \n";
	showArray(a1, 5);
	cout << " массив double: \n";
	showArray(a2, 4);





	// вызов шаблонной функции
	/*cout << newsum(10, 34) << endl;//T=int
	cout << newsum(10.8, 34.8) << endl;// T= double
	cout << newsum(true, false) << endl;// T= bool
	short a = 5, b = 7;
	cout << newsum(a, b) << endl;// T= short*/









	// перегруженная функция
	/*cout << maxEl(5, 9) << endl;
	cout << maxEl(1.5, 0.9) << endl;
	cout << maxEl(5, 0.9) << endl;
	cout << maxEl(7, 15, 55) << endl*/













	//cin >> n;
	//cout << n << " * " << n << " = " << absolute(n) << endl;
	//return 0;
} 