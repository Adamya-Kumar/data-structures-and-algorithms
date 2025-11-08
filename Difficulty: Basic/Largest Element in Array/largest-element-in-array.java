class Solution {
    public static int largest(int[] arr) {
        // code here
        int lergestNum=-999;
        for(int i=0;i<arr.length;i++){
            if(lergestNum<arr[i]){
                lergestNum=arr[i];
            }
        }
        return lergestNum;
    }
}
