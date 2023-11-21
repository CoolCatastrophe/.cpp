#include<iostream>
using namespace std;

int main() {
    int a,b,temp;
    a=5;
    b=10;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<"\t"<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<"\t"<<b<<endl;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<"\t"<<b<<endl;
    if (a==0){
        a=b;
        b=0;
    }
    else if (b==0) {
        b=a;
        a=0;
    }
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<a<<"\t"<<b;
}