#include <iostream>
using namespace std;
void main()
{
    int distance_A_B, distance_B_C, weight;
    int fuel = 300;
    cout << "distance A-B: ";
    cin >> distance_A_B;
    if (distance_A_B <= 300){} else{exit(0);}
    cout << "distance B-C: ";
    cin >> distance_B_C;
    cout << "weight: ";
    cin >> weight;
    
    if (weight > 2000)
    {
        cout << "Too much weight" << endl;
    }
    
    if ( weight >= 1 && weight < 500 )
    {
        fuel = fuel - distance_A_B * 1;
        if (fuel < 0)
        {
            cout << "it's impossible to go the distance A-B." <<endl;
            exit(0);
        }
        cout << "the distance between points A and B is covered"<< endl;
        
        fuel = fuel - distance_B_C * 1;
        if (fuel <= 0)
        {
            fuel *= -1;
            cout << "needs to be refueled: " << fuel << endl;
            if (fuel > 300)
            {
                cout << "it's impossible to go the distance B-C" << endl;
            }
            else
            {
                cout << "the distance between points B and C is covered" << endl;
            }
        }
        else
        {
            cout << "needs to be refueled: " << fuel << endl;
            cout << "the distance between points B and C is covered" << endl;
        }
    }
    if (weight >= 500 && weight < 1000)
    {
        fuel = fuel - distance_A_B * 4;
        if (fuel < 0)
        {
            cout << "it's impossible to go the distance A-B." <<endl;;
            exit(0);
        }
        cout << "the distance between points A and B is covered "<< endl;
        
        fuel = fuel - distance_B_C * 4;
        if (fuel <= 0)
        {
            fuel *= -1;
            cout << "needs to be refueled: " << fuel << endl;
            if (fuel > 300)
            {
                cout << "it's impossible to go the distance B-C" << endl;
            }
            else
            {
                cout << "the distance between points B and C is covered" << endl;
            }
        }
        else
        {
            cout << "the distance between points B and C is covered" << endl;
        }
    }
    if (weight >= 1000 && weight < 1500)
    {
        fuel = fuel - distance_A_B * 7;
        if (fuel < 0)
        {
            cout << "it's impossible to go the distance A-B." <<endl;
            exit(0);
        }
        cout << "the distance between points A and B is covered"<< endl;
        
        fuel = fuel - distance_B_C * 7;
        if (fuel <= 0)
        {
            fuel *= -1;
            cout << "needs to be refueled: " << fuel << endl;
            if (fuel > 300)
            {
                cout << "it's impossible to go the distance B-C"<< endl;
            }
            else
            {
                cout << "the distance between points B and C is covered" << endl;
            }
        }
        else
        {
            cout << "the distance between points B and C is covered" << endl;
        }
    }
    if (weight >= 1500 && weight < 2000)
    {
        fuel = fuel - distance_A_B * 9;
        if (fuel < 0)
        {
            cout << "it's impossible to go the distance A-B." <<endl;
            exit(0);
        }
        cout << "the distance between points A and B is covered"<< endl;
        
        fuel = fuel - distance_B_C * 9;
        if (fuel <= 0)
        {
            fuel *= -1;
            cout << "needs to be refueled: " << fuel << endl;
            if (fuel > 300)
            {
                cout << "it's impossible to go the distance B-C" << endl;
            }
            else
            {
                cout << "the distance between points B and C is covered" << endl;
            }
        }
        else
        {
            cout << "the distance between points B and C is covered" << endl;
        }
    }
}