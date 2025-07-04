//Check if a number is Palindrome or Not
//Author : Naina Mogha
//Date : 29 August,2024
#include<bits/stdc++.h>
using namespace std;

// Function to check if a 
//given integer is a Palindrome
bool palindrome(int n)
{
    int revNum = 0;
    
    int dup = n;
    
    while(n>0){
        int ld = n % 10;
        revNum = revNum * 10+ld;
        n = n/10;
    }
    if(dup==revNum){
        return true;
    }else{
        return false;
    }
}

int main(){
    int number = 4554;
    
    if(palindrome(number)){
        cout<<number<<" is a palindrome. "<<endl;
    }else{
        cout<<number<<" is not a palindrome."<<endl;
    }
    return 0;
}