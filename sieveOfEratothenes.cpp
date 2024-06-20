#include <vector>
using namespace std;

vector<int> sieve(int n)
{
    int m = n;
    vector<bool> isprime(m + 1, true);
   
    for (int i = 2; i * i <= n; i++)
    {
        if (isprime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isprime[j] = false;
            }
        }
    }
    
    vector<int> ans;
    for (int i = 2; i <= n; i++)
    {
        if (isprime[i])
        {
            ans.push_back(i);
        }
    }
    return ans;
}
