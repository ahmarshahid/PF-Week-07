#include <iostream>
using namespace std;
void calculateprice(int age, int machineprice, int price);
main()
{
    int age;
    float machineprice;
    int price;
    cout << "Enter the age of lilly :";
    cin >> age;
    cout << "Enter the price of machine :";
    cin >> machineprice;
    cout << "Enter the price of each toy :";
    cin >> price;
    calculateprice(age , machineprice , price);
}
void calculateprice(int age, int machineprice, int price)
{
    int sum = 0;
    int toyprice = 0;
    int totalprice;
    for (int currentage = 2; currentage <= age; currentage = currentage + 2)
    {
        sum = sum + currentage * 5;
        sum = sum - 1;
    }
    for (int oddage = 1; oddage <= age; oddage = oddage + 2)
    {
        toyprice = toyprice + price;
    }
    totalprice = sum + toyprice;
    float final1 = totalprice - machineprice;
    float final2 = machineprice - totalprice;
    if (machineprice <= totalprice)
    {
        cout << "Yes!" << final1;
    }
    else
    {
        cout << "No" << final2;
    }
}
