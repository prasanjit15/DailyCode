//Two Sum II - Input array is sorted

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector <int> result;
        
        int low = 0;
        int high = numbers.size() - 1;
        
        while(low<high){
            int left = numbers[low];
            int right = numbers[high];
            
            if(left + right == target){
                result.push_back(low + 1);
                result.push_back(high + 1);
            }
            
            if(left + right > target){
                high--;
            }else
                low++;
        }
        return result;
    }
};
