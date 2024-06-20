vector<int> Divisors(int n)
{
    vector<int> ans;

    for(int i=0;i*i<=n;i++)
    {
        if(n/i==0)
        {
            ans.push_back(i);
            if(i*i!=n)
            {
                ans.push_back(n/i);
            }
        }
    }
    return ans;
}