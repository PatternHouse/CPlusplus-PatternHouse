#include <iostream>

using namespace std;

int main()
{
    bool flag = true;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (flag == true)
                cout << '0';
            else
                cout << '1';
        }
        cout << endl;
        flag = !flag;
    }
    return 0;
}