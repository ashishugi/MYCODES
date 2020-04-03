    #include<bits/stdc++.h>
    #define loop(i,n) for(int i=0;i<n;i++)
    using namespace std;
    int withtwo(string s1,string s2){
        int a = (s1[0]-'0')*10+(s1[1]-'0')+(s2[0]-'0')*10+(s2[1]-'0');
        int b = ((s2[0]-'0')*10)+ (s1[1]-'0')+(s1[0]-'0')*10+(s2[1]-'0');
        int c = (s2[1]-'0')*10+(s1[1]-'0')+(s2[0]-'0')*10+(s1[0]-'0');
        int d = (s1[0]-'0')*10+(s2[0]-'0')+(s1[1]-'0')*10+(s2[1]-'0');
        int e = (s1[0]-'0')*10+(s2[1]-'0')+(s2[0]-'0')*10+(s1[1]-'0');
        int ans = max(a,max(b,max(c,max(d,e))));
        return ans;
    }
    int getwithone(string s1,string s2){
        int a = (s1[0]-'0')+(s2[0]-'0')*10+(s2[1]-'0');
        int b = (s2[0]-'0')+(s1[0]-'0')*10+(s2[1]-'0');
        int c = (s2[1]-'0')+(s2[0]-'0')*10+(s1[0]-'0');
        int ans = max(a,max(b,c));
        return ans;
    }
    int main(void){
        int t;
        cin>>t;
        while(t--){
            string a,b;
            cin>>a>>b;
            if(a[0]=='0'){
                a=a.substr(1);
            }
            if(b[0]=='0'){
                b=b.substr(1);
            }
            int l1 = a.length();
            int l2 = b.length();
            if(l1>1 && l2>1){
                cout<<(withtwo(a,b))<<endl;
            }else if(l1==1 && l2==1){
                cout<<((a[0]-'0' )+(b[0]-'0'))<<endl;
            }else{
                int val1=INT_MIN;
                int val2=INT_MIN;
                if(l1==1){
                    val1 = getwithone(a,b);
                }else{
                    val2 = getwithone(b,a);
                }
                val1 = max(val1,val2);
                cout<<val1<<endl;
            }
        }
    
    return 0;
    }