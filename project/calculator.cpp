#include <iostream>
#include <cmath>
using namespace std ;

float basic_cal(){

    float num1;
    float num2;
    cout << "enter both numbers you \n";
    cin >> num1 >> num2 ;

    string operation;
    cout << "what you want to do in basic calculation \n '+' , '-' , '*' , '/' , ","\n";
    cin >> operation;

    if (operation == "+"){
        cout << "your answer is : " << (num1 + num2) <<"\n";
    }

    else if(operation == "-"){
        cout << "your answer is : " << num1 - num2  <<"\n";
    }

    else if (operation == "*"){
        cout << "your answer is : "  << num1 * num2  <<"\n";
    }

    else if (operation == "/"){
        if(num2 != 0){
            cout << "your answer is :"<< num1/num2 <<"\n";
        }
        else{
            cout << "invalid input \n";
        }
    }
    else{
        cout << "invalid  input \n";
    }

    return num2;
}

float bmi_cal() {
    float weight;
    float heigth;

    cout << "yuor weight in KG is \n ";
    cin >> weight;

    cout << "your height in cm \n";
    cin >> heigth;
    float height_cm = heigth/100;
    float heightuse = height_cm*height_cm;
    float bmi = weight / heightuse ;

    if(bmi <= 16){
        cout << "your BMI is "<< bmi << " severe thinness \n";
    }
    else if (bmi >= 16 && bmi <= 17){
        cout << "your BMI is  "<<  bmi << " moderate thinness \n";
    }
    else if (bmi >= 17 && bmi <= 18.5){
        cout << "your BMI is " << bmi << " mild thinness \n";
    }
    else if (bmi >= 18.5 && bmi <= 25){
        cout << "your bmi is "<< bmi << " normal";
    }
    else if (bmi >= 25 && bmi <= 30){
       cout << "yuor bmi is  "<< bmi << "overweight";
    }
    else if(bmi >= 30 && bmi <= 35){
        cout << "you bmi is "<< bmi << " obese class 1 \n";
    }
    else if (bmi >= 35 && bmi <= 40){
        cout << "your bmi is " << bmi << " obese class 2 \n";
    }
    else if(bmi >= 40){
        cout << "your bmi is "<<bmi<<" obese class 3 \n";
    }
}

float distance_changer(){
    float distance ;
    string unit ;
    cout << "first enter number along with unit \n";
    cin >> distance >> unit ;

    if (unit == "kilo"){
        cout << distance * 1.60934 <<"Miles \n";
    }
    else if (unit == "miles"){
        cout << distance / 1.60934 << "kilometer \n";
    }
}

float function_maths (char cmath_function, float number){
    cout << "In this you can get \n a. Square root of any number \n b. logrithmic of any number \n c. round off of any decimal \n";
    cin >> cmath_function;
    if(tolower(cmath_function) == 'a'){
        cout << "the square root of ", number, " is ", sqrt(number),"\n";
    }
    else if (tolower(cmath_function) == 'b'){
        cout << "the logrithmic number of ", number , " is ", log(number),"\n";
    }
    else if (tolower(cmath_function) == 'c'){
        cout << "the round off the number ",number," is ",round(number),"\n";
    }
    else{
        cout<<"invalid input \n";
    }
}

int main (){
    char selector;

    cout << "list of calculation we can do type the alphabet in front of it  \n  A. Basic Calculator\n  B. BMI Calculator\n C. Distance Changer\n";
    cin >> selector;

    while(true){
        if (tolower(selector) == 'a'){
            basic_cal();
        }
        else if(tolower(selector) == 'b'){
            bmi_cal();
        }
        else if(tolower(selector) == 'c'){
            distance_changer();
        }
        else{
            cout << "invalid input";
            break;
        }
    }
    return 0;
}