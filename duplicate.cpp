#include<iostream> 
#include<unordered_set>
using namespace std; 

bool checkDuplicate(int nums[])
{
    unordered_set<int> checkSet;
        for(int i=0;i<4;i++)
        {
            if(checkSet.find(nums[i])==checkSet.end())
            {
                checkSet.insert(nums[i]);
            }
            else
            {
                return false;
            }
        }
        return true;
}


int main()
{
    int arr[4] = {1,2,3,1};
    bool result = checkDuplicate(arr);
}