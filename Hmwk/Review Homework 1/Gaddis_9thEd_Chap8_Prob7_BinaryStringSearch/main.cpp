/* 
 * File:   main.cpp
 * Author: Songran Zhang
 * Created on September 11, 2022, 11:57 AM
 * Purpose:  Binary search array of strings
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <string>    //String Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes
void bubSort(string [],const int);
bool biSrch(string [],string,const int);

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                               "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                               "Taylor, Terri", "Johnson, Jill",
                               "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                               "James, Jean", "Weaver, Jim", "Pore, Bob",
                               "Rutherford, Greg", "Javens, Renee",
                               "Harrison, Rose", "Setzer, Cathy",
                               "Pike, Gordon", "Holland, Beth" },
           name;
    bool fdOrNot;

    //Initialize Variables
    cout<<"This program searches an array of strings by "
            "using binary search."<<endl;
    cout<<"Input a full name(e.g. Collins, Bill): ";
    getline(cin,name);
    
    //Map the inputs/known to the outputs
    bubSort(names,NUM_NAMES);
    fdOrNot=biSrch(names,name,NUM_NAMES);
    
    //Display the outputs
    if(fdOrNot==true)
        cout<<"This name is in the list.";
    else
        cout<<"This name is not in the list.";
    
    //Exit the program
    return 0;
}

void bubSort(string names[],const int NUM_NAMES){
    for(int max=NUM_NAMES-1;max>0;max--){
        for(int i=0;i<max;i++){
            if(names[i]>names[i+1]){
                string temp;
                temp=names[i];
                names[i]=names[i+1];
                names[i+1]=temp;
            }
        }
    }
}

bool biSrch(string names[],string name,const int NUM_NAMES){
    int fst=0,
        lst=NUM_NAMES-1,
        mid;
    bool fd=false;
    while(!fd&&fst<lst){
        mid=(fst+lst)/2;
        if(names[mid]==name)
            fd=true;
        else if (names[mid]>name)
            lst=mid-1;
        else if (names[mid]<name)
            fst=mid+1;
    }
    return fd;
}
