#include <iostream>
using namespace std;
main()
{

int number;
int firstnumber;
int secondnumber;
int thirdnumber;
int fourthnumber;
int total;

cout << "Enter 4 digit number = ";
cin >> number;

firstnumber=(number%10);
secondnumber=(number/10)%10;
thirdnumber=(number/100)%10;
fourthnumber=(number/1000);

total=firstnumber+secondnumber+thirdnumber+fourthnumber;
cout << "Total = " << total ;

}
