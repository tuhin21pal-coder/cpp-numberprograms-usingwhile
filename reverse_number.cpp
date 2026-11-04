#include<iostream>

int main(){
    std::cout<<"Enter a number : ";
    int n;
    std::cin>>n;
    int original = n;
    int new_num = 0;
    while(n > 0){
        new_num = new_num*10 + n%10;
        n/=10;
    }
    std::cout<<"Reverse = "<<new_num<<'\n';
    if(original == new_num){
        std::cout<<"Pallindrome.";
    }
    else{
        std::cout<<"Not Pallindrome.";
    }
    return 0;
}