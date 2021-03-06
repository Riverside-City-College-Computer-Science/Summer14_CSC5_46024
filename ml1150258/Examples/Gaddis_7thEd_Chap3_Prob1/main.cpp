/* 
 * File:   main.cpp
 * Author: Allison Lomheim
 * Created on July 2, 2014, 10:32 AM
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global COnstants

//Function Prototypes

//Program Begins Here
int main(int argc, char** argv) {
    //Input Variables
    unsigned short miles,gallons;
    //Output Variables
    float mpg;
    
    //Display on screen
    cout<<"Enter the number of miles your car can drive "
            "on a single tank of gas."<<endl;
    cin>>miles;
    cout<<"Enter the number of gallons your car can hold."<<endl;
    cin>>gallons;
    
    //Calculations
    mpg=static_cast<float>(miles)/gallons;
    mpg=miles/static_cast<float>(gallons);
    mpg=1.0f*miles/gallons;
    //mpg=miles/gallons;
    
    //Output the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"You car is capable of "<<mpg<<" miles per gallon."<<endl;
    
    //Run Program, Run!
    return 0;
}