#include<iostream>
int main()
{
 double num1,num2,result;
 char operation;
 std::cout<<"******Simple Calculator******\n";
 std::cout<<"Select the operator (+,-,*,/) : ";
 std::cin>>operation;
 std::cout<<"Enter 1st number : ";
 std::cin>>num1;
 std::cout<<"Enter 2nd number : ";
 std::cin>>num2;
 switch (operation)
 {
    case '+':
    result=num1+num2;
    break;
    case '-':
    result=num1-num2;
    break;case '*':
    result=num1*num2;
    break;case '/':
    result=num1/num2;
    break;
 default:
    std::cout<<"Please choose correct operator";
    break;
 }
 std::cout<<"Answer : "<<result<<std::endl;
std::cout<<"********************************";
    return 0;
}