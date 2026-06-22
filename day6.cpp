class Solution {
public:
    int recursive(vector<int>& nums, int s, int e, int target){
        if(s > e){
            return -1;
        }
        int mid = (s + e)/ 2;

        if(nums[mid] == target){
            return mid;
            
        }
        else if(nums[mid]>target){
           return recursive(nums, s, mid-1, target);
        } else{
             return recursive(nums, mid +1, e, target);
        }
        



    }





    int search(vector<int>& nums, int target) {
        // int start = 0;
        // int end = nums.size()-1;
        
        // int mid = start + end / 2;
        

        return recursive(nums, 0, nums.size()-1, target);
        


        // while(start <= end){
        //     int mid = (start + end)/2;
        //     if(nums[mid] == target){
        //         return mid;
        //     } else if(nums[mid] > target){
        //         end = mid -1;
        //     } else if( nums[mid] < target){
        //         start = mid +1;
        //     } else{
        //         return -1;
        //     }
        // }
        // return -1;
    }
};






#include <iostream>
using namespace std;
void subsequence(string str, int i){
    // base case ---  //
    if(i == str.length()){
        return;
    }

    //ignore any element
    subsequence(str, i+1, ans);


    ans += str[i];
    // include an ith element
    ans += str[i];

    // print output

    cout <<ans<<" ";
    subsequence(str, i+1, ans);

}




int main() 
{
   string str = "abc";
   string ans = "";


   subsequence(str, 0, ans);
    return 0;
}





#include <iostream>
#include<vector>
using namespace std;

void merge(int arr[], int st, int mid, int end)
{
    vector<int> output(end-st+1);

    int i = st, j = mid+1;
    int k = 0;//iterate to output array

    while(i<=mid && j<=end)
    {
        if(arr[i]<arr[j])
        {
            output[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            output[k] = arr[j];
            j++;
            k++;
        }
    }
    //if left array elements remaining
    while(i<=mid)
    {
        output[k] = arr[i];
        i++;
        k++;
    }

    //if right array elements remaining
    while(j<=end)
    {
        output[k] = arr[j];
        j++;
        k++;
    }

    //copy all elements of output array into input array(original array)
    k=0;
    for(int i=st; i<=end;i++)
    {
        arr[i] = output[k];
        k++;
    }
}

void mergeSort(int arr[], int st, int end)
{
    //base case
    if(st >= end)
    return;

    int mid = (st+end)/2;
    //left subarray
    mergeSort(arr,st,mid);
    //right subarray
    mergeSort(arr,mid+1,end);

    merge(arr,st,mid,end);
}
int main() 
{
    int arr[5] = {5,3,1,4,6};

    mergeSort(arr,0,4);
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    return 0;
}
