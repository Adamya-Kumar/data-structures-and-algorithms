class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int sum=0;
        int right=height.size()-1;
        while(left < right){
            int minH=height[left];
            minH=min(minH,height[right]);
            int maxW=right-left;
            sum=max(sum,minH*maxW);
            if(height[left]<height[right]){
                left++;
            }else if(height[right]<height[left]){
                right--;
            }else{
                left++;
            }
        }
    return sum;
    }
};