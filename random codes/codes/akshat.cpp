#include <bits/stdc++.h>

using namespace std;

 

#define ull       unsigned long long int

#define ll        long long int

#define loop(i,s,e)     for(ll i=(s);i<(e);i++)

#define rloop(i,s,e)    for(ll i=(s);i>=(e);i--)

#define scan(any)       for(auto &i:any) cin>>i;

#define print(any)      for(auto i:any) cout<<i<<" "; nl;

#define nl              cout<<'\n'

 #define pi 3.141592654

#define hell 1000000007

#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

#define fix(n) cout << fixed << setprecision(n)

#define input1(n) int n;cin>>n

#define input2(a, b) int a,b;cin>>a>>b

#define Max(a,b) ((a)>(b)?(a):(b))

#define Min(a,b) ((a)<(b)?(a):(b))

#define rep(i,a,b) for (__typeof((b)) i=(a);i<(b);i++)

#define ren(i,a,b) for(__typeof((a)) i=(a);i>=(b);i--)

#define mp make_pair

#define pb push_back

#define fi first

#define se second

#define vi vector<int>

#define pii pair<int,int>

#define piii pair<pair<int,int>,int>

#define all(v) (v).begin(), (v).end()

#define sz(x) (int)x.size()

#define set(a,n) memset(a,n,sizeof(a))

void calc(int i,vi &v1,int siz,int s,int &tot)

{

if(i==siz)

{

if(s==0)

tot++;

return;

}



calc(i+1,v1,siz,s+v1[i],tot);

calc(i+1,v1,siz,s,tot);

}





int main()

{

int n;

cin>>n;

vi v(n);

scan(v);

int m=0;



for(int i=0;i<n;i++)

{

if(v[i]>m)

m=v[i];

}

int count=0;

while(m)

{

count++;

m=m>>1;

}

vi v1(n,0);

for(int i=0;i<n;i++)

{

while(v[i])

{

if(v[i]&1)

v1[i]++;

v[i]=v[i]>>1;

}

}

int j=0;

for(int i=0;i<n;i++)

{

v1[j]=count-2*v1[i];

if(v1[j]==0)

continue;

else

j++;

}

int tot=0;

calc(0,v1,j,0,tot);

tot-=1;

tot=tot*(1+n-j)+(1<<(n-j))-1;

    vi bin(count,0); 

    int i=0;

    while (tot > 0) { 

  

        bin[i] = tot &1; 

        tot = tot>>1; 

    i++;

    } 

    for (int j = count - 1; j >= 0; j--) 

        cout << bin[j]; 

return 0;

}