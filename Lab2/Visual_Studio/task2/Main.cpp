#include <iostream>
#include <iomanip>
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
void addArray();
void copyArray();
void dublicate();
void unique();
void mergesort();
void frequency();
void maxmin();
void oddevenarr();
void arrascending();
void arrdescending();
void deleteElement();
void secondlargest();
void secondsmalest();
void two_D_arr();
void insert_new_element();
void insert_new_element_sorted();
void addmatrix();
void subtractionmatrix();
void multiplicationmatrix();
void transpose();
void sumrightdiagonal();
void sumleftdiagonal();
void SumRowCol();
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
/*	cout << " Which program you want to execute: " << endl;
	cout << "1- Print Squared shape pattern: " << endl;
	cout << "2- Print holo Squared shape pattern: " << endl;
	cout << "3- Check if triangle is possible or not: " << endl;
	cout << "4- Print four different patterns: " << endl;

	cout << "5- Take array and print it: " << endl;
	cout << "6- Take array and print it in reverse order: " << endl;
	cout << "7- Add elements of array: " << endl;
	cout << "8- Copy Array into another: " << endl;
	cout << "9- Check dublicate elements in an Array: " << endl;
	cout << "10- Check Unique element from an Array: " << endl;
	cout << "11- Merge Array and sort in desending: " << endl;
	cout << "12- Count the frequency of each element of an array: " << endl;
	cout << "13- Check Maximum and minimum in Array: " << endl;
	cout << "14- Seperate Odd and Even element from array: " << endl;
	cout << "15- Sort Array in ascending order: " << endl;
	cout << "16- Sort Array in descending order: " << endl;
	cout << "17- Insert new element sorted position: " << endl;
	cout << "18- Insert new element at specific location: " << endl;
	cout << "19- Delete an element from an array: " << endl;
	cout << "20- Second largest element in array: " << endl;
	cout << "21- Second smallest element in array: " << endl;
	cout << "22- Make 2D array: " << endl;
	cout << "23- Addition of two Matrices of same size: " << endl;
	cout << "24- subtraction of two Matrices of same size: " << endl;
	cout << "25- Multiplicatoin of two Matrices of same size: " << endl;
	cout << "26- Transpse of a Matrices: " << endl;
	cout << "27- Sum of right diagonal of a matrix: " << endl;
	cout << "28- Sum of left diagonal of a matrix: " << endl;
	cout << "29- Sum of row and column of a matrix: " << endl;
	
	*/
	int bring;
