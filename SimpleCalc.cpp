#include<bits/stdc++.h>
using namespace std;
int main(){
    float a,b;
    char ch;
    cout<<"\tSimple Calculator"<<endl;
    cout<<"Enter 2 numbers"<<endl;
    cin>>a;
    cin>>b;
    cout<<"Enter Your Choice"<<endl;
    cin>>ch;
    float result;
    switch(ch){
        case '+': result=a+b;
        break;
        case '-': result=a-b;
        break;
        case '*': result=a*b;
        break;
        case '/': if(b==0){
            cout<<"Error! Cannot divide by zero"<<endl;
            exit(0);
        }
        result=a/b;
        break;
        default: cout<<"Invalid Operator"<<endl;
    }
    cout<<a<<" "<<ch<<" "<<b<<" = "<<result;
}