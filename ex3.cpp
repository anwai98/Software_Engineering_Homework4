#include<iostream>

class ImPart
{

    private:
    double real;
    double imaginary;

  public:
    ImPart(double m, double n)
    {
        real = m;
        imaginary = n;
    }
    ImPart()
    {
        std::cout<<"Complex Part"<<"\n";
    }

    double summation_complex(ImPart n1, ImPart n2) {
        double sum_real_part = n1.real + n2.real;
        double sum_imaginary_part = n1.imaginary + n2.imaginary;

        std::cout<<"The sum of the two complex numbers is: "<<sum_real_part<<" + i*"<<sum_imaginary_part<<"\n";
    }

};
