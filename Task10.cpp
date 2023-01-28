#include <iostream>
using namespace std;
void calculate(float money, int year);
main()

{
    double money;
    cout << "Enter the money :";
    cin >> money;
    int year;
    cout << "Enter the year :";
    cin >> year;
    calculate(money, year);
}

void calculate(float money, int year)
{
    float final = 0;
    int age = 18;

    for (int i = 1800; i <= year; i++)
    {

        if (i % 2 == 0)
        {
            final = final + 12000;
        }
        else if (i % 2 != 0)
        {
            final = 12000 + (50 * age) + final;
        }
        age++;
    }
    float final1 = money - final;
    float final2 = final - money;
    if (money > final)
    {
        cout << "Yes! He will live a carefree life and will have " << final1 << " dollars left.";
    }
    else if (money < final)
    {
        cout << "He will need " << final2 << " to survive.";
    }
}