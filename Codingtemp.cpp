#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
long long arrsum(vector<int>&v)
{
    int n=v.size();
    long long ans=0;
    for(int i=0;i<n/2;i++)
    {
       ans+=v[i]+v[n-i-1];
    }
    if(n&1)
    return ans+v[n/2];
    else
    return ans;
}
long long arrsum(int v[],int n)
{
    long long ans=0;
    for(int i=0;i<n/2;i++)
    {
       ans+=v[i]+v[n-i-1];
    }
    if(n&1)
    return ans+v[n/2];
    else
    return ans;
}
unordered_set<int> pfactor(int n)
{
    unordered_set<int>v;
    while (n % 2 == 0)
    {
        v.insert(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            v.insert(i);
            n = n/i;
        }
    }
    if (n > 2)
       v.insert(n);

      return v; 
}
unordered_set<int> alldivisors(int n)
{
    unordered_set<int>v;
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
            v.insert(i);
            else
            {
                v.insert(i);
                v.insert(n/i);
            }
        }
    }
    return v;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      
    }
    return 0;
}