//2.Crie um programa que solicite ao usuário os lados de um retângulo e informe a sua área. 
#include<iostream>
using namespace std;

void ask_for_sides_rectangle(double &side_a, double &side_b){

    cout<<"Type the first side mesure: \n";
    cin>>side_a;
    cout<<"Type the second side mesure: \n";
    cin>>side_b;
}

void calculate_rectangle_area(double side_a, double side_b){

    double area = side_a * side_b;
    cout<<"The rectangle area is: " << area << " m2" << endl;

}

main(){

    double side_a, side_b;
    ask_for_sides_rectangle(side_a, side_b);
    calculate_rectangle_area(side_a, side_b);
    return 0;
}
