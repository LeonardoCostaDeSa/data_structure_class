// 5.	Escreva um programa que solicite ao usuário um valor inteiro e informe se
// esse número é par ou ímpar. 

#include <iostream>
#include <cmath>
using namespace std;

void ask_for_integer(int &number){

    cout << "Type an integer number: \n";
    cin >> number;
}

void is_odd_or_even(int number){


    if(number%2==0){
        cout<<"The number is even";
    }
    else{
        cout<<"The number is odd";
    }
}

main(){
   
    int number = 0;

    ask_for_integer(number);
    is_odd_or_even(number);
    return 0;

}