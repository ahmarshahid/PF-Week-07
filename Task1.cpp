#include <iostream>
using namespace std;
void table(int number);
main()
{
int number;
cout << "Enter the number ";
cin >> number;
table(number);


}
void table(int number)
{
int x;
for (int count = 1 ; count <=10 ; count++)
{
    x = count * number;
    cout << number << "*" << count << "="  << x <<endl;

}



}