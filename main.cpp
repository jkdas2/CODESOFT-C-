#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,choice,b,r;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    cout<<"***THIS IS YOUR CHOICE MANUAL***"<<endl;
    cout<<"ENTER 1 FOR ADDITION OPERATION"<<endl;
    cout<<"ENTER 2 FOR SUBTRACTION OPERATION"<<endl;
    cout<<"ENTER 3 FOR MULTIPLICATION OPERATION"<<endl;
    cout<<"ENTER 4 FOR DIVISION OPERATION"<<endl;
    cout<<"Enter your choice:";
    cin>>choice;
    switch(choice){
        case 1:r=a+b;
            cout<<"RESULT = "<<r;
        break;
        case 2:r=a-b;
            cout<<"RESULT = "<<r;
        break;
        case 3:r=a*b;
            cout<<"RESULT = "<<r;
        break;
        case 4:r=(float)(a/b);
            cout<<"RESULT = "<<r;
        break;
        default:
            cout<<"NOT A VALID ARITHMATIC OPERATION";
    }
return 0;
}