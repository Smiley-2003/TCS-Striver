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
    int p1=0, p2 = n - 1;
    while(p1 < p2){
        swap(arr[p1], arr[p2]);
        p1++;p2--;
    }
    printArray(arr,n);
}
int main(){
    int n = 5;
    int arr[] = {5,4,3,2,1};
    reverseArray(arr,n);
    return 0;
}