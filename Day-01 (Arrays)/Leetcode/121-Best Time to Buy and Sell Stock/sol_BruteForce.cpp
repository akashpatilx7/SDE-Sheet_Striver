class Solution {

public:

    int maxProfit(vector<int>& prices) {

        // BRUTE FORCE APPROACH 
        // Time Complexity : O(N^2)

        

        int profit=0;

        for(int i=0;i<prices.size();i++)

        {

            for(int j=i+1;j<prices.size();j++)

            {

                if(prices[j]>prices[i] && prices[j]-prices[i]>profit)

                {

                    profit=prices[j]-prices[i];

                }

            }

        }

        return profit;

    }

};
