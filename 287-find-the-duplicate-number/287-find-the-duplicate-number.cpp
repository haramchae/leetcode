class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size = nums.size(); 
        int ans = 0;
        int a[size]; 
        for(int i = 0; i < size; i++){
            a[nums[i]]=0;
        }
        for(int i = 0; i < size; i++){
            a[nums[i]]++;
            if(a[nums[i]]==2){
                ans = nums[i];
            }
        }
        
        
        
       
        return ans;
    }
};