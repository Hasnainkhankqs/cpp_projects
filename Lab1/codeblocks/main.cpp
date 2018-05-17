
#include <iostream>
#include<iomanip>
#include<string>
#include<math.h>
#include<conio.h>
#include<stdio.h>
#include <typeinfo>

using namespace std;



void starline(char,int);
void  whichprogram();
void diagram();
void factorials();
void arrysorting();
void leftPattern();
void numSquare();
void xpower();
void numberPattern();
void printParamide();
void numberPattern2();
void numberPattern3();
void primenubers();
void trigonomatry();
void crossAsteric();
void countDigits();
void atoz();
void sumfirstlast();
void findfirstlast();
void swapfirstlast();
void sumOfDigits();
void productOfDigits();
void Palindrome();
void reversenumber();
void numfrequency();






int main(){

whichprogram();

}
//which program do you want to execute
void whichprogram(){

    int bring;
    cout << endl;
    cout << "Enter a number to find program" << endl;
    cout << "1 - Diagram Learning C " << endl;
    cout << "2 - The factorials of integers given by user" << endl;
    cout << "3 - Sorting" << endl;
    cout << "4 - Left pattern" << endl;
    cout << "5 - Square of numbers up-to 100" << endl;
    cout << "6 - factorial " << endl;
    cout << "7 - Y to the power X" << endl ;
    cout << "8 - Number pattern" << endl ;
    cout << "9 - print paramide" << endl;
    cout << "10 - Number pattern 2" << endl;
    cout << "11 - Number pattern 3" << endl;
    cout << "12 - Prime numbers up-to 100" << endl;
    cout << "13 - Print trigonomatric functions for standard angels" << endl;
    cout << "14 - Cross Asteric" << endl;
    cout << "15 - Count Digits" << endl;
    cout << "16 - a to z from ASCII" << endl;
    cout << "17 - Sum of first and last number" << endl;
    cout << "18 - Find first and last Digits" << endl;
    cout << "19 - Swaping First and last digit" << endl;
    cout << "20 - Find sum of digits in a given number" << endl;
    cout << "21 - Find product of digits in a given number" << endl;
    cout << "22 - Check if a number is palindrome or not" << endl;
    cout << "23 - Reverse order of a given number" << endl;
    cout << "24 - Find How many times a digit occures in a number" << endl;




    cin >> bring;
bring = 7;
    if(bring == 1 ){
        diagram();
    }
    if(bring == 2){
        factorials();
    }
    if(bring == 3){
        arrysorting();
    }
    if(bring == 4){
        leftPattern();
    }
    if(bring == 5){
        numSquare();
    }
    if(bring == 6){
        factorials();
    }
    if(bring == 7){
        xpower();
    }
    if(bring == 8){
       numberPattern();
    }
    if(bring == 9){
       printParamide();
    }

    if(bring == 10){
       numberPattern2();
    }
    if(bring == 11){
       numberPattern3();
    }
    if(bring == 12){
       primenubers();
    }
    if(bring == 13){
       trigonomatry();
    }
    if(bring == 14){
        crossAsteric();
    }
    if(bring == 15){
        countDigits();
    }
    if(bring == 16){
        atoz();
    }
    if(bring == 17){
        sumfirstlast();
    }
    if(bring == 18){
        findfirstlast();
    }
    if(bring == 19){
        swapfirstlast();
    }
    if(bring == 20){
        sumOfDigits();
    }
    if(bring == 21){
        productOfDigits();
    }
    if(bring == 22){
        Palindrome();
    }
    if(bring == 23){
        reversenumber();
    }
    if(bring == 24){
        numfrequency();
    }

}


//this function will print star line

void  starline(char ch , int num){
    cout << endl;
    cout << endl;
        for(int a = 0 ; a <= num ; a++){

                cout << ch;
        }
        cout << endl;
        cout << endl;

    }
// star line funciton ended




// diagram program
void diagram(){

//   box characters https://www.wikiwand.com/en/Box-drawing_character
cout << "\xC9";
for(int a = 0 ; a<= 35; a++)
cout << "\xCD";
cout <<"\xBB";
for(int a = 0 ; a< 5; a++)
{
    if(a == 2){
        cout << "\n\xBA        Learning C programming      \xBA";
    }
    else{
        cout << "\n\xBA                                    \xBA";
    }

}
cout << "\n\xC8";
for(int a = 0 ; a<= 35; a++)
cout << "\xCD";
cout << "\xBC";

}



















//factorials program
void factorials(){
//sort array up-to your desired numbers
//array sorting
//array sorting program



long long c = 1;
    int num ;
    cout << " Enter Range for factorials ";
    cin >> num;
    if(num == 0 ){
        cout << "0";
    }
    else{
         for(int b = 1 ; b <= num; b++){
        c = c * b;
        // c *= b;
    }
    starline('*',20);
    cout << " " << c  ;
    starline('*',20);
    }

}















