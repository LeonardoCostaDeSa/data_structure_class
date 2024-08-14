//8.	Crie um programa que solicite ao usuário os três ângulos de um triângulo e 
//informe se este é um triângulo equilátero, isósceles ou escaleno.

#include<iostream>
using namespace std;

void asking_for_angles(float &angle_1, float &angle_2, float &angle_3){

    cout<<"What are the angles of the triangle?: \n";
    cin>>angle_1>>angle_2>>angle_3;
}

void defining_triangle_type(float angle_1, float angle_2, float angle_3){

    if (angle_1 + angle_2 + angle_3 != 180){

        cout<<"The numbers you've provided are not from a triangle. Please, try again!";
    }
    
    else if (angle_1 == angle_2 && angle_1 == angle_3){

        cout<<"The triangle is equilateral";
    }

    else if(angle_1 == angle_2 || angle_1 == angle_3){

        cout<<"The triangle is isosceles";
    }
    else{

        cout<<"The triangle is scalene";
    }

}

main(){

    float angle_1, angle_2, angle_3;

    asking_for_angles(angle_1, angle_2, angle_3);
    defining_triangle_type(angle_1, angle_2, angle_3);
    return 0;
}