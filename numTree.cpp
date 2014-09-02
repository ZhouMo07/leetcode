#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    int numTrees(int n) {
        vector<int> num(n+1,0);
        num[0] = 1;
        num[1] = 1;
        for(vector<int>::size_type i =2; i <= num.size(); i++)
        {
            for(vector<int>::size_type j = 0; j < i; j++)
            {
                num[i] += num[j] * num[i-j-1];
            }
                
        }
        return num[n];
    }
};

int main()
{
   
    Solution S;
    int res =  S.numTrees(2);
    cout<< res<<endl;
    system("pause");
}