void arrysorting(){
 int i,sortingarr[5],temp,j;

 cout<<"Enter any 5 num in array: \n";
 for(i=0;i<5;i++)
 {
 cin>>sortingarr[i];
 }
 cout<<"\n Data before sorting: ";
 for(j=0;j<5;j++)
 {
 cout << sortingarr[j];
 }
 for(i = 0 ; i <= 5 ; i++){

 for(j=0 ; j <= 5-i; j++){

 if(sortingarr[j] > sortingarr[j+1] ){

 temp = sortingarr[j];

 sortingarr[j] = sortingarr[j+1];

 sortingarr[j+1] = temp;

 }
 }
 }
 cout<<"\nData after sorting: ";
 for(j=0;j<5;j++)
 {
 cout<<sortingarr[j];
 }

}















//left pattern
void leftPattern(){
    int outer , inner,lines;
    cout << "Enter amount of line to be printed";
    cin >> lines;
    for(outer=0 ; outer < lines ; outer++){
        for(inner=0 ; inner <= outer ; inner++ ){
            cout << "*";
        }
        cout << endl;
    }

}





















void numSquare(){

long long a ,b ,countnum;
countnum = 0;
b=1;
starline('*',100);
for(a = 1; a <= 100 ; a++){
    b = a * a;
    countnum = countnum + b;
    cout << left << setw(10) <<b ;
}
starline('*',100);
cout << "\n Total is " << countnum;
starline('*',100);
}



















































void xpower(){

int x,y,b ;
b=1;
cout << " Enter y :";
cin >> y;
cout << " Enter x :";
cin >> x;
starline('*',50);
for(int a = 1; a <= x ; a++){

 b =  b * y;
}

cout << y << " to the power " << x << " is " << b;
starline('*',50);

}





















void printParamide(){
int d = 0;

for(int a = 10; a >= 1; a--){

    for(int b = 1 ; b <= a ; b++){
    cout << " ";
    }
d++;
    for(int c = 1 ; c <d ; c++){
    cout << "*";
    }
    for(int e = d ; e >= 1  ; e--){
    cout << "*";
    }
cout << endl;
}


}






















void numberPattern(){


int f  = 0 ;
for(int g = 10 ; g >= 1 ; g--){
    for(int h = 1 ; h <= g ; h++){
        cout << " ";
    }
    f++;
    for(int i = 1 ; i < f ; i++ ){
        cout << i ;
    }
        for(int j = f ; j >= 1 ; j-- ){
        cout << j ;
    }
    cout << endl ;
}


}
























void numberPattern2(){
   int f  = 0 ;
for(int g = 9 ; g >= 1 ; g--){
    for(int h = 1 ; h <= g ; h++){
        cout << " ";
    }
    f++;
    for(int i = 1 ; i < f ; i++ ){
        cout << f ;
    }
        for(int j = f ; j >= 1 ; j-- ){
        cout << f ;
    }
    cout << endl ;
}


}

















void numberPattern3(){

for(int  a = 1 ; a < 10 ; a++){
    for(int b = 1 ; b <= a ; b++){
        cout << a;
    }
    cout << endl;
}


}













void primenubers(){

int d = 0;
for(int j = 1 ; j <= 100 ; j++){
for(int a = 1 ; a <= j ; a++){
    if(j%a == 0){
        d++;
    }

}
if(d <= 2){
     cout << left << setw(20)<< j;
    }
    d = 0 ;

}



}




























void trigonomatry(){


// code for writing text
cout << endl;
cout << "\xC9";
for(int a = 0 ; a<= 100; a++)
cout << "\xCD";
cout <<"\xBB";
for(int a = 0 ; a< 5; a++)
{
    if(a == 2){
        cout << "\n\xBA";
        for(int a = 0 ; a<= 30 ; a++){cout << " ";}
        cout <<   "Trignonomatric Functions";
        for(int a = 0 ; a<= 45 ; a++){cout << " ";}
        cout  << "\xBA";
    }
    else{
        cout << "\n\xBA" ;
        for(int a = 0 ; a<= 100; a++){cout << " ";}
        cout << "\xBA";
    }

}
cout << "\n\xC8";
for(int a = 0 ; a<= 100; a++)
cout << "\xCD";
cout << "\xBC";
cout << endl;
// code  ended for writing text





    cout << endl;
cout  << setw(6)<< " Angles" << setw(14)<< "0" << (char)248 << setw(17)<< "30" << (char)248 << setw(16)<< "45" << (char)248 << setw(16)<< "60" << (char)248 << setw(16)<< "90" << (char)248<< endl;
 for(int c = 0  ; c <= 100 ; c++){cout << "_";}
cout << endl;
cout << endl << left << setw(20) <<" Sin" ;

for(int a = 0; a <= 4 ; a++){

    cout << left << setw(17) << setprecision(2) << sqrt(a/4.0);
}
cout << endl;
cout << endl << left << setw(20) <<" Cos" ;
for(int a = 4; a >= 0 ; a--){

    cout << left <<  setw(17) << setprecision(2) << sqrt(a/4.0);
}
int d = -1;
cout << endl;
cout << endl << left << setw(20) <<" Tan" ;
for(int a = 4; a >= 0 ; a--){
d++;
    cout << left <<  setw(17) << setprecision(2) << (sqrt(d/4.0))/(sqrt(a/4.0));
}
cout << endl;
for(int c = 0  ; c <= 100 ; c++){cout << "_";}
cout << endl;

}











