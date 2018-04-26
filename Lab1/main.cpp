#include <iostream>

using namespace std;
void whichprogram();
void diagram();
void factorials();
void arrysorting();
int main()
{



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

cout << "Enter 5 Array elements";
for(int a = 0 ; a <= 5 ; a++ ){
    int arr[5];
    cout << "Enter element for array -" << a << endl;
    cin >> arr[a];
}
for(int b = 0 ; b <= 5 ; b++){
    cout << "The element for array - " << b << " is "<< endl;
    cout << arr[b];
}


}




