//9.	Escreva um programa que solicite ao usuário quatro números e mostre na tela o maior, 
//o menor e a média aritmética dos números digitados.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void asking_for_number(float &number_1,float &number_2,float &number_3,float &number_4){

    float list_numbers [] = {number_1,number_2,number_3,number_4};

    cout<<"What are the number you'd like to test?";
    cin>>number_1>>number_2>>number_3>>number_4;
}

void greater_and_smaller(float number_1,float number_2,float number_3,float number_4){

    float list_numbers [] = {number_1,number_2,number_3,number_4};

    float greater = *max_element(list_numbers, list_numbers + 4);
    float smaller = *min_element(list_numbers, list_numbers + 4);

    cout<<greater<<" is the greater number \n";
    cout<<smaller<<" is the smaller number \n";

}

void average(float number_1,float number_2,float number_3,float number_4){

    float calculate_average = (number_1+number_2+number_3+number_4)/4;

    cout<<"The average of the numbers is "<<calculate_average;  
}

main(){

    float number_1, number_2, number_3, number_4;

    asking_for_number(number_1, number_2, number_3, number_4);
    greater_and_smaller(number_1, number_2, number_3, number_4);
    average(number_1, number_2, number_3, number_4);
    return 0;

}