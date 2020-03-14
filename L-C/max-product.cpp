class product{
    public:
    int max;
    int min;
};
int get(vector<int>& nums){
    product* ar=new product[nums.size()];
    ar[0].max=nums[0];
    ar[0].min=nums[0];
    int len=nums.size();
    for(int i=1;i<len;i++){
        ar[i].max=max(nums[i],max(nums[i]*ar[i-1].max,nums[i]*ar[i-1].min));
        ar[i].min=min(nums[i],min(nums[i]*ar[i-1].max,nums[i]*ar[i-1].min));
    }
    int res=INT_MIN;
    for(int i=0;i<len;i++){
        if(res<ar[i].max){
            res=ar[i].max;
        }
    }
    return res;
}
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        return (get(nums));
    }
};