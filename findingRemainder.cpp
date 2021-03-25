#include <iostream>
using namespace std;

// Function to return the count of all possible values for x such that (A % x) = B
int countX(int a, int b)
{
    if (b > a)
        return 0;
    else if (a == b)
        return -1;
    else {
        int x = a - b, ans = 0;
        // Find the number of divisors of x which are greater than b
        for (int i = 1; i * i <= x; i++) {
            if (x % i == 0) {
                int d1 = i, d2 = b - 1;
                if (i * i != x)
                    d2 = x / i;
                if (d1 > b)
                    ans++;
                if (d2 > b)
                    ans++;
            }
        }
        return ans;
    }
}
int main()
{
    int a = 14, b = 5;
    cout << countX(a, b);
    return 0;
}
