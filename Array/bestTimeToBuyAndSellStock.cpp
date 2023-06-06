#include "code.cpp"

int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n = prices.size();
    if(n == 0) return 0;

    int minimumPrice = prices[0];
    int maximumProfit = 0;

    for (auto element : prices) {
        if (element < minimumPrice) {
            minimumPrice = element;
        } else {
            int profit = element - minimumPrice;
            if (profit > maximumProfit) {
                maximumProfit = profit;
            }
        }
    }

    return maximumProfit;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}

