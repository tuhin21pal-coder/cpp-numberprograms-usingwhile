#include<iostream>

int main(){
    int n;
    std::cout<<"Enter a number : ";
    std::cin>>n;
    int original = n;
    int new_num = 0;
    while(n>0){
        int prod = 1;
        int rem = n%10;
        int i = 1;
        while(i<=rem){
            prod *= i;
            i++;
        }
        new_num += prod;
        n/=10;
    }
    if(original == new_num){
        std::cout<<"Strong Number.";
    }
    else{
        std::cout<<"Not a Strong Number.";
    }
    return 0;
}