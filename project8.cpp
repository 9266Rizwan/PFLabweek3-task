#include <iostream>
using namespace std;
main()
{
float vegetableprice;
float fruitprice;
float noofvegetables;
float nooffruits;
float amountofvegetables;
float amountoffruits;
float totalcoins;

cout << "Enter vegetable price per kg = " ;
cin >> vegetableprice;

cout << "Enter fruit price per kg     = " ;
cin >> fruitprice;

cout << "Enter kilograms of vegetables= " ;
cin >> noofvegetables;

cout << "Enter kilograms of fruits    = " ;
cin >> nooffruits;

amountofvegetables=vegetableprice*noofvegetables;
amountoffruits=fruitprice*nooffruits;

totalcoins=amountofvegetables+amountoffruits;

cout << "Vegetable cost  =" <<noofvegetables*vegetableprice <<endl ;
cout << "Fruit cost      =" <<nooffruits*fruitprice <<endl;
cout << "Total           =" <<totalcoins;

}