//	cin >> bring;
	bring = 29;
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
	if (bring == 7) {
		addArray();
	}
	if (bring == 8) {
		copyArray();
	}
	if (bring == 9) {
		dublicate();
	}
	if (bring == 10) {
		unique();
	}
	if (bring == 11) {
		mergesort();
	}
	if (bring == 12) {
		frequency();
	}
	if (bring == 13) {
		maxmin();
	}
	if (bring == 14) {
		oddevenarr();
	}
	if (bring == 15) {
		 arrascending();
	}
	if (bring == 16) {
		 arrdescending();
	}
	
	if (bring == 17) {
		insert_new_element_sorted();
	}
	if (bring == 18) {
		insert_new_element();
	}
	if (bring == 19) {
		deleteElement();
	}
	if (bring == 20) {
		secondlargest();
	}
	if (bring == 21) {
		secondsmalest();
	}
	if (bring == 22) {
		two_D_arr();
	}
	if (bring == 23) {
		addmatrix();
	}
	if (bring == 24) {
		subtractionmatrix();
	}
	if (bring == 25) {
		multiplicationmatrix();
	}
	if (bring == 26) {
		transpose();
	}
	if (bring == 27) {
		sumrightdiagonal();
	}
	if (bring == 28) {
		sumleftdiagonal();
	}
	if (bring == 29) {
		SumRowCol();
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
	cout << "5 to go main menu";
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
	if (bring == 5) {
		whichProgram();
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
	whichProgram();
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
	whichProgram();
}

















void addArray() {
	int arr[10];
	int add = 0;
	for (int a = 0; a <= 9; a++) {
		cout << " Enter Element for - " << a << " :";
		cin >> arr[a];
		add = add + arr[a];
	}
	starline(25);
	cout << " " << add;
	starline(25);
	whichProgram();
}



void copyArray() {

	int arr[10], arr2[10];
	for (int a = 0; a <= 2; a++) {
		cout << " Enter Element for - " << a << " :";
		cin >> arr[a];
	}
	for (int a = 0; a <= 2; a++) {
		arr2[a] = arr[a];
		
	}
	starline(70);
	cout << " The array stored in first array are " ;
	for (int a = 0; a <= 2; a++) {
		cout << arr[a];
	}
	starline(50);
	cout << endl <<" The array stored in second array are ";
	for (int a = 0; a <= 2; a++) {
		cout << arr2[a];
	}
	starline(70);
	whichProgram();
}





void dublicate() {
	int count = 1;
	int arr[5];

	cout << " Enter 5 elements for Array" << endl;
	for (int i = 0; i < 5 ; i++) {
		cout << " Enter Element for - " << i << " :";
		cin >> arr[i];
	}

	cout << " following are the repeted element(s) ";
	starline(30);
	for (int i = 0; i < 5; i++) {

		for (int j = i + 1; j < 5; j++) {

			if (arr[i] == arr[j]) {
				
				if (count == 1 && arr[j] != '\0') {
					
					cout << " " << arr[i] << " ";
					
				}
				
				arr[j] = '\0';
				count++;
			}
			
		}
		count = 1;
	}
	starline(30);
	
} 


void unique() {
	int count = 0;
	int arr[5];
	int freq[5];

	cout << " Enter 5 elements for Array" << endl;
	for (int i = 0; i < 5; i++) {
		cout << " Enter Element for - " << i << " :";
		cin >> arr[i];
		freq[i] = -1;
	}
	
	
	for (int i = 0; i < 5; i++) {
		count = 1;
		for (int j = i + 1; j < 5; j++) {

			if (arr[i] == arr[j])
			{
				count++;
				freq[j] = 0;
			}


		}
		if (freq[i] != 0)
		{
			freq[i] = count;
		}
		
	}
	starline(20);
	for (int b = 0; b<5; b++)
	{
		if (freq[b] == 1)
		{
			cout << " " << arr[b];
		}
	}
	starline(20);
	

}




void mergesort() {
	int arr1[5], arr2[5], arr3[10]  , temp = 0;

	cout << " Enter 5 elements for first Array" << endl;
	for (int i = 0; i < 5; i++) {
		cout << " Enter Element for - " << i << " :";
		cin >> arr1[i];
		
	}
	cout << " Enter 5 elements for second Array" << endl;
	for (int i = 0; i < 5; i++) {
		cout << " Enter Element for - " << i << " :";
		cin >> arr2[i];
		
	}
	
	for (int a = 0; a<5; a++)
	{
		arr3[a] = arr1[a];
	}
	for (int j = 5; j <= 10; j++)
	{
		arr3[j] = arr2[j-5];
		
	}

	cout << endl;
	for (int b = 0; b < 10; b++)
	{
		for (int c = b + 1; c < 10; c++)
		{
			if (arr3[b] < arr3[c]) {
				temp = arr3[b];
				arr3[b] = arr3[c];
				arr3[c] = temp;
			}
		}
	}
	cout << " The sorted merged Array is :";
	starline(50);
	for (int j = 0; j < 10; j++)
	{
		cout <<" " <<arr3[j] << "  ";
	}
	starline(50);

}


void frequency(){
	int arr[5] , freq[100], count;
	cout << " Enter 5 elements for Array" << endl;
	for (int i = 0; i < 5; i++) {
		cout << " Enter Element for - " << i << " :";
		cin >> arr[i];
		freq[i] = -1;
	}
	for (int b = 0; b < 5; b++)
	{
		count = 1;
		for (int c = b + 1; c < 5; c++)
		{
			if (arr[b] == arr[c]) {
				count++;
				freq[c] = 0;
			}
		}
		if (freq[b] != 0) {
			freq[b] = count;
		}
	}
	starline(50);
	for (int j = 0; j < 5 ; j++)
	{
		if (freq[j] != 0) {
			cout << " " <<  arr[j] << " Occurs " << freq[j] << " time(s) " << endl;
		}
	}
	starline(50);
}






void maxmin() {
	int arr[100], temp ,n;
	cout << " How much element you want to enter : ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << " Enter Element for - " << i+1 << " :";
		cin >> arr[i];
	}
	for (int a = 0; a < n; a++) {
		for (int b = a + 1; b < n; b++) {
			if (arr[a] > arr[b]) {
				temp = arr[a];
				arr[a] = arr[b];
				arr[b] = temp;
			}
		}
	}
	starline(50);
		cout << " The minimum element is " << arr[0] << endl << endl;
		cout << " The maximum element is " << arr[n-1] << endl;
	starline(50);
}





