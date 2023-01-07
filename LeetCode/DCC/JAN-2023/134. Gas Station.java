class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost) {
        int totalGases = Arrays.stream(gas).sum();
        int totalCosts = Arrays.stream(cost).sum();
        if (totalGases - totalCosts < 0)
            return -1;

        int start = 0, total = 0;
        for(int i = 0; i < gas.length; i++) {
            
            total += gas[i] - cost[i];
            if(total < 0) {                      
                total = 0;      
                start = i + 1;
            }
        }
        return start;
    }
}