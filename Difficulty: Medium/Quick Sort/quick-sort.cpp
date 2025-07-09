class Solution {
  public:
    // Function to sort an array using quick sort algorithm.
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low<high){
        int partitionIndex=partition(arr,low,high);
        quickSort(arr,low,partitionIndex-1);
        quickSort(arr,partitionIndex+1,high);
        }
    }

  public:
    // Function that takes last element as pivot, places the pivot element at
    // its correct position in sorted array, and places all smaller elements
    // to left of pivot and all greater elements to right of pivot.
    int partition(vector<int>& arr, int low, int high) {
        int pivot=low;
        int i=low;
        int j=high;
        while(i<=j){
            while(i<=high && arr[i] <= arr[pivot]){
                i++;
            }
            while(j>=low && arr[j] > arr[pivot]){
                j--;
            }
            if(i<j){
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
        }
        swap(arr[j],arr[pivot]);
        return j;
    }
};