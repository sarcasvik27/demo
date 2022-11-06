#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int *ptr,n,i,start,end,temp;
    cin>>n;
    ptr=new int [n];
    for(i=0;i<n;i++)
    {
        cin>>ptr[i];
    }
    start=0;end=n-1;
    while(start<=end)
    {
        temp=ptr[start];
        ptr[start]=ptr[end];
        ptr[end]=temp;
        start++;
        end--;
    }
      for(i=0;i<n;i++)
      {
          cout<<ptr[i];
      }
    return 0;
}

