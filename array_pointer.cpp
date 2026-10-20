#include<iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p;
    p=&arr[0];
    cout<<p<<""<<*p<<"\n";
    cout<<*p+1<<" "<<*(p+1)<<"\n"; // Pointer to the first element of the array
    cout<<*p+2<<" "<<*(p+2)<<"\n";
    cout<<*p+3<<" "<<*(p+3)<<"\n";
    
    return 0;
}