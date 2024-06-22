int ncr(int n, int r){
  if (r > n) return 0; // Invalid case
    if (r == 0 || r == n) return 1; // Base cases
    int ans = 1;

  int ans=0;
  for(int i=1;i<=r;i++)
    {
       ans=ans*(n-i+1)/i;
    }
  return ans;
}
