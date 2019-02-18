/*
Largest Number At Least Twice of Others
*/

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if(1 == nums.size()){
            return 0;
        }
        vector<int> ret = findLargest(nums);
        if(nums[0] >= 2*nums[1]){
            return ret[0];
        }
        else{
            return -1;
        }
    }
    
    vector<int> findLargest(vector<int>& nums){
        //int largest=0, temp = 0;
        /*or(int i=0;i<nums.size(); i++){
            if(largest < nums[i]){
                bool b = true : false ? nums[i] > 2*largest;
                largest = nums[i];
            }
            
        }*/
        vector<int> ret(2);
        for(int i=0;i<2;i++){
            for(int j = i+1;j<nums.size();j++){
                if(nums[i] < nums[j]){
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                    ret[i]=j;
                }
            }
            
        }
        return ret;
    }
};
