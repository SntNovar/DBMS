#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class traversing {
    public:
        void spiraltraversing(vector<int>& mat){

        }
};

int main()
{
    vector<int> mat  = {{1,2,3,4,} , {5,6,7,8} , {9,10,11,12} , {13,14,15,16}};

    int top =0;
    int right = mat.size[0]-1;
    int bottom = mat.size();
    int left = 0;

    while(left<=right && top <= bottom)
    {
        for(int i = left; i<right; i++)
        {
            cout << mat[top][i]<<" ";
        }
        top++;

        for(int i = top; i<=bottom; i++)
        {
            cout<<mat[i][right]<<" ";
        }
        right--;

        if(top<=bottom){
            for(int i=right; i>=left; i--)
            {
                cout<<mat[bottom][i]<<" ";
            }
            bottom--;
    }

        if(left<=right){
           for(int i=bottom; i>=top; i-- )
            {
                cout<<mat[i][left] <<" ";
            }
            left++;
        }

    }


} 