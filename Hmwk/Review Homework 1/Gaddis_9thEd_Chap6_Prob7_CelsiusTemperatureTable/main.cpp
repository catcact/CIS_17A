/* 
 * File:   main.cpp
 * Author: Songran Zhang
 * Created on September 10, 2022, 11:29 PM
 * Purpose:  Display temperature table from 0 to 20°F with 
 *           their Celsius equivalents
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

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float cTemp,
          fTemp;
    
    //Initialize Variables
    cout<<"This program display a temperature table from 0 to 20°F "
            "with their Celsius equivalents."<<endl;
    fTemp=0;
    
    //Map the inputs/known to the outputs
    cout<<"°F"<<right<<setw(12)<<"°C"<<endl;
    do{
        cTemp=(fTemp-32)*5/9;
        cout<<left<<setw(10)<<fTemp<<left<<setw(10)<<cTemp<<endl;
        fTemp++;
    }while(fTemp<=20);
    
    //Display the outputs
    
    //Exit the program
    return 0;
}