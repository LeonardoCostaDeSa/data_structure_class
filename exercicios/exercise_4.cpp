// 4.	Crie um programa que solicite ao usuário os lados de um trapézio e informe a sua área. 

#include<iostream>
#include<cmath>
using namespace std;

void ask_for_sides_trapezoid(double &major_side, double &minor_side, double &height){

    cout<<"Type the major side mesure: \n";
    cin>>major_side;
    cout<<"Type the minor side mesure: \n";
    cin>>minor_side;
    cout<<"Type the height side mesure: \n";
    cin>>height;
}

void calculate_trapezoid_area(double major_side, double minor_side, double height){


    double area = (((major_side+minor_side)*height)/2);
    cout<<"The trapezoid area is: " << area << " m2" << endl;

}

main(){

    double major_side, minor_side, height;
    ask_for_sides_trapezoid (major_side, minor_side, height);
    calculate_trapezoid_area(major_side, minor_side, height);
    return 0;
}