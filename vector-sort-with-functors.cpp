#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>

using namespace std;
int main(){
    vector<int> nums = {5,10,11,2,12};
    sort(nums.begin(),nums.end(),greater<int>());
    for(auto num: nums){
        cout<<num<<" ";
    }
}