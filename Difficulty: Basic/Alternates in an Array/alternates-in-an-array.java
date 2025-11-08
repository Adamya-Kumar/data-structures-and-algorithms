class Solution {
    // function to print alternate elements of an array
    public ArrayList<Integer> getAlternates(int arr[]) {
        // Code Here
        ArrayList<Integer> newArr=new ArrayList<>();
        for(int i=0;i<arr.length;i=i+2){
            newArr.add(arr[i]);
        }
        return newArr;
    }
}