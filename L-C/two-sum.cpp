#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // using two pointer method
        int n = nums.size();
        vector<int> v;
        int start = 0;
        int end = n-1;
        vector<int> temp;
        for(int i=0;i<n;i++){
            temp.push_back(nums[i]);
        }
        sort(nums.begin(),nums.end());
        while(start < end){
            if(nums[start]+ nums[end] == target){
                int j=0;
                int count =0 ;
                for(;j<n;j++){
                    if(count==2){
                        break;
                    }
                    if(temp[j] == nums[start]){
                        v.push_back((j));
                        count++;
                        
                    }else if(temp[j] == nums[end]){
                        v.push_back(j);
                        count++;
                    }
                }
                sort(v.begin(),v.end());
                
                return v;
            }else if(nums[start]+ nums[end] < target){
                start++;
            }else if(nums[start]+ nums[end] > target){
                end--;
            }
        }
        return v;
    }
};