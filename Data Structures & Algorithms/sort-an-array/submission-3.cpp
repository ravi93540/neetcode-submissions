class Solution {
public:
   void merge(int start,int finish,int mid,vector<int>&nums)
   {
    int n1=mid-start+1;
    int n2=finish-mid;
    vector<int> temp1(n1);
    vector<int> temp2(n2);
    for(int i=0;i<n1;i++)
    temp1[i]=nums[i+start];
    for(int i=0;i<n2;i++)
    temp2[i]=nums[mid+i+1];
    int i=0,j=0,k=start;
    while(i<n1 && j<n2)
    {
        if(temp1[i]<=temp2[j])
        {
            nums[k]=temp1[i];
            i++;
            
        }
        else
        {
            nums[k]=temp2[j];
            j++;
        }
k++;
    }
            while(i<n1)
            {
                nums[k]=temp1[i];
            i++;
            k++;
            }
        
        
            while(j<n2)
            {
                nums[k]=temp2[j];
            j++;
            k++;
            }
        
    
   }
      void mergeSort(int start,int finish,vector<int> &nums)
      {
        if(start>=finish)
        return;
        int mid=start+(finish-start)/2;
        mergeSort(start,mid,nums);
        mergeSort(mid+1,finish,nums);
        merge(start,finish,mid,nums);
      }
    vector<int> sortArray(vector<int>& nums) {
    int n=nums.size();
    mergeSort(0,n-1,nums);
    return nums;
    }
};