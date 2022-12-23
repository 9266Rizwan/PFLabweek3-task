#include <iostream> 
using namespace std;
main()
{
int number;
int total;

cout << "Please enter five numbers = " ;
cin >> number;

total=(number%10)+(number/10)%10+(number/100)%10+(number/1000)%10+(number/10000);
 
cout << "Total = "<< total ;

}