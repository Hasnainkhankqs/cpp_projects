#include <iostream>
using namespace std;

void starline(int);
void square();
void holoSquare();
void triangle();
void whichshape();
void whichProgram();
void part1();
void part2();
void part3();
void part4();
void arrayPrint();
void reverseArray();
int main() {

	whichProgram();


  
	return 0;
}



//this function will print star line
void  starline(int num) {
	cout << endl;
	cout << endl;
	for (int a = 0; a <= num; a++) {
		cout << '*';
	}
	cout << endl;
	cout << endl;
}
// star line funciton ended

void whichProgram() {
	/*cout << " Which program you want to execute: " << endl;
	cout << "1- Print Squared shape pattern: " << endl;
	cout << "2- Print holo Squared shape pattern: " << endl;
	cout << "3- Check if triangle is possible or not: " << endl;
	cout << "4- Print four different patterns: " << endl;*/
	int bring;
	//cin >> bring;
	bring = 6;
	if (bring == 1) {
		square();
	}
	if (bring == 2) {
		holoSquare();
	}
	if (bring == 3) {
		triangle();
	}
	if (bring == 4) {
		whichshape(); 
	}
	if (bring == 5) {
		arrayPrint(); 
	}
	if (bring == 6) {
		reverseArray();
	}

}





void square() {
	int num;
	cout << " Enter size of the square: ";
	cin >> num;
	cout << endl;
	for (int a = 1; a <= num; a++) {
		for (int b = 1; b <= num; b++) {
			
			cout << " *";
		}
		cout << endl;
	}
	whichProgram();
}


void holoSquare() {
	int num;
	cout << " Enter number of rows: ";
	cin >> num;
	num = num - 1;
	for (int a = 0; a <= num; a++) {
		for (int b = 0; b <= num; b++) {
			if (a == 0 || b == 0 || a == num || b == num) {
				cout << "*";
			}
			else {
				cout << " ";
			}
			
		}
		cout << endl;
	 }
	whichProgram();
}



void triangle() {
	int a, b, c;
	cout << " Side A: ";
	cin >> a;
	cout << " Side B: ";
	cin >> b;
	cout << " Side C: ";
	cin >> c;
	if (a + b > c && a + c > b && b + c > a) {
		starline(50);
		cout << " The sides form a triangle" << endl;
		starline(50);
	}
	else {
		starline(50);
		cout << " The sides do not form a triangle." << endl;
		starline(50);
	}
	whichProgram();
}




void whichshape() {
	cout << " Which shape do you want to print " << endl;
	cout << "Select 1 - 4: ";
	int bring;
	cin >> bring;
	if (bring == 1) {
		part1();
	}
	if (bring == 2) {
		part2();
	}
	if (bring == 3) {
		part3();
	}
	if (bring == 4) {
		part4();
	}
}





void part1() {
	for (int a = 0; a <= 10; a++) {
		for (int b = 0; b <= a; b++) {
			cout << "*";
		}
		cout << endl;
	}
	whichshape();
 }


void part2() {
	for (int a = 10; a >= 0; a--) {
		for (int b = 0; b <= a; b++) {
			cout << "*";
		}
		cout << endl;
	}
	whichshape();
}


void part3() {
		int d = 0;
		for (int a = 0; a <= 10; a++) {
			d++;
			for (int b = 0; b <= d; b++) {
				cout << " ";
			}
			for (int c = 10; c >= a; c--) {
				cout << "*";
			}
			
			cout << endl;
	}
		whichshape();
}


void part4() {
	int d = -1;
	for (int a = 0; a <= 10; a++) {
		d++;
		for (int b = 10; b >= a; b--) {
			cout << " ";
		}
		for (int c = 0; c <= d; c++) {
			cout << "*";
		}
		cout << endl;
	}
	whichshape();
}

void arrayPrint() {
	cout << " Enter 10 integer Elements for array :" << endl;
	int arr[10];
	for (int a = 0; a <= 9; a++) {
		cout << " Element - " << a << " : ";
		cin >> arr[a];
	}
	starline(45);
	cout << " Elements in array are ";
	for (int b = 0; b <= 9; b++) {
		cout <<   arr[b] << " ";
	}
	starline(45);
	cout << endl;
}




void reverseArray() {
	cout << " Enter 10 integer Elements for array :" << endl;
	int arr[10];
	for (int a = 0; a <= 9; a++) {
		cout << " Element - " << a << " : ";
		cin >> arr[a];
	}
	starline(45);
	cout << " You Entered in this sequence ";
	for (int b = 0; b <= 9; b++) {
		cout << arr[b] << " ";
	}
	starline(45);
	cout << " This is the reverse array ";
	for (int b = 9; b >= 0; b--) {
		cout << arr[b] << " ";
	}
	starline(45);
	cout << endl;
}