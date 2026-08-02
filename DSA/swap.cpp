#include<iostream>
using namespace std;
int main() {

    int a =9;
    int b=7;

   
    int temp = a;
     a= b;
     b= temp;
    cout << a << b;
}