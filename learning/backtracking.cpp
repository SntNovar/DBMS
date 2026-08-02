#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class  bt{
    public:
        void subsets( vector<int>& arr , vector<int>& ans ,int  i)
        { 
            if(i == arr.size())
            {
                 for(int val : ans)
                 {
                    cout<<val<<" ";
                 }
                 cout<<endl;
                 return;
            }
        //include  
        ans.push_back(arr[i]);
        subsets(arr,ans, i+1);
        
        ans.pop_back();
        //exclude
        subsets(arr,ans, i+  1);

    }   
};

int main()
{
    bt obj;
    vector<int> arr = {1,2,3};
    vector<int> ans;
    obj.subsets(arr , ans , 0);
}