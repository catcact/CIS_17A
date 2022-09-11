/* 
 * File:   main.cpp
 * Author: Songran Zhang
 * Created on August 23, 2022, 12:25 Pm
 * Purpose:  Convert U.S. dollar amounts to Japanese yen and to euros
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
const float YEN_PER_DOLLAR=98.93,   //98.93 yen = 1 dollar
            EUROS_PER_DOLLAR=0.74;  //0.74 euro = 1 dollar

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float inptD,//Dollar amount
         outptY,//Yen amount
         outptE;//Euros amount
    
    //Initialize Variables
    cout<<"This program covert U.S. dollar amounts "
            "to Japanese yen and to euros."<<endl;
    cout<<"Input the amount of U.S. dollar."<<endl;
    cin>>inptD;
    
    //Map the inputs/known to the outputs
    outptY=inptD*YEN_PER_DOLLAR;//Convert Yen to Dollar
    outptE=inptD*EUROS_PER_DOLLAR;//Convert Euros to Dollar
    
    //Display the outputs
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<inptD<<" dollar = "<<outptY<<" Yen = "<<outptE<<" Euros";
    
    //Exit the program
    return 0;
}