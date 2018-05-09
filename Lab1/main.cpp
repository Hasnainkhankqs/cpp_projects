#include <iostream>

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


int main(){

for(int a = 10; a > 1; a--){
    for(int b = a ; b > 1 ; b--){
        cout << "*";
    }
    for(int c = 1 ; c <= a ; c++){
        cout << "+";
    }
    cout << endl;
}
for(int a = 1; a <= 10; a++){
    for(int b = 1 ; b <= a ; b++){
        cout << "*";
    }
    cout << endl;
}
  // whichprogram();
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
}











void numberPattern(){


}
