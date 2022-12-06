// # Chase It Down
// # Reverse Logic
#include <iostream>
using namespace std;

char decision(int *score)
{
    int target, overs, run_rate, n;
    *score = 0;
    char dec;
    cout << "Target: ";
    cin >> target;
    cout << "Overs: ";
    cin >> overs;
    for (int i = 0; i < 11; i++)
    {
    start:
        cin >> run_rate >> n;
        if (n <= 0 | n > overs)
        {
            cout << "Please enter correct n" << endl;
            goto start;
        }
        if (run_rate < 0 | run_rate >= 36)
        {
            cout << "Please enter correct run rate" << endl;
            goto start;
        }
        *score = *score + run_rate;
    }
    if (*score >= target)
        return 'Y';
    else
        return 'N';
}

int main()
{
    int T, score;
    cout << "\n# Chase It Down #\n";
    cout << "Test Cases: ";
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        char dec = decision(&score);
        cout << "\n# Result: " << endl;
        if (dec == 'Y')
        {
            cout << dec << " " << score << endl;
        }
        else
        {
            cout << dec << " "
                 << "-1" << endl;
        }
    }
    return 0;
}