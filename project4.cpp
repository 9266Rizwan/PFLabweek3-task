#include <iostream>
using namespace std;
main()
{

string Name;
float subject1;
float subject2;
float subject3;
float subject4;
float subject5;
float Percentage;
float Obtained;
int Total;
Total = 500 ;

cout << " Enter your name : " ;
cin >> Name;

cout << "Enter your subject 1 marks : ";
cin >> subject1;

cout << "Enter your subject 2 marks : ";
cin >> subject2;

cout << "Enter your subject 3 marks : ";
cin >> subject3;

cout << "Enter your subject 4 marks : ";
cin >> subject4;

cout << "Enter your subject 5 marks : ";
cin >> subject5;

Obtained = subject1+subject2+subject3+subject4+subject5;
Percentage=Obtained/Total*100;

cout << "Your Name             : " << Name    << endl;
cout << "Your total marks      : " <<Obtained<<"/500"<< endl ;
cout << "Yout marks percentage : " << Percentage<<"%" << endl ;

}
