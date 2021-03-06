#include<bits/stdc++.h>
using namespace std;

bitset<10000001> pr;
vector<int> primes;
void sieve()
{
    //cout<<pr[0];
    for(int i=2;i*i<10000001;i++)
    {
        if(pr[i])continue;
        for(int j=i*2;j<1000001;j+=i)
        {
            pr[j]=i;
        }
    }
    for(int i=2;i<=1000001;i++)
    {
        if(!pr[i])primes.push_back(i);
    }
}

void primeFctorization(int n)
{
    set<int> th;
    vector<int> ans;
    int N=n;
    n=abs(n);
    for(int i=0;i<primes.size()&&primes[i]*primes[i]<=n;i++)
    {
        while(n%primes[i]==0)
        {
            th.insert(primes[i]);
            n/=primes[i];
            ans.push_back(primes[i]);
            //cout<<primes[i]<< " ";
        }
    }
    if(n>1){
        th.insert(n);
        //cout<<n;;
        ans.push_back(n);
    }
    cout<<N<<" =";
    if(N<0)cout<<" -1 x";
    for(int i=0;i<ans.size();i++)
    {
        cout<<" "<<ans[i];
        if(i+1!=ans.size())cout<<" x";
    }
    cout<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    sieve();
    int n;
    while(cin>>n)
    {
        if(n==0)break;
        primeFctorization(n);
    }
}
