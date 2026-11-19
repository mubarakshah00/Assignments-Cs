#include <iostream>
using namespace std;

int main()
{
    int N;

    cout << "Enter a positive number: ";
    cin >> N;

    cout << "Numbers divisible by 3 or 5:" << endl;

    for(int i = 1; i <= N; i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}
