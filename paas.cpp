#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    string pass;
    char ch;
    int i;
    cout<<"Enter a 8-digit password: ";
    for(int i = 0; i<8; i++){
        pass += getch();
        cout<<"*";
    }
    getch();
    cout<<"\nHello Your Password is: "<<pass;
}