#include<iostream>

int main(){
    int n;
    std::cout<<"Enter a number : ";
    std::cin>>n;
    int i =2;
    int isPrime = 1;
    while(i<=n/2){
        if(n%i == 0){
            isPrime = 0;
        }
        i++;
    }
    if(isPrime){
        std::cout<<"Prime Number.";
    }
    else{
        std::cout<<"Not a Prime Number.";
    }
    return 0;
}