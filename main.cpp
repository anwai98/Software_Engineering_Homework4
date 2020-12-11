#include<iostream>
#include "ex1.cpp"
#include "ex2.cpp"
#include "ex3.cpp"

int main()
{
    double length_l, breadth_b;
    int no1, no2;
    double real1, imaginary1;
    double real2, imaginary2;

    MyRectangle rectangle;
    std::cout<<"For Finding Area of a Rectangle - Enter the Length of the Rectangle: "<<"\n";
    std::cin>>length_l;
    std::cout<<"Enter the breadth of the Rectangle: "<<"\n";
    std::cin>>breadth_b;
    std::cout<<"Area of the Rectangle: "<<rectangle.area_rectangle(length_l, breadth_b)<<"\n";

    Summation sum;
    std::cout<<"For Addition - Enter the first number: "<<"\n";
    std::cin>>no1;
    std::cout<<"Enter the second number: "<<"\n";
    std::cin>>no2;
    std::cout<<"The addition of two numbers: "<<sum.addition_numbers(no1, no2)<<"\n";

    std::cout<<"For the Complex - Enter the real part of the first number: "<<"\n";
    std::cin>>real1;
    std::cout<<"\n"<<"Enter the imaginary part of the first number: "<<"\n";
    std::cin>>imaginary1;
    std::cout<<"\n"<<"Enter the real part of the second number: "<<"\n";
    std::cin>>real2;
    std::cout<<"\n"<<"Enter the imaginary part of the second number: "<<"\n";
    std::cin>>imaginary2;
    std::cout<<"The first complex number is: "<<real1<<" + i*"<<imaginary1<<"\n";
    std::cout<<"The second complex number is: "<<real2<<" + i*"<<imaginary2<<"\n";
    ImPart complex_1(real1, imaginary1);
    ImPart complex_2(real2, imaginary2);
    ImPart complex_3;
    complex_3.summation_complex(complex_1, complex_2);

    return 0;
}
