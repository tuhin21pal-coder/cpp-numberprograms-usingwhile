#include<iostream>

int main(){
    int range;
    std::cout<<"Enter the range : ";
    std::cin>>range;
    int a = 0,b = 1;
    int c;
    int i = 1;
    std::cout<<a<<'\t';
    std::cout<<b<<'\t';
    while(i<=range){
        c= a+b;
        std::cout<<c<<'\t';
        a = b;
        b = c;
        i++;
    }
    return 0;
}