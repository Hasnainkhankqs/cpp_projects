#include <iostream>
#include<iomanip>


using namespace std;
void whichprogram();
void diagram();
void factorials();
void arrysorting();
void leftPattern();
void numSquare();
void desiredFactorial();
void xpower();
void numberPattern();
void printParamide();
void numberPattern2();
void numberPattern3();
void primenubers();

int main(){



   whichprogram();
    return 0;
}
//which program do you want to execute
void whichprogram(){

    int bring;

    cout << "Enter a number to find program" << endl;
    cout << "1 - Diagram Learning C " << endl;
    cout << "2 - The factorials of integers given by user" << endl;
    cout << "3 - Sorting" << endl;
    cout << "4 - Left pattern" << endl;
    cout << "5 - Square of numbers up-to 100" << endl;
    cout << "6 - Desired Factorial" << endl ;
    cout << "7 - Y to the power X" << endl ;
    cout << "8 - Number pattern" << endl ;
    cout << "9 - print paramide" << endl;
    cout << "10 - Number pattern 2" << endl;
    cout << "11 - Number pattern 3" << endl;
    cout << "12 - Prime numbers up-to 100" << endl;




    cin >> bring;
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
        desiredFactorial();
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

}










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
 whichprogram();
}



















//factorials program
void factorials(){
//sort array up-to your desired numbers
//array sorting
//array sorting program

int c = 1;
    int num ;
    cout << "Enter Range for factorials";
    cin >> num;
    if(num == 0 ){
        cout << "0";
    }
    else{
         for(int b = 1 ; b <= num; b++){
        c = c * b;
        // c *= b;
    }
    cout << c;
    }
 whichprogram();
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
 whichprogram();
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
 whichprogram();
}





















void numSquare(){

int a ,b ;
b=1;
for(a = 1; a < 101 ; a++){
    b = a * a;
    cout << b << endl;
}
 whichprogram();
}























void desiredFactorial(){
    int num , a , b;
    b = 1;
    cout << "Enter number for to be factorial";
    cin >> num;
    for(a = 1 ; a <= num  ; a++){
            b = b * a;
    }
    cout << b ;
 whichprogram();

}




























void xpower(){

int x,y,b ;
b=1;
cout << "Enter y";
cin >> y;
cout << "Enter x";
cin >> x;

for(int a = 1; a <= x ; a++){

 b =  b * y;
}
cout << b;
 whichprogram();

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
 whichprogram();

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
 whichprogram();

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
 whichprogram();

}

















void numberPattern3(){

for(int  a = 1 ; a < 10 ; a++){
    for(int b = 1 ; b <= a ; b++){
        cout << a;
    }
    cout << endl;
}
 whichprogram();

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
