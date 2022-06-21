class NumArray {
public:
    vector<int> arr;
    
    NumArray(vector<int>& nums) {
        int sum = 0;
        
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            arr.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0){
            return arr[right];
        }
        return (arr[right] - arr[left - 1]);
    }
};

// class NumArray {
// public:
//     vector<int> arr;
//     NumArray(vector<int>& nums) {
//         this->arr = nums;
//     }
    
//     int sumRange(int left, int right) {
//         int sum=0;
        
//         while(left <= right) {
//             if(left == right) {
//                 sum += this->arr[right];
//             } else {
//                 sum += this->arr[left] + this->arr[right];
//             }
            
//             left++;
//             right--;
//         }
        
//         return sum;
//     }
// };