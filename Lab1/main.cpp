#include <iostream>

using namespace std;
void whichprogram();
void diagram();
void factorials();
void arrysorting();
int main()
{
/*
    int a , b;
    cout << "Enter For a";
    cin >> a;
    cout << "Enter For b";
    cin >> b;

    if(a > b){
        cout << a;
    }
    else{
        cout << b;
    }*/


   whichprogram();
    return 0;
}

void whichprogram(){
    int bring;
    cout << "Enter a number to find program" << endl;
    cout << "1 - Diagram Learning C " << endl;
    cout << "2 - The factorials of integers given by user" << endl;
    cout << "3 - Sorting" << endl;
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

}

//factorials program
void factorials(){

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

}
void arrysorting(){
 int i,a[10],temp,j;

 cout<<"Enter any 10 num in array: \n";
 for(i=0;i<=10;i++)
 {
 cin>>a[i];
 }
 cout<<"\nData before sorting: ";
 for(j=0;j<10;j++)
 {
 cout<<a[j];
 }
 for(i=0;i<=10;i++)
 {
 for(j=0;j<=10-i;j++)
 {
 if(a[j]>a[j+1])
 {
 temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 }
 }
 }
 cout<<"\nData after sorting: ";
 for(j=0;j<10;j++)
 {
 cout<<a[j];
 }

}



