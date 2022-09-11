/* 
 * File:   main.cpp
 * Author: Songran Zhang
 * Created on September 10, 2022, 10:44 PM
 * Purpose:  Predict the size of a population of organisms
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
    unsigned nOrg;//The starting number of organisms unsigned int 
    unsigned short nDays;//The number of days which is use to multiply
    float avgDlyP;//The average daily population increase of the organisms
    
    //Initialize Variables
    cout<<"This program predict the size of a population of organisms."<<endl;
    do{
        cout<<"Input the starting number of organisms: ";
        cin>>nOrg;
        if(nOrg<2)
            cout<<"Invalid input, the starting number must be greater "
                    "or equal to 2."<<endl;
    }while(nOrg<2);
    do{
        cout<<"Input their average daily population increase(as percentage): ";
        cin>>avgDlyP;
        if(avgDlyP<0)
            cout<<"Invalid input, the increase of the organisms "
                    "cannot be negative."<<endl;
    }while(avgDlyP<0);
    do{
        cout<<"Input the number of days: ";
        cin>>nDays;
        if(nDays<1)
            cout<<"Invalid input, the number of days must be greater "
                    "or equal to 1"<<endl;
    }while(nDays<1);
    
    //Map the inputs/known to the outputs
    for(int i=0;i<nDays;i++){
        nOrg*=(avgDlyP+100)/100;
        cout<<"Day "<<i<<": "<<nOrg<<endl;
    }
    
    //Display the outputs
    
    //Exit the program
    return 0;
}