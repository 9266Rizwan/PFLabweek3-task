#include <iostream>
using namespace std;
main()
{
string name;
int adult;
int child;
int noofadult;
int noofchild;
int total;
float donation;
float afterdonation;
float percentage;

cout << "Enter your name :" ;
cin >> name;

cout << "Enter Adult Tickt Price  : ";
cin >> adult;

cout << "Enter Child Tickt Price  : ";
cin >> child;

cout << "NO. of Adult ticket sold : ";
cin >> noofadult;

cout << "NO. of Child ticket sold : ";
cin >> noofchild;

cout << "Percentage of donation   : ";
cin >> percentage;

total =noofadult*adult+noofchild*child;
donation=total*percentage/100;
afterdonation=total-donation;

cout << "Total amount          = " << total<<endl ;
cout << "Amount after donation = " << afterdonation ;
}
