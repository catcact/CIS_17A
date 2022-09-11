/* 
 * File:   main.cpp
 * Author: Songran Zhang
 * Created on August 23, 2022, 12:00 PM
 * Purpose:  Convert Celsius temperatures to Fahrenheit temperatures
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float inptC,//Celsius Temperature
         outptF;//Fahrenheit Temperature
                    
    //Initialize Variables
    cout<<"This program convert Celsius temperatures "
            "to Fahrenheit temperatures."<<endl;
    cout<<"Input the temperature in Celsius."<<endl;
    cin>>inptC;
    
    //Map the inputs/known to the outputs
    outptF=inptC*9.0/5.0+32;
    
    //Display the outputs
    cout<<inptC<<" °C = "<<outptF<<" °F";
            
    //Exit the program
    return 0;
}