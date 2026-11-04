#include<iostream>

int main(){
    int n;
    std::cout<<"Enter the range.";
    std::cin>>n;

    int i = 2;
    while(i<=n){
        int j = 1;
        int isPrime = 1;
        while(j<i){
            if(i%j == 0 && j != 1){
                isPrime = 0;
            }
            j++;
        }
        if(isPrime){
            std::cout<<i<<'\t';
        }
        i++;
    }
}