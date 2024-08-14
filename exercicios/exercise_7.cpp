// 7.	Escreva um programa que solicite ao usuário um ano qualquer e informe se esse ano é bissexto. 
//Um ano é considerado bissexto se ele for divisível por quatro, 
//mas não por 100. Ou então se ele for divisível por 400. 

#include<iostream>
using namespace std;

void asking_for_year(int &year){

    cout<<"Type the year you would like to know if it's bissextile: \n";
    cin>> year;
}

void is_bissextile(int year){

    if (year%400==0){
        cout<<"This year is bissextile!";
    }
    else if(year%4==0 & year%100!=0){
        cout<<"This year is bissextile!";
    }
    else{
        cout<<"This yaer is not bissextile!";
    }
}

main(){
    
    int year = 0;

    asking_for_year(year);
    is_bissextile(year);
    return 0;

}