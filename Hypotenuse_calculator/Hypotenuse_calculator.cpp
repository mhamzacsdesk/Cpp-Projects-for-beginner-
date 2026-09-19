#include<iostream>
#include<cmath>         //For power and squareroot functions
int main()
{
    double hypo,base,perpen;
    std::cout<<"*********Hypotenuse*********\n";
    std::cout<<"Enter the value of Base : ";
    std::cin>>base;
    std::cout<<"Enter the value of Perpendicular : ";
    std::cin>>perpen;
    hypo=sqrt(pow(base,2)+pow(perpen,2));    //or base=pow(base,2); perpen=pow(perpen,2); hypo=sqrt(base+perpen);
    std::cout<<"Hypotenuse is : "<<hypo<<std::endl;
    std::cout<<"****************************\n";
    return 0;
}