void oddevenarr() {
	int arr[100], n;
	cout << " How much element you want to enter : ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << " Enter Element for - " << i + 1 << " :";
		cin >> arr[i];
	}
	starline(50);
	cout << " Even elements are " << endl;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			cout << " " << arr[i] << " " ;
		}
		
	}
	cout << endl << endl;
	
	cout << " Odd elements are " << endl;

	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 != 0) {
			cout << " " << arr[i] << " ";
		}
		
	}
	starline(50);

}




void arrascending() {
	int arr[100], n , temp;
	cout << " How much element you want to enter : ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << " Enter Element for - " << i + 1 << " :";
		cin >> arr[i];
	}
	for (int a = 0; a < n; a++) {
		for (int b = a + 1; b < n; b++) {
			if (arr[a] > arr[b]) {
				temp = arr[a];
				arr[a] = arr[b];
				arr[b] = temp;
			}
		}
	}
	starline(50);
	cout << " Following are the sorted array in ascending order :" << endl;
	for (int i = 0; i < n; i++) {
		
		cout << " " << arr[i] << " ";
	}
	starline(50);
}





void arrdescending() {
	int arr[100], n, temp;
	cout << " How much element you want to enter : ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << " Enter Element for - " << i + 1 << " :";
		cin >> arr[i];
	}
	for (int a = 0; a < n; a++) {
		for (int b = a + 1; b < n; b++) {
			if (arr[a] < arr[b]) {
				temp = arr[a];
				arr[a] = arr[b];
				arr[b] = temp;
			}
		}
	}
	starline(50);
	cout << " Following are the sorted array in descending order :" << endl;
	for (int i = 0; i < n; i++) {

		cout << " " << arr[i] << " ";
	}
	starline(50);
}


void insert_new_element_sorted() {
	int size, arr[100], value, temp;

	cout << " Enter number of element to be entered : ";
	cin >> size;
	for (int a = 0; a < size; a++) {
		cout << " Enter element for " << a + 1 << " :";
		cin >> arr[a];
	}

	cout << " Enter Value ";
	cin >> value;

	starline(20);
	cout << " Elements before insertion " << endl;
	for (int c = 0; c < size; c++) {
		cout << " Element at :" << c + 1 << " :" << arr[c] << endl;

	}
	starline(20);
	arr[size] = value;
	for (int a = 0; a < size; a++) {
		for (int b = a + 1; b < size; b++) {
			if (arr[a] > arr[b]) {
				temp = arr[a];
				arr[a] = arr[b];
				arr[b] = temp;
			}
		}
	}


	starline(20);
	cout << " Elements after insertion " << endl;
	for (int a = 0; a <= size; a++) {
		cout << " Element at : " << a + 1 << " :" << arr[a] << endl;
	}
	starline(20);
}





void insert_new_element() {
	int size, arr[100], position, value;

	cout << " Enter number of element to be entered : ";
	cin >> size;
	for (int a = 0; a < size; a++) {
		cout << " Enter element for " << a + 1 << " :";
		cin >> arr[a];
	}
	cout << " Enter position";
	cin >> position;
	position = position - 1;
	cout << " Enter Value";
	cin >> value;
	starline(20);
	cout << " Elements before insertion " << endl;
	for (int c = 0; c < size; c++) {
		cout << " Element at :" << c + 1 << " :" << arr[c] << endl;

	}
	starline(20);
	for (int a = size; a >= position; a--) {
		arr[a + 1] = arr[a];
	}
	arr[position] = value;
	starline(20);
	cout << " Elements after insertion " << endl;
	for (int a = 0; a < size + 1; a++) {
		cout << " Element at : " << a + 1 << " :" << arr[a] << endl;
	}
	starline(20);
}







