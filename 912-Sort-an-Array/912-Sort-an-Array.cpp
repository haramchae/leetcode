class Solution {
public:
    

    void merge(vector<int>& nums, int start, int mid, int end){
        int n1 = mid - start + 1;
        int n2 = end - mid;
        int a[n1], b[n2];
        for(int i = 0; i<n1; ++i){
            a[i] = nums[start+i];
        }
        for(int j = 0; j<n2; ++j){
            b[j] = nums[mid+1+j];
        }
        int i = 0, j = 0, k = start;
        while(i<n1 && j<n2){
            if(a[i]<=b[j]) nums[k++] = a[i++];
            else nums[k++] = b[j++];
        }
        while(i<n1) nums[k++] = a[i++];
        while(j<n2) nums[k++] = b[j++];
    }

    void mergeSort(vector<int>& nums, int start, int end){
        if(start>=end) return;
        int mid = start + (end-start)/2;
        mergeSort(nums, start, mid);
        mergeSort(nums, mid+1, end);
        merge(nums, start, mid, end);
    }

    vector<int> sortArray(vector<int>& nums) {  
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};
