#include<iostream>
double calculate_circlearea(double radius);
double calculate_rectanglearea(double length, double width);
double calculate_trianglearea(double base, double height);
int main()
{
    do
    {
        int choice;
        double area=0;
        std::cout<<"\n*********************\n";
        std::cout<<"*********************\n";
        std::cout<<"Press 1 to calculate area of circle\n";
        std::cout<<"Press 2 to calculate area of rectangle\n";
        std::cout<<"Press 3 to calculate area of triangle\n";
        std::cout<<"Press 0 to exit\n";
        std::cout<<"Enter your choice : \n";
        std::cin>>choice;
        std::cout<<"*********************\n";
        std::cout<<"*********************\n";
        if (choice==0)
        {
            std::cout<<"You have been exited successfuly.........!";
            break;
        }
        if (choice==1)
        {
            double radius;
            std::cout<<"Enter value of Radius : ";
            std::cin>>radius;
            area=calculate_circlearea(radius);
            std::cout<<"Area of circle is : "<<area;
        }
        if (choice==2)
        {
            double length,width;
            std::cout<<"Enter value of Length : ";
            std::cin>>length;
            std::cout<<"Enter value of Width : ";
            std::cin>>width;
            area=calculate_rectanglearea(length, width);
            std::cout<<"Area of Rectangle is : "<<area;
        }
        if (choice==3)
        {
            double base,height;
            std::cout<<"Enter value of base : ";
            std::cin>>base;
            std::cout<<"Enter value of Height : ";
            std::cin>>height;
            area=calculate_trianglearea(base, height);
            std::cout<<"Area of Triangle is : "<<area;
        }   
    } while (true);
    return 0;
}
double calculate_circlearea(double radius){
    double result = 3.14 * radius * radius;
    return result;
}
double calculate_rectanglearea(double length, double width){
    double result=length*width;
    return result;
}
double calculate_trianglearea(double base, double height){
    double result = (1.0/2.0)*base*height;
    return result;
}
