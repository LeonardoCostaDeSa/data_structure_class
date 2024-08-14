//3.Crie um programa que solicite ao usuário os lados de um triângulo e informe a sua área. 

#include<iostream>
#include<cmath>
using namespace std;

void ask_for_sides_triangle(double &side_a, double &side_b, double &side_c){

    cout<<"Type the first side mesure: \n";
    cin>>side_a;
    cout<<"Type the second side mesure: \n";
    cin>>side_b;
    cout<<"Type the third side mesure: \n";
    cin>>side_c;
}

void calculate_triangle_area(double side_a, double side_b, double side_c){

    // Here, as the three sides are known we're gonna use the Heron's formula:
    double semiper = (side_a + side_b + side_c)/2; // Semiperimeter
    double area = sqrt(semiper*(semiper - side_a)*(semiper - side_b)*(semiper - side_c));
    cout<<"The triangle area is: " << area << " m2" << endl;

}

main(){

    double side_a, side_b, side_c;
    ask_for_sides_triangle(side_a, side_b, side_c);
    calculate_triangle_area(side_a, side_b, side_c);
    return 0;
}
