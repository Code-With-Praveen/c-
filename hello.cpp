#include<iostream>
using namespace std;
int main(){
    
    int a,b,c;
    cout<<"enter number 1: ";
    cin>>a;
    cout<<"enter number 2: ";
    cin>>b;
    c=b;
    b=a;
    a=c;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
    return 0;
}