#include<iostream>
using namespace std;
void update( int *a, int *b) {
    // Complete this function
    int temp= *a;
    *a=*a+*b;
    *b=temp-*b;
}
int main() {
     int a, b;
     int *pa = &a, *pb = &b;
    
    cin >>a>>b;
    update(pa, pb);
    if(b>0)
    cout<<a<<" "<<b;
    else
    cout<<a<<" "<<-1*b;
    return 0;
} 