void deleteElement() {
	int arr[100];
	int i, n, pos;

	cout << " How much element you want to enter : ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << " Enter Element for - " << i + 1 << " :";
		cin >> arr[i];
	}
	cout << " Elements before deleting ";
	starline(50);
	for (int i = 0; i < n; i++) {
		cout << " " << arr[i] << " ";
	}
	starline(50);
	/* Input element position to delete */
	cout <<"Enter the element position to delete : ";
	cin >> pos;


	/* If delete position is invalid */
	if (pos == n + 1 || pos<0)
	{
		cout << "Invalid position! Please enter position between 1 to " << n ;
	}
	else
	{
		/* Copy next element value to current element */
		for (i = pos - 1; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}

		/* Decrement array size by 1 */
		n--;
	}

	/* Print array after deletion */
	cout << "Elements of array after delete are : " << endl;
	starline(50);
	for (i = 0; i<n; i++)
	{
		cout <<" " << arr[i] << " ";
	}
	starline(50);

}




void secondlargest() {
	int arr[100], temp, n;
	cout << " How much element you want to enter : ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << " Enter Element for - " << i + 1 << " :";
		cin >> arr[i];
	}
	for (int a = 0; a < n; a++) {
		for (int b = a + 1; b < n; b++) {
			if (arr[a] > arr[b]) {
				temp = arr[a];
				arr[a] = arr[b];
				arr[b] = temp;
			}
		}
	}
	starline(50);
	
	cout << " The Second largest element is " << arr[n - 2] << endl;
	starline(50);
}

void secondsmalest() {
	int arr[100], temp, n;
	cout << " How much element you want to enter : ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << " Enter Element for - " << i + 1 << " :";
		cin >> arr[i];
	}
	for (int a = 0; a < n; a++) {
		for (int b = a + 1; b < n; b++) {
			if (arr[a] > arr[b]) {
				temp = arr[a];
				arr[a] = arr[b];
				arr[b] = temp;
			}
		}
	}
	starline(50);

	cout << " The Second smallest element is " << arr[1] << endl;
	starline(50);
}
void two_D_arr() {
	int arr[3][3], a, b;
	
	
	cout << " Input elements for 3 X 3 array" << endl;
	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 3; b++)
		{
			cout << " Element for -  : " <<  b  << " of " << a << " :";
			cin >> arr[a][b] ;
		}
	}
	cout << endl << " Now the matrix is " << endl;
	starline(40);
	for (a = 0; a<3; a++)
	{
		
		for (b = 0; b < 3; b++) {
			cout << " " << arr[a][b] << " ";
		}
		cout << endl << endl;
	}
	starline(40);
	
}



void addmatrix()
{
	int arr1[10][10], arr2[10][10], sum[10][10],size;
	cout << " Input the size of the matrix for both column and row size should be less than 5" << endl;
	cin >> size;
	size = size - 1;

	cout << endl <<" Enter elements for matrix 1" << endl << endl;
	for (int a = 0; a <= size; a++) {
		for (int b = 0; b <= size; b++) {
			cout << " Enter element for " << b  + 1 << " of " <<  a  + 1 << " :";
			cin >> arr1[a][b];
		}

	}
	cout << endl <<" Enter elements for matrix 2" << endl << endl;
	for (int a = 0; a <= size; a++) {
		for (int b = 0; b <= size; b++) {
			cout << " Enter element for " << b  + 1 << " of " <<  a  + 1 << " :";
			cin >> arr2[a][b];
		}

	}
	for (int a = 0; a <= size; a++) {
		for (int b = 0; b <= size; b++) {

			sum[a][b] = arr1[a][b] + arr2[a][b];
		}

	}
	starline(50);
	cout << " Matrix 1 " << endl;

	for (int a = 0; a <= size; a++) {
		for (int b = 0; b <= size; b++) {
			cout << " " << arr1[a][b] << " ";
		}
		cout << endl;
	}
	starline(50);
	cout << " Matrix 2 " << endl;

	for (int a = 0; a <= size; a++) {
		for (int b = 0; b <= size; b++) {
			cout << " " << arr2[a][b] << " ";
		}
		cout << endl;
	}
	starline(50);
	cout << endl << " The sum of both the matrices is " << endl;
	for (int a = 0; a <= size; a++) {
		for (int b = 0; b <= size; b++) {
			cout << " " << sum[a][b] << " ";
		}
		cout << endl;
	}
	starline(50);
}



