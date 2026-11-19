#include <iostream>
using namespace std;

int main()
{
    int N, S = 0;

    cout << "Enter value of N: ";
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        S = S + (i * i);
    }

    cout << "Sum of series = " << S;

    return 0;
}
