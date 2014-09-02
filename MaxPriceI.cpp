/*
Say you have an array for which the ith element is the price of a given stock on day i.
If you were only permitted to complete at most one transaction 
(ie, buy one and sell one share of the stock), 
design an algorithm to find the maximum profit.*/

#include<iostream>
#include<vector>

using namespace std;

class Solution {
      
public:
    int maxProfit(vector<int> &prices)
    {
        if(prices.size() == 0)
            return 0;
        int min = prices[0];
        int tmpValue = 0;
        for(vector<int>::size_type ix = 0; ix != prices.size(); ix ++)
        {
               if(prices[ix] - min > tmpValue)
                   tmpValue = prices[ix] - min;
               else if(prices[ix] - min < 0)
                         min = prices[ix];                         
         }
         return tmpValue;
    }
};


int main()
{
    vector<int> prices(5);
    cout << "4,5,2,1,7"<<endl;
    for(vector<int>::size_type ix = 0; ix != prices.size(); ix ++)
    {
        cin >> prices[ix];
    }
    Solution s;
    int maxValue = s.maxProfit(prices);
    cout << maxValue << endl;
    system("pause");
}
