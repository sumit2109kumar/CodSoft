#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    char c;
    cout<<"Enter the operator"<<endl;
    cin>>c;
    if(c=='+'){
        cout<<"a + b = "<<a+b<<endl;
    }
    else if(c=='-'){
        cout<<"a - b = "<<a-b<<endl;
    }
    else if(c=='*'){
        cout<<"a * b = "<<a*b<<endl;
    }
    else if(c=='/'){
        cout<<"a / b = "<<a/b<<endl;
    }
    else if(c=='%'){
        cout<<"a % b = "<<a%b<<endl;
    }
    else{
        cout<<"ERROR"<<endl;
    }
    return 0;
}