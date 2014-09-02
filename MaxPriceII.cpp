/*leetcode :Best Time to Buy and Sell Stock II
Say you have an array for which the ith element is the price of a given stock on day i.
Design an algorithm to find the maximum profit.
You may complete as many transactions as you like 
(ie, buy one and sell one share of the stock multiple times). 
However, you may not engage in multiple transactions at the same time 
(ie, you must sell the stock before you buy again).*/
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int max = 0;
        if(prices.size() == 0)
            return 0;
        for(vector<int>::size_type ix = 0; ix != prices.size()-1; ix ++)
        {
            int tmpV = prices[ix + 1] - prices[ix];
            if(tmpV > 0)
                max += tmpV;
        }
        return max;
    }
};


int main()
{
    vector<int> prices(5);
    cout << "4,5,8,1,7"<<endl;
    for(vector<int>::size_type ix = 0; ix != prices.size(); ix ++)
    {
        cin >> prices[ix];
    }
    Solution s;
    int maxValue = s.maxProfit(prices);
    cout << maxValue<< endl;
    system("pause");
}