void subtractionmatrix()
{
	int arr1[10][10], arr2[10][10], difference[10][10], size;
	cout << " Input the size of the matrix for both column and row size should be less than 5" << endl;
	cin >> size;
	size = size - 1 ;
	cout << endl <<" Enter elements for matrix 1" << endl << endl;
	for (int a = 0; a <= size; a++) {
		for (int b = 0; b <= size; b++) {
			cout << " Enter element for " << b  + 1 << " of " <<  a  + 1 << " :";
			cin >> arr1[a][b];
		}

	}
	cout << endl <<" Enter elements for matrix 2" << endl << endl;
	for (int a = 0; a <= size; a++) {
		for (int b = 0; b <= size; b++) {
			cout << " Enter element for " << b  + 1 << " of " <<  a  + 1 << " :";
			cin >> arr2[a][b];
		}

	}
	for (int a = 0; a <= size; a++) {
		for (int b = 0; b <= size; b++) {

			difference[a][b] = arr1[a][b] - arr2[a][b];
		}

	}
	starline(50);
	cout << " Matrix 1 " << endl;

	for (int a = 0; a <= size; a++) {
		for (int b = 0; b <= size; b++) {
			cout << " " << arr1[a][b] << " ";
		}
		cout << endl;
	}
	starline(50);
	cout << " Matrix 2 " << endl;

	for (int a = 0; a <= size; a++) {
		for (int b = 0; b <= size; b++) {
			cout << " " << arr2[a][b] << " ";
		}
		cout << endl;
	}
	starline(50);
	cout << endl << " The difference of both the matrices is " << endl;
	for (int a = 0; a <= size; a++) {
		for (int b = 0; b <= size; b++) {
			cout << " " << difference[a][b] << " ";
		}
		cout << endl;
	}
	starline(50);
}





void multiplicationmatrix()
{
	int arr1[10][10], arr2[10][10], product[10][10], size;
	cout << " Input the size of the matrix for both column and row size should be less than 5" << endl;
	cin >> size;
	size = size - 1;
	cout << endl << " Enter elements for matrix 1" << endl << endl;
	for (int a = 0; a <= size; a++) {
		for (int b = 0; b <= size; b++) {
			cout << " Enter element for " << b + 1 << " of " << a + 1 << " :";
			cin >> arr1[a][b];
		}

	}
	cout << endl << " Enter elements for matrix 2" << endl << endl;
	for (int a = 0; a <= size; a++) {
		for (int b = 0; b <= size; b++) {
			cout << " Enter element for " << b + 1 << " of " << a + 1 << " :";
			cin >> arr2[a][b];
		}

	}

	for (int row = 0; row <= 2; row++) {
		for (int column = 0; column <= 2; column++) {
			product[row][column] = 0;
			for (int i = 0; i <= size; i++) {
				product[row][column] = product[row][column] + arr1[row][i] * arr2[i][column];
			}

		}
	}

	starline(50);
	cout << " Matrix 1 " << endl;

	for (int a = 0; a <= size; a++) {
		for (int b = 0; b <= size; b++) {
			cout << " " << arr1[a][b] << " ";
		}
		cout << endl;
	}
	starline(50);
	cout << " Matrix 2 " << endl;

	for (int a = 0; a <= size; a++) {
		for (int b = 0; b <= size; b++) {
			cout << " " << arr2[a][b] << " ";
		}
		cout << endl;
	}
	starline(50);
	cout << endl << " The Multiplication of both the matrices is " << endl;
	for (int a = 0; a <= size; a++) {
		for (int b = 0; b <= size; b++) {
			cout << " " << product[a][b] << " ";
		}
		cout << endl;
	}
	starline(50);

	
}



