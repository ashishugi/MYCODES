string getpalindrome(string s){
    int n;
    n = s.length();
    int final_length =0 ;
    int index =0 ;
    for(int i=0;i<n;i++){
        int l=i;
        int r = i;
        int temp =0 ;
        while(l>=0 && r<n && s[l]==s[r]){
             temp = r-l+1;
            if(final_length < temp){
                final_length = temp;
                index =l;
            }
            l--;
            r++;
        }
        l=i;
        r=i+1;
        temp =0;
        while(l>=0 && r<n && s[l]==s[r]){
            temp = r-l+1;
            if(final_length < temp){
                final_length = temp;
                index =l;
            }
            temp++;
            l--;
            r++;
        }
    }
    s = s.substr(index , final_length);
    return s;
}
class Solution {
public:
    string longestPalindrome(string s) {
        string st = getpalindrome(s);
        return st;
    }
};