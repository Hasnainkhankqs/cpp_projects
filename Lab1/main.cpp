#include <iostream>

using namespace std;
void whichprogram();
void diagram();
void factorials();
void arrysorting();
void temperature();
int main()
{
int a[3][4] = {
   {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
   {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
   {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
};

   //whichprogram();
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
     if(bring == 4){
        temperature();
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

void temperature(){


}


