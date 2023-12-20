#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;
   
    long long ans = 0;
    int remainder, i = 1;

    // Until the value of n becomes 0.
    while (n != 0)
    {
        remainder = n % 2;
        ans += remainder * i;
        i = i * 10;
        n = n / 2;
    }
    cout << "Answer : " << ans << endl;
}
