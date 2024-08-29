//Reverse a given array
//Author : Naina Mogha
//Date : 29 August,2024
#include<bits/stdc++.h>
using namespace std;

//Function to print array
void printArray(int arr[],int n){
    cout<<"The reversed array is:- "<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
    }
}
//Function to reverse array
void reverseArray(int arr[],int n){
    reverse(arr,arr+n);
}
int main(){
    int n = 5;
    int arr[] = {5,4,3,2,1};
    reverseArray(arr,n);
    printArray(arr, n);
    return 0;
}