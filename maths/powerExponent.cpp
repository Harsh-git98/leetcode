
//x^n

long long power(int n, int x)
{
    while(n!=0)
    {
        if(n%2==0)
        {
            x=x*x;
            n=n/2;
        }
        else{
            x=n*x;
            n=n-1;
        }
    }
    return x;
}

