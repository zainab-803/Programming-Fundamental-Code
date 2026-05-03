#include <iostream>
using namespace std;

// 5x5 world
char objects[5][5] = 
{
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}
};

bool gravity = false;

// 1. Display World
void displayWorld()
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << objects[i][j] << " ";
        }
        cout << endl;
    }
}

// 2. Set Gravity Status
void setGravityStatus(bool status)
{
    gravity = status;
}

// Helper function: apply gravity once
void applyGravity()
{
    for(int j = 0; j < 5; j++)
    {
        for(int i = 3; i >= 0; i--)
        {
            if(objects[i][j] == '#')
            {
                int k = i;

                while(k + 1 < 5 && objects[k + 1][j] == '-')
                {
                    objects[k + 1][j] = '#';
                    objects[k][j] = '-';
                    k++;
                }
            }
        }
    }
}

// 3. Time Tick
void timeTick(int times)
{
    if(gravity == false)
        return;

    for(int t = 0; t < times; t++)
    {
        applyGravity();
    }
}

int main()
{
    cout << "Initial World:\n";
    displayWorld();

    setGravityStatus(true);
    timeTick(3);

    cout << "\nAfter Gravity:\n";
    displayWorld();

    return 0;
}
