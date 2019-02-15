#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(1 > nums.size()){
            return -1;
        }
        vector<int> index;
        for(int i=0; i < nums.size(); i++){
            int left = sumArray(nums, 0, i-1);
            int right = sumArray(nums, i+1, nums.size()-1);
            if(left == right){
                index.push_back(i);
            }
        }
        if(0 == index.size()){
            return -1;
        }
        else{
            return index[index.size() - 1];
        }
    }
    int sumArray(vector<int>& nums, int start, int end){
        if(-1 == end){
            return 0;
        }
        int sum=0;
        for(int i=start; i<=end; i++){
            sum += nums[i];
        }
        return sum;
    }
};

int main(){
  Solution s;
  // int a[] = {-1,-1,0,0,-1,-1};
  int a[] = {1,7,3,6,5,6};
  int size = sizeof(a) / sizeof(*a);
  vector<int> nums(a, a+size);
  cout<<size<<endl;
  cout<<s.pivotIndex(nums)<<endl;
  return 0;
}
