#include <iostream>
using namespace std;




int main() {
	int num;
	cout << "Enter size of the square";
	cin >> num;
	for (int a = 0; a <= num; a++) {
		for (int b = 0; b <= num; b++) {
			cout << "*";
		}
	}

	cin.get();
}