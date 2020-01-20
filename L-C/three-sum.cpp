class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> > final_res;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;){
            int l = i+1;
            int r = n-1;
            while(l<r){
                 if(nums[i]+nums[l]+nums[r] > 0){
                    r--;
                }else if(nums[i]+nums[l]+nums[r] < 0){
                    l++;
                }else{ 
                    vector<int> v;
                    v.push_back(nums[i]);
                    v.push_back(nums[l]);
                    v.push_back(nums[r]);
                    sort(v.begin(),v.end());
                    final_res.push_back(v);
                    int temp = l;
                    while(temp < r && nums[temp]==nums[l]){
                        temp++;
                    }
                    l = temp;
                }
            }
            int temp=i;
            while(temp<n && nums[temp]==nums[i]){
                   temp++;
            }
            i = temp; 
        }
        return final_res;
    }
};