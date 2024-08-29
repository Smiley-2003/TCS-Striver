//Count frequency of each element in the array
//Author : Naina Mogha
//Date : 29 August,2024
#include<bits/stdc++.h>
using namespace std;

void countFreq(int arr[],int n)
{
    vector<bool>visited(n,false);
    for(int i = 0; i < n; i++){
        //skip this element if already processed
        if(visited[i]==true)
        continue;
    }
    //Count frequency
    int count = 1;
    for(int j = i + 1; j < n; j++){
        if(arr[i] == arr[j]){
            visited[j] = true;
            count++;
        }
    }
    cout<<arr[i]<< " "<<count <<endl;
}

int main(){
    
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    countFreq(arr,n);
    return 0;
}