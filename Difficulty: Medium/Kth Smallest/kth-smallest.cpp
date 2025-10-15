// User function template for C++

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &nums, int k) {
        priority_queue<int> maxHeap;
        
        for(auto num:nums){
            maxHeap.push(num);
            if(maxHeap.size() > k ){
                maxHeap.pop();
            }
        }
        return maxHeap.top();
    }
};