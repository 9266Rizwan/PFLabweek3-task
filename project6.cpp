#include <iostream>
using namespace std;
main()
{
int pound;
float cost;
float area;

float costperpound;
float areapersquarefeet;

cout << "Enter weight in pounds         = ";
cin >> pound;

cout << "Enter cost of the bag          = " ;
cin >> cost;

cout << "Enter area covered by each bag = " ;
cin >> area;

costperpound=cost/pound;
areapersquarefeet=pound*area;

cout << "Cost of fertilizer per pound                 = " <<costperpound << endl ;
cout << "Cost of fertilizing the area per square feet = " <<areapersquarefeet;

}