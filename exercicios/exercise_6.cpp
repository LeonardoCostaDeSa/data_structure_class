//6.	Escreva m programa que solicite ao usuário a idade 
//de uma pessoa e informe se essa pessoa é criança (0 a 11 anos), 
//adolescente (12 a 17 anos), adulta (18 a 49 anos) ou idosa (a partir de 50 anos). 

#include<iostream>
using namespace std;

void ask_for_age (int &age){

    cout << "How old are you?";
    cin >> age;

}

void defing_phase_of_life(int age){

    if (age<=11){
        cout<<"Child";
    }
    else if(age>11 & age <=17){
        cout<<"Adolescent";
    }
    else if(age>17 & age <= 50){
        cout<<"Adult";
    }
    else{
        cout<<"Elderly";
    }
}

main(){
    
    int age = 0;

    ask_for_age(age);
    defing_phase_of_life(age);
    return 0;

}
