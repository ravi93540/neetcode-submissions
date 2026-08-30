class Solution {
public:
void merge(vector<int> &nums,int left,int right,int mid)
{
  int n1=mid-left+1;
  int n2=right-mid;
 int arr1[n1];
 int arr2[n2];

 for(int i=0;i<n1;i++)
 {
  arr1[i]=nums[i+left];
 }
 for(int i=0;i<n2;i++)
 {
  arr2[i]=nums[i+mid+1];
 }

 int idx=left,idx1=0,idx2=0;
 while(idx1<n1 && idx2<n2)
 {
  if(arr1[idx1]<arr2[idx2])
  nums[idx++]=arr1[idx1++];
  else
  nums[idx++]=arr2[idx2++];

 }
 while(idx1<n1)
 nums[idx++]=arr1[idx1++];
 while(idx2<n2)
 nums[idx++]=arr2[idx2++];
  

}
      void mergeSort(vector<int> &nums,int left,int right)
      {
        if(left>=right)
        return;
        int mid=left+(right-left)/2;
        mergeSort(nums,left,mid);
        mergeSort(nums,mid+1,right);
        merge(nums,left,right,mid);
      }
      vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
      mergeSort(nums,0,n-1);
      return nums;
        
    }
};