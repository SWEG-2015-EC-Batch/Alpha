#include <iostream>

using namespace std;

//This program calculates the sum,difference, product, and the quotient of two complex numbers

struct complex_num{
    float real1,real2,imagin1,imagin2;
};

void sum(complex_num);
void multiply(complex_num);
void difference(complex_num);
void division(complex_num);

int main()
{
    complex_num number;
    int choice_num;
    cout<<"PLease enter the real part of the first complex number: ";
    cin>>number.real1;
    cout<<"Please enter the imaginary part of the first complex number: ";
    cin>>number.imagin1;
    cout<<"Please enter the real part of the second complex number: ";
    cin>>number.real2;
    cout<<"PLease enter the imaginary part of the second complex number: ";
    cin>>number.imagin2;

    cout<<"Choose from the following"<<endl;
    cout<<"1.Addition   2.Subtraction  3.Multiplication 4.Division"<<endl;
    cin>>choice_num;

    if(choice_num==1){
        sum(number);
    }
    else if(choice_num==2){
        difference(number);
    }
    else if(choice_num==3){
            multiply(number);
    }
    else{
        division(number);
    }


    return 0;
}


//For sum
void sum(complex_num data){
    float result=data.imagin1+data.imagin2;
    if(result<0){
        cout<<"The sum of the two complex numbers is: "<<data.real1+data.real2<<data.imagin1+data.imagin2<<"i";
    }

    else{
    cout<<"The sum of the two complex numbers is: "<<data.real1+data.real2<<" + "<<data.imagin1+data.imagin2<<"i";}
}


//For difference
void difference(complex_num data){
    float result=data.imagin2-data.imagin1;
    cout<<"This program subtracts the first complex number from the second complex number"<<endl;
    if(result<0){
        cout<<"The difference of the two complex numbers is: "<<data.real2 - data.real1<<data.imagin2-data.imagin1<<"i";
    }
    else{
        cout<<"The difference of the two complex numbers is: "<<data.real2-data.real1<<" + "<<data.imagin2-data.imagin1<<"i";
    }
}


//For multiplication
void multiply(complex_num data){
    float prod1,prod2,prod3,prod4,real_part,imaginary_part;
    real_part=data.real1*data.real2+(-1*(data.imagin1*data.imagin2));
    imaginary_part=data.real1*data.imagin2+data.imagin1*data.real2;
    if(imaginary_part<0){
        cout<<"The product of the two complex numbers is: "<<real_part<<imaginary_part<<"i";
    }
    else{
        cout<<"The product of the two complex numbers is: "<<real_part<<" + "<<imaginary_part<<"i";
    }

}


//For division
void division(complex_num data){
    float numerator_real1,numerator_imagin1,numerator_imagin2,numerator_real2,denomerator_real,denomerator_imagin;

    //for the numerator
    numerator_real1=data.real1*data.real2;
    numerator_imagin1=data.real1*(-1*(data.imagin2));
    numerator_imagin2=data.imagin1*data.real2;
    numerator_real2=-1*(data.imagin1*(-1*(data.imagin2)));
    float sum_real=numerator_real1+numerator_real2;
    float sum_imagin=numerator_imagin1+numerator_imagin2;

    //for denomerator
    denomerator_real=data.real2*data.real2;
    denomerator_imagin=data.imagin2*data.imagin2;
    float denomerator_sum=denomerator_real+denomerator_imagin;

    //For output
    float real_division=sum_real/denomerator_sum;
    float imagin_division=sum_imagin/denomerator_sum;
    cout<<"This program divides the first complex number by the second complex number"<<endl;
    if(imagin_division<0){
        cout<<"The quotient of the two complex numbers is: "<<real_division<<imagin_division<<"i";
    }
    else{
        cout<<"The quotient of the two complex numbers is: "<<real_division<<" + "<<imagin_division<<"i";
    }



}
