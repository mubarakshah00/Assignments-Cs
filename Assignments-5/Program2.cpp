#include <iostream>
using namespace std;

int main()
{
    int N, count = 0;

    cout << "Enter value of N: ";
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        if(i % 4 == 0)
        {
            count++;
        }
    }

    cout << "Numbers divisible by 4 = " << count;

    return 0;
}
