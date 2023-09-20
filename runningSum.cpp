#include<iostream>
#include<vector>
using namespace std;

vector<int> runningSum(vector<int>& nums) {
    vector<int> res;
    for (int i = 0; i < nums.size(); i++)
    {
        if (i == 0)
        {
            res.push_back(nums[i]);
        }
        else{
            res.push_back(res[i - 1] + nums[i]);
        }
    }
    return res;
}

int main()
{
    vector<int> v = {3,1,2,10,1};
    v = runningSum(v);
    cout << "[";
    for (int i = 0; i < v.size() - 1; i++)
    {
       cout << v[i] << ", ";
    }
    cout << v[v.size() - 1] << "]";
    return 0;
}