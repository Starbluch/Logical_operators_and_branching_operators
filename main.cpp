#include  <iostream>
using namespace std;

int main()
{
    int number , number_res, num_1 , num_2 , num_3 , num_4;
    cout << "number: ";
    cin >> number;
    
    if (number < 1000 || number > 9999)
    {
        cout << "Ivalid" << endl;
        exit(0);
    }
    
    num_1 = number % 10;
    num_2 = number / 10 % 10;
    num_3 = number / 100 % 10;
    num_4 = number / 1000 % 10;

    // 1 variant
    /*cout << num_3 << num_4 << num_1 << num_2 << endl;*/

    // 2 variant
    number_res = num_4 * 100 + num_3 * 1000 + num_2  + num_1 * 10;
    
    cout <<  number_res<< endl;
    
    return 0;
}
