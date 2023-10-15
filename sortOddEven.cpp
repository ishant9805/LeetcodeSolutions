#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[i] < nums[j])
            {
                swap(nums[i], nums[j]);
            }
            
        }
        
    }
    
}

vector<int> sortEvenOdd(vector<int>& nums) {
    int size = nums.size();
    vector<int> odds(size);
    vector<int> evens(size);
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            evens[i] = nums[i];
        }
        else {
            odds[i] = nums[i];
        }
        
    }
    sort(evens);
    sort(odds);
    reverse(odds.begin(), odds.end());
    
    for (int i = 0; i < size; i++)
    {
        if (i%2==0 && evens[i] != 0)
        {
            nums.push_back(evens[i]);
        }
        else if(i%2!=1 && odds[i] != 0){
            nums.push_back(odds[i]);
        }
        
    }
    return nums;
}

int main()
{
    vector<int> v = {4, 1, 2, 3};
    sortEvenOdd(v);
    cout << "[";
    for (int i = 0; i < v.size() - 1; i++)
    {
       cout << v[i] << ", ";
    }
    cout << v[v.size() - 1] << "]" << endl;
    return 0;
}