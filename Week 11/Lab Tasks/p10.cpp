#include <iostream>
using namespace std;

char objects[5][5] = {
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}
};

bool gravity = false;
bool isBlackHole = false;

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

// 2. Gravity setter
void setGravityStatus(bool status)
{
    gravity = status;
}

// 3. Black hole setter
void setBlackHole(bool status)
{
    isBlackHole = status;
}

// Helper: apply gravity
void applyGravity()
{
    for(int j = 0; j < 5; j++)
    {
        for(int i = 3; i >= 0; i--)
        {
            if(objects[i][j] == '#')
            {
                int k = i;

                while(k + 1 < 5)
                {
                    if(objects[k + 1][j] == '-')
                    {
                        objects[k + 1][j] = '#';
                        objects[k][j] = '-';
                        k++;
                    }
                    else
                        break;
                }
            }
        }
    }
}

// Black hole processing
void applyBlackHole()
{
    for(int j = 0; j < 5; j++)
    {
        if(objects[4][j] == '#')
        {
            objects[4][j] = '-';

            // send to first row if empty
            for(int i = 0; i < 5; i++)
            {
                if(objects[i][j] == '-')
                {
                    objects[i][j] = '#';
                    break;
                }
            }
        }
    }
}

// 4. Time Tick
void timeTick(int times)
{
    if(gravity == false)
        return;

    for(int t = 0; t < times; t++)
    {
        applyGravity();

        if(isBlackHole == true)
        {
            applyBlackHole();
        }
    }
}

int main()
{
    cout << "Initial World:\n";
    displayWorld();

    setGravityStatus(true);
    setBlackHole(true);   // change to false to disable black hole

    timeTick(3);

    cout << "\nFinal World:\n";
    displayWorld();

    return 0;
}
