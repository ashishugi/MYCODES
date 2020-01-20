class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int> >final_set;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;){
            for(int j=i+1;j<n-2;){
                int l = j+1;
                int r = n-1;
                while(l<r){
                    int sum = nums[i]+nums[j]+nums[l]+nums[r];
                    if(sum > target){
                        r--;
                    }else if(sum < target){
                        l++;
                    }
                    else{
                        vector<int>v;
                        v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(nums[l]);
                        v.push_back(nums[r]);
                        final_set.push_back(v);
                        int temp = l;
                        while(temp < r && nums[temp] == nums[l]){
                            temp++;
                        }
                        l = temp;
                    }
                }
                int temp = j;
                while(temp < n && nums[temp] == nums[j]){
                    temp++;
                }
                j = temp;
            }
            int temp = i;
            while(temp < n && nums[temp] == nums[i]){
                temp++;
            }
            i = temp;
        }
        return final_set;
        
    }
};