void crossAsteric(){


cout << "Enter amount of asteric rows";
    int n;
    cin >> n;
    for(int a = 1 ; a <= n ; a++){
        for(int b = 1 ; b <= n ; b++){
            if( ( a == b ) || b == (n+1)- a  ){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }





}


void countDigits(){

cout << "Enter a number";
long long n ;
cin >> n;
int count = 0 ;
while( n!=0 ){
  n =  n/10;
  ++count;
}
cout << count;

}

















void atoz(){

    cout << endl;
    int d = 0;
    for(int a =  97; a <= 122 ; a++)
    {
        d++;
        if(d <= 6){
            cout << left << setw(10) << " " << (char)a  ;

        }
        else{
            cout << endl;
            cout << endl;
            d = 0;
        }

    }

}















void sumfirstlast(){

long long a;
    int  r, fd, ld, sum, rev = 0;

    cout << "Enter a Number :";
    cin>>a;

    ld = a % 10;

    while (a > 0) {
        r = a % 10;
        rev = rev * 10 + r;
        a = a / 10;
    }

    fd = rev % 10;

    sum = ld + fd;

    cout << "\nSum Of First & Last digit :" << sum;


}





















void findfirstlast(){

long long a;
    int  r, fd, ld, rev = 0;

    cout << "Enter a Number :";
    cin>>a;

    ld = a % 10;

    while (a > 0) {
        r = a % 10;
        rev = rev * 10 + r;
        a = a / 10;
    }

    fd = rev % 10;



    cout << "\nThe first digit is :" << fd << endl;
    cout << "\nThe last digit is  :" << ld << endl;


}










void swapfirstlast(){
int num, afterswap;
    int firstDigit, lastDigit, digits;

    /* Input a number from user */
    cout << "Enter any number: ";
    cin >> num;

    /* Find last digit */
    lastDigit  = num % 10;

    /* Total number of digit - 1 */
    digits     = (int) log10(num);

    /* Find first digit */
    firstDigit = (int) (num / pow(10, digits));

    afterswap  = lastDigit;
    afterswap *= (int) round(pow(10, digits));
    afterswap += num % ((int)round(pow(10, digits)));
    afterswap -= lastDigit;
    afterswap += firstDigit;

    starline('*',50);

    cout << endl << " Number before swaping " << num << endl;
    cout << " Number after swaping " << afterswap << endl;

    starline('*',50);



}












void sumOfDigits(){

int remainder , num  , sum = 0;
cout << " Enter a number ";
cin >> num;
while (num > 0){
    remainder = num % 10;
    num = num / 10;
    sum = sum + remainder ;
}

starline('*',20);

    cout << " The sum of the digits is "<<  sum;

    starline('*',20);



}

























void productOfDigits(){

int remainder , num  , product = 1;
cout << " Enter a number ";
cin >> num;
while (num > 0){
    remainder = num % 10;
    num = num / 10;
    product = product * remainder ;
}
starline('*',20);
    cout <<" The product of the digits is " <<  product;
    starline('*',20);



}


void Palindrome(){

long long num, rem, orig, rev=0;
	cout<<"Enter a number that to be checked: ";
	cin>>num;
	orig=num;
	while(num !=0 )
	{
		rem = num%10;
		rev = rev*10 + rem;
		num = num/10;
	}
	if(rev == orig)  // check if original number is equal to its reverse
	{
	    starline('*',50);
		cout<< " Yes! The number you entered is Palindrome ";
		starline('*',50);
	}
	else
	{
	    starline('*',50);
		cout<<" No! The number you entered is Not Palindrome ";
		starline('*',50);
	}

}






























void reversenumber(){

long long num, rem, orig, rev=0;
	cout<<" Enter a number to be reverse: ";
	cin >> num;
	orig = num;
	while(num !=0 )
	{
		rem = num%10;
		rev = rev*10 + rem;
		num = num/10;
	}

	    starline('*',50);
        cout << " The reverse number for " << orig << " is " << rev;
        starline('*',50);

}









































void numfrequency(){
long long n, i, j, ctr, r;

    cout << " Input any number: ";
    cin >> n;
    starline('*',20);
    for (i = 0; i < 10; i++)
    {
        cout << " The frequency of " << i << " = ";
        ctr = 0;
        for (j = n; j > 0; j = j / 10)
        {
            r = j % 10;
            if (r == i)
            {
                ctr++;
            }
        }

        cout << " " << ctr << endl;

    }
    starline('*',20);

}
