/*Say you have an array for which the ith element is the price of a given stock on day i.
Design an algorithm to find the maximum profit. You may complete at most two transactions.
Note:
You may not engage in multiple transactions at the same time 
(ie, you must sell the stock before you buy again).
*/

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        if(prices.size()==0)
          return 0;
        int maxProfit = 0;
        int min = prices[0];
        vector<int> vecA(prices.size()); 
        for(int ix = 1; ix < prices.size(); ix ++)
        {
         vecA[ix] = prices[ix] - min;
         vecA[ix] = vecA[ix] > vecA[ix-1] ? vecA[ix] : vecA[ix-1];
         if(prices[ix] < min)
                       min = prices[ix];
        }
        
        int max = prices[prices.size()-1];
        vector<int> vecB(prices.size());
     
        for(int ix = prices.size()-2; ix >= 0; ix --)
        {
         vecB[ix] = max - prices[ix];
         
         vecB[ix] = vecB[ix] > vecB[ix+1] ? vecB[ix] : vecB[ix+1];
         if(prices[ix] > max)
                       max = prices[ix];
         
        }
      
        cout<<endl;
        for(vector<int>::size_type ix = 0; ix < prices.size(); ix ++)
        {
         int tmpValue = vecA[ix] + vecB[ix];
         if(tmpValue > maxProfit)
                     maxProfit = tmpValue;
        }
        return maxProfit;
     }
    
};

int main()
{
    vector<int> prices(2);
    cout << "0,1"<<endl;
    for(vector<int>::size_type ix = 0; ix != prices.size(); ix ++)
    {
        cin >> prices[ix];
    }
   
    Solution s;
    int maxValue = s.maxProfit(prices);
    cout << maxValue<< endl;
    system("pause");
}
