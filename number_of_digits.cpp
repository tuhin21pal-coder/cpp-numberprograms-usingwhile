#include<iostream>

int main(){
    int number;
    std::cout<<"Enter a number : ";
    std::cin>>number;
    int count = 0;
    while(number > 0){
        count++;
        number /= 10;
    }
    std::cout<<"Number of digits : "<<count;
    return 0;
}