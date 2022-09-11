/* 
 * File:   main.cpp
 * Author: Songran Zhang
 * Created on August 23, 2022, 12:54 PM
 * Purpose:  Display the number of days in a specific month
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
    unsigned short dys,//Number of days in a month
                   mth,//Which month in a year 1 to 12
                   yr; //number of year
    
    //Initialize Variables
    cout<<"This program display the number of days in a specific month."<<endl;
    cout<<"Input a month (1-12): ";
    cin>>mth;
    cout<<"Input a year: ";
    cin>>yr;
    
    //Map the inputs/known to the outputs
    dys=mth==1?31:
        mth==2?28:
        mth==3?31:
        mth==4?30:
        mth==5?31:
        mth==6?30:
        mth==7?31:
        mth==8?30:
        mth==9?31:
        mth==10?30:
        mth==11?31:
        mth==12?30:0;
    if(yr%100==0&&yr%400==0&&mth==2)//Determine the leap month
        dys=29;
    if(yr%100!=0&&yr%4==0&&mth==2)  //Determine the leap month
        dys=29;
    
    //Display the outputs
    cout<<dys<<" days";
    
    //Exit the program
    return 0;
}