#include<iostream> 
#include<unordered_set>
#include<map>
#include<vector>
using namespace std; 

bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> countMap;
        for(int i=0;i<=k && i<nums.size();i++)
        {
            countMap[nums[i]]++;
            // if(countMap[nums[i]]>1)
            // {
            //     return true;
            // }
        }
        int i=0,j=k+1;
        while(j<nums.size())
        {
            countMap[nums[i]] = 0;
            countMap[nums[j]]++;
            if(countMap[nums[j]] > 1)
                return true;
            i++;j++;
        }
        return false;
}


int main()
{
    vector<int> arr;
    //nums = [1,2,3,1,2,3], k = 2
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    bool result = containsNearbyDuplicate(arr,6);
}