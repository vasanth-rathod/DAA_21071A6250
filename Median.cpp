#include "iostream"
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,arr[1000];
    cin>>n>>m;
    for(int i=0;i<n*m;i++)
    {
        cin>>arr[i];
    }
    sort((arr), arr + m*n);
    cout<<"Median is "<<arr[(m*n +1)/2];
}
