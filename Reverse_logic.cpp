// # Reverse Logic
#include <iostream>
#include <math.h>
using namespace std;

long long int reverse(long long int n)
{
    long long int rev = 0;
    int rem;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return rev;
}

int solution(int N)
{
    long long int num, max, rev;
    int count = 0;
    num = pow(10, (N - 1));
    max = pow(10, N) - 1;
    while (num != max)
    {
        rev = reverse(num);
        if (rev > num)
        {
            count++;
        }
        num++;
    }
    return count;
}

int main()
{
    cout << "\n# Reverse Logic #\n";
    int T, N;
    cout << "Test Cases: ";
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cout << "Digits N: ";
        cin >> N;
        int count = solution(N);
        cout << "Answer =  " << count << endl;
    }
    return 0;
}