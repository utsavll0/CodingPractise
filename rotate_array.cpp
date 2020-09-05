#include<iostream> 
#include<unordered_set>
#include<map>
#include<vector>
#include <algorithm>
using namespace std; 


int main()
{
    vector<int> nums;
    for(int i=1;i<=7;i++)
    {
        nums.push_back(i);
    }
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+3-1);
    reverse(nums.begin()+3,nums.end());
}