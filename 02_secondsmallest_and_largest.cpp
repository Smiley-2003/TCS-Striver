//Find second smallest and second largest element in an array
//Author : Naina Mogha
//Date : 29 August,2024
#include<bits/stdc++.h>
using namespace std;

void getELements(int arr[],int n)
{
    if(n==0|| n==1)
       cout<<-1<<" "<<-1<<endl;//edge case when only
    sort(arr,arr+n);
    int small = arr[1];
    int large = arr[n-2];
    cout<<"Second smallest is "<<small<<endl;
    cout<<"Second largest is "<<large<<endl;
}

int main(){
    int arr[] = {1,2,4,6,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    getELements(arr,n);
    return 0;
}