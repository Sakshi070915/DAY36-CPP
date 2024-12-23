/* 1.WAP that prompts the user to enter a number. 
If the number is negative, throw an exception. 
Catch and handle the exception to display an appropriate message */
#include <iostream>
using namespace std;

int main (){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    try{
        if (num<0){
            throw num;
        }
    cout<<"The number is "<<num<<endl;
    }
    catch (int num){
        cout<<"Enter a positive number"<<endl;
    }
    return 0;
}