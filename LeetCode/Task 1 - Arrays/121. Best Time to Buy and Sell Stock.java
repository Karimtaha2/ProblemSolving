class Solution {
    public int maxProfit(int[] prices) {
        int minBuyCost = prices[0], maxProfit = 0;
        for (int i = 1; i < prices.length; i++) {
            if (minBuyCost > prices[i])
                minBuyCost = prices[i];
            else if (prices[i] - minBuyCost > maxProfit)
                maxProfit = prices[i] - minBuyCost;
            //System.out.println("price[i] = " + prices[i] +", buy Cost = " + minBuyCost +  ", maxProfit = " + maxProfit);
        }
        return maxProfit;
    }
}