void transpose() {
	int arr[10][10], size;
	cout << " Input the size of the matrix for both column and row size should be less than 5" << endl;
	cin >> size;
	size--;
	for (int a = 0; a <= size; a++) {
		for (int b = 0; b <= size; b++) {
			cout << " Enter element for " << b + 1 << " of " << a + 1 << " :";
			cin >> arr[a][b];
		}

	}
	cout << " The orignal matrix is " << endl;
	for (int a = 0; a <= size; a++) {
		for (int b = 0; b <= size; b++) {
			cout << " " << arr[a][b] << " ";
			
		}
		cout << endl;

	}

	cout << " The transposed matrix is " << endl;
	for (int a = 0; a <= size; a++) {
		for (int b = 0; b <= size; b++) {
			cout << " " <<  arr[b][a] << " ";

		}
		cout << endl;

	}
}



void sumrightdiagonal() {
	int arr[10][10], inverse,size,sum = 0;
	cout << " Input the size of the matrix for both column and row size should be less than 5" << endl;
	cin >> size;
	size--;
	inverse = size + 1;
	for (int a = 0; a <= size; a++) {
		for (int b = 0; b <= size; b++) {
			cout << " Enter element for " << b + 1 << " of " << a + 1 << " :";
			cin >> arr[a][b];
		}

	}
	for (int a = 0; a <= size; a++) {
		inverse--;
			sum = sum + arr[a][inverse] ;

	}
	cout << " The matrix of entered elements is :" << endl;
	for (int a = 0; a <= size; a++) {
		for (int b = 0; b <= size; b++) {
			cout << " " << arr[b][a] << " ";

		}
		cout << endl;

	}
	cout << endl << " The sum of right diagonal elements is :" << sum << endl;



}


void sumleftdiagonal() {
	int arr[10][10], size, m = 0, sum = 0, col = -1;
	cout << " Input the size of the matrix for both column and row size should be less than 5" << endl;
	cin >> size;
	size--;
	for (int a = 0; a <= size; a++) {
		for (int b = 0; b <= size; b++) {
			cout << " Enter element for " << b + 1 << " of " << a + 1 << " :";
			cin >> arr[a][b];
		}

	}
	for (int a = 0; a <= size; a++) {
		col++;
		sum = sum + arr[a][col];

	}
	cout << " The matrix of entered elements is :" << endl;
	for (int a = 0; a <= size; a++) {
		for (int b = 0; b <= size; b++) {
			cout << " " << arr[b][a] << " ";

		}
		cout << endl;

	}
	cout << endl << " The sum of left diagonal elements is :" << sum << endl;


}


void SumRowCol() {
	int arr[10][10], sumarr[10],sumrow[10], sumcol[10],size, m = 0, sum = 0;
	cout << " Input the size of the matrix for both column and row size should be less than 5" << endl;
	cin >> size;
	size--;
	for (int row = 0; row <= size; row++) {
		for (int col = 0; col <= size; col++) {
			cout << " Enter element for " << col + 1 << " of " << row + 1 << " :";
			cin >> arr[row][col];
		}

	}
	for (int row = 0; row <= size; row++) {
		sumrow[row] = 0;
		for (int col = 0; col <= size; col++) {
			sumrow[row] = sumrow[row] + arr[row][col];
		}
	}
	for (int row = 0; row <= size; row++) {
		sumcol[row] = 0;
		for (int col = 0; col <= size; col++) {
			sumcol[row] = sumcol[row] + arr[col][row];
		}
	}
	cout << " The matrix of entered elements is :" << endl;
	for (int a = 0; a <= size; a++) {
		for (int b = 0; b <= size; b++) {
			cout << " " << arr[b][a] << " ";

		}
		cout << endl;

	}
	cout << " The sum of rows and column is :" << endl;
	for (int a = 0; a <= size; a++) {
		for (int b = 0; b <= size; b++) {
			cout << " " << arr[a][b] << " ";
		}
		cout << "  "  << sumrow[a] << endl;
	}
	cout << endl;
	for (int col = 0; col <= size; col++) {
		cout << " " << sumcol[col] << " " ;
	}
	cout << endl;
}