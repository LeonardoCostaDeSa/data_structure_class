// 1.	Crie um programa que solicite ao usuário os três
// coeficientes de uma equação do segundo grau e informe os valores de x’ e x’’. 

#include<iostream>
#include<cmath>
using namespace std ;

void calculate_roots(double a, double b, double c){
    
    double delta = b*b - 4*a*c; 

    if (delta >= 0){
        double x1 = (-b + sqrt(delta))/(2*a);
        double x2 = (-b - sqrt(delta))/(2*a);
        cout << "The value of the roots are: " << x1 << " and " << x2 << endl; 
    }
    else{
        cout << "It was not possible to calculate the roots!" << endl;
    }
}

void collect_coefficients(double &a, double &b, double &c){
    cout << "Enter the first coefficient: \n";
    cin >> a;
    cout << "Enter the second coefficient: \n";
    cin >> b;
    cout << "Enter the third coefficient: \n";
    cin >> c;
}

int main(){
    double a, b, c;
    collect_coefficients(a, b, c);
    calculate_roots(a, b, c);
    return 0;
}

