// Calculate ncr Binomial Coefficient For n&r Program
#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int ncr(int n, int r)
{
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n - r);

    return fact_n / (fact_r * fact_n_r);
}
int main()
{
    int n = 8, r = 5;
    int result = ncr(n, r);
    cout << "ncr binomial coefficient is : " << result << endl;

    return 0;
}