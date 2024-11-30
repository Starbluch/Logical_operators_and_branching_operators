#include  <iostream>
using namespace std;

int main()
{
    int number, a;
    int sum_1 = 0;
    int sum_2 = 0;
    cout << "number: ";
    cin >> number;

    if (number <= 100000)
    {
        cout << "INVALID" << endl;
    }

    a = number % 10;
    sum_1 += a;
    
    a = number / 10 % 10;
    sum_1 += a;
    
    a = number / 100 % 10;
    sum_1 += a;
    
    a = number / 1000 % 10;
    sum_2 += a;
    
    a = number / 10000 % 10;
    sum_2 += a;
    
    a = number / 100000 % 10;
    sum_2 += a;

    if (sum_1 == sum_2)
    {
        cout << "lucky number"<<endl;
    }
    else 
    {
        cout << "unlucky number"<<endl; 
    }
    
    return 0;
}