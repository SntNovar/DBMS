#include<iostream>  
#include <vector>
#include <algorithm>
using namespace std;


class countingsort {
    public:

       void countsort(std::vector<int>& nums, int place) {
            int n = nums.size();
            vector<int> count(10, 0);

            for(int i= 0; i<n; i++)
            {
                int digit = (nums[i]/place)%10;
                count[digit]++;
            }
            for(int i =1; i<count.size(); i++){
                count[i] += count[i-1]; 
            }
            vector<int> ans(n , 0);
            for(int i=n-1; i>=0; i--)
            {
                ans[--count[(nums[i]/place)%10]] = nums[i];
            }
             nums = ans;
        }

};

int main() {
countingsort obj;
vector<int>  nums ;
int n ;
cin>>n;
for(int i=0; i<n; i++)
{
    int x;
    cin>>x;
    nums.push_back(x);
}

int maxval = *max_element(nums.begin() , nums.end());

for(int place = 1; maxval/place >0; place *= 10)
{
    obj.countsort(nums , place);
}

for(int i =0; i<n; i++ )
{
    cout<<nums[i]<<" ";
}
return 0;
}