#include<iostream>
using namespace std;

string calculatePoolState(int V, int P1, int P2, double H);

main()
{
    int pipe1, pipe2, volume;
    double hour;
    cout << "Enter the volume of the pool in liters: ";
    cin >> volume;

    cout << "Enter the flow of rate of the first pipe per hour: ";
    cin >> pipe1;

    cout << "Enter the flow of rate of the second pipe per hour: ";
    cin >> pipe2;

    cout << "Enter hours that the worker is absent: ";
    cin >> hour;
    
    cout << calculatePoolState(volume, pipe1, pipe2, hour);
}
string calculatePoolState(int V, int P1, int P2, double H)
{
    int total_Water;
    total_Water = (P1 + P2) * H;
    if (total_Water <= V)
    {
        int pool_Percentage = (double)total_Water / V * 100;
        int pipe1_Percentage = (double)(P1 * H) / total_Water * 100;
        int pipe2_Percentage = (double)(P2 * H) / total_Water * 100;

        cout << "The pool is " << pool_Percentage << "% full. ";
        cout << "Pipe 1: " << pipe1_Percentage << "%, ";
        cout << "Pipe 2: " << pipe2_Percentage << "%.";
    }
    else
    {
        int overflow;
        overflow = total_Water - V;
        cout << "For " << H << " hours the pool overflows with ";
        cout << overflow << " liters.";
    }
}