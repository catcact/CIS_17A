/* 
 * File:   main.cpp
 * Author: Songran Zhang
 * Created on September 10, 2022, 11:59 PM
 * Purpose:  Read out a weather file ,then read in
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <fstream>   //File Library
#include <cstdlib>   //Random Number Library
#include <ctime>     //Time Library
#include <string>    //String Library
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
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    fstream out,//Read out weather.dat 
             in;//Read in weather.dat
    string wthFil="weather.dat";//File name
    unsigned char weather[3][30],//Row store month, Column store weather
                     rCS[]="RCS";//R for Rainy C, for cloudy, S for sunny
    unsigned short nMth,//Number of month
                    nDy,//Number of days in a month
                   nRDy,//Amount of rainy days in 3 month
                   nCDy,//Amount of cloudy days in 3 month
                   nSDy,//Amount of sunny days in 3 month
               r3Mth[3];//Number of rainy days in each month
    
    //Open Files
    out.open(wthFil,ios::out);
    in.open(wthFil,ios::in);
    
    //Initialize Variables
    nMth=3;
    nDy=30;
    nRDy=nCDy=nSDy=0;
    r3Mth[0]=r3Mth[1]=r3Mth[2]=0;
    
    //Write to weather.dat
    for(int d=0;d<90;d++){
        out<<rCS[rand()%3]<<endl;
    }
    
    //Map the inputs/known to the outputs
    for(int m=0;m<nMth;m++){
        for(int d=0;d<nDy;d++){
            in>>weather[m][d];
            switch(weather[m][d]){
                case 'R':nRDy++;
                         if(m==0)r3Mth[0]++;
                         if(m==1)r3Mth[1]++;
                         if(m==2)r3Mth[2]++;
                         break;
                case 'C':nCDy++;break;
                case 'S':nSDy++;break;
            }
        }
    }
    
    //Display the outputs
    cout<<"This program display how many how many days were rainy,"
            " how many were cloudy, how many were sunny,"<<endl;
    cout<<"and which of the three months had the largest number of "
            "rainy days"<<endl;
    cout<<"Number of rainy days in three month: "<<nRDy<<endl;
    cout<<"Number of cloudy days in three month: "<<nCDy<<endl;
    cout<<"Number of sunny days in three month: "<<nSDy<<endl;
    if(r3Mth[0]>r3Mth[1]&&r3Mth[0]>r3Mth[2])
        cout<<"June had the largest number of rainy days.";
    else if(r3Mth[1]>r3Mth[0]&&r3Mth[1]>r3Mth[2])
        cout<<"July had the largest number of rainy days.";
    else if(r3Mth[2]>r3Mth[0]&&r3Mth[2]>r3Mth[1])
        cout<<"August had the largest number of rainy days.";
    
    //Close files
    out.close();
    in.close();
    
    //Exit the program
    return 0;
}