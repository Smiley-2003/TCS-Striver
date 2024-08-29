//Find all the Palindrome Numbers in a given range
//Author : Naina Mogha
//Date : 29 August,2024
#include<bits/stdc++.h>
using namespace std;

// Function to check if a 
//given integer is a Palindrome
bool palindrome(int n)
{
    int reverse = 0;
    int temp = n;
    while(temp>0){
        reverse = reverse * 10+ temp%10;
        temp = temp/10;
    }
    //If n and reverse are same
    //then n is palindrome
    if(dup==revNum) return true;
    return false;
    }
}

int main(){
    int min = 100;
    int max = 150;
    for(int  i = min; i<= max;i++){
        if(isPalindrome(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}