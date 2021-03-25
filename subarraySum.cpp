#include <iostream>
using namespace std;

// Function to return the count of all possible values for x such that (A % x) = B
string countX(int a[], int s, int b)
{
        int i,j, ans = 0;
        // Find the number of divisors of x which are greater than b
        for (i = 0; i < s; i++) {
           ans = 0;
           for(j=i;j<s;j++) {
             if(ans<b) {
                 ans = ans+ a[j];
             }
             else if(ans==b) {
                return ((i+1)+" "+ (j+1));
             }
             else {
                ans = 0;
                j = s;
             }
           }
        }
        return 0+ " na ";
}
int main()
{
    int a[] = {1,2,3,7,5}, b = 12,s;
    s= sizeof(a)/sizeof(int);
    cout << countX(a, s ,b);
    return 0;
}
