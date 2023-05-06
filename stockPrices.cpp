#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int L = 0;
        int R = 1;

        while (R < prices.size())
        {
            if (prices[L] > prices[R])
            {
                L = R;
            }

            else if (prices[L] < prices[R])
            {
                if (profit < (prices[R] - prices[L]))
                {
                    profit = (prices[R] - prices[L]);
                }
            }

            R++;
        }

        return profit;
    }
};

int main()
{
    Solution *test = new Solution();
    vector<int> prices;
    prices.push_back(7);
    prices.push_back(1);
    prices.push_back(5);
    prices.push_back(3);
    prices.push_back(6);
    prices.push_back(4);

    int profit = test->maxProfit(prices);
    cout << profit << endl;

    return 0;
}