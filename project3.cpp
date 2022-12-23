#include <iostream>
using namespace std;
main()
{

float InitialVelocity;
float Acceleration;
float Time;
float FinalVelocity;

cout << "Please enter initial velocity = " ;
cin >> InitialVelocity ;

cout << "Please enter acceleration     = " ;
cin >> Acceleration;

cout << "Please enter time             = " ;
cin >> Time ;

FinalVelocity =Acceleration*Time/InitialVelocity;

cout << "Final Velocity = " <<FinalVelocity ;

}