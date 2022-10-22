#include <iostream>
#include <vector>
using namespace std;

void twoSum(vector<int> &nums, int target)
    {
        bool flag = false;
        for(int i=0; i<nums.size(); i++){
            for (int j = i+1; j < nums.size(); j++)
            {
                if((nums[i]+nums[j]) == target){
                    if(!flag){
                        cout<< "["<<i<<","<<j<<"]"<<endl;
                        flag = true;
                    }

                }

            }
            
        }
}


int main(){

    int n;
    int target;

    cin>>n>>target;

    vector<int>nums;

    for(int i=0; i<n; i++){
        int num;
        cin>>num;

        nums.push_back(num);
    }

    twoSum(nums, target);

    return 0;
}