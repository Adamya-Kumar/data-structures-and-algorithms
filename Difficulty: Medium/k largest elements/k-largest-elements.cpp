#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
            sort(arr.begin(),arr.end(),greater<int>());
            vector<int> res(arr.begin(),arr.begin()+k);
            return res;
        
    }
};