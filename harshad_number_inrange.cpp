#include<iostream>

int main(){
    int range;
    std::cout<<"Enter the range : ";
    std::cin>>range;
    int i = 1;
    while(i<=range){
        int original = i;
        int num = i;
        int sum = 0;
        while(num>0){
            sum += num%10;
            num/=10;
        }
        if(original % sum == 0){
            std::cout<<original<<'\t';
        }
        sum = 0;
        i++;
    }
    return 0;
}