#include<iostream>

int main(){
    int n;
    std::cout<<"Enter a number : ";
    std::cin>>n;
    int i = 1;
    int sum = 0;
    while(i<=n/2){
        if(n%i == 0){
            sum += i;
        }
        i++;
    }
    if(n == sum){
        std::cout<<"Perfect Number.";
    }
    else{
        std::cout<<"Not a Perfect Number.";
    }

    return 0;
}