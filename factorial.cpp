#include<iostream>
using namespace std;
int factorial_function(int n) {
	if (n == 1) {
		return 1;
	}
	else if (n == 0) {
		return 1;
	}
	else {
		return (n * factorial_function(n - 1));
	}
}
int main() {
	int num;
	cout << " Enter any value for fictorial" << endl;
	cin >> num;
	cout << " Factorial of this number : " << num << "is/n   " << factorial_function(num);
	cout << endl;
	system("pause");
	return 0;
}