#include<iostream>
#include<cmath>
int main(){
    int number;
    std::cout<<"Enter a number : ";
    std::cin>>number;
    int original = number;
    int num = number;
    int power = 0;
    if(number == 0){
        power = 1;
    }
    while(number>0){
        power += 1;
        number/=10;
    }
    int new_num = 0;
    while(num>0){
        int digit = num%10;
        int p = 1;
        for(int i = 0; i < power; i++){
        p *= digit;
        }
        new_num += p;
        num /= 10;

    }
    std::cout << "\nPower: " << power;
    std::cout << "\nNew number: " << new_num;
    std::cout << "Original number: " << original<<'\n';
    if(new_num == original){
        std::cout<<"Armstrong Number.";
    }
    else{
        std::cout<<"Not an Armstrong Number.";
    }
    return 0;
    }