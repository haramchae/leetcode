class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1, mArea = INT_MIN;
        while(right>left){
            int width = right - left;
            int length = min(height[left], height[right]);
            int sum =  width*length;
            mArea = max(mArea, sum);
            if(height[left]>height[right]) right--;
            else left++;
        }
        return mArea;
    }
};
