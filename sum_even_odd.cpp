#include<iostream>

int main(){
    int n;
    std::cout<<"Enter a number : ";
    std::cin>>n;
    int even_sum = 0;
    int odd_sum = 0;
    while(n>0){
        int rem = n%10;
        if(rem % 2 == 0){
            even_sum += rem;
        }
        else{
            odd_sum += rem;
        }

        n/=10;
    }

    std::cout<<"Even Sum = "<<even_sum<<'\n';
    std::cout<<"Odd Sum = "<<odd_sum;

    return 0;
}