int hourglassSum(vector<vector<int>> arr) {
    int sum = 0, max = -1000;
    for (int row = 0; row < arr.size() - 2; row++) {
        for (int col = 0; col < arr.size() - 2; col++) {
    
            sum = arr[row + 1][col + 1]; // mid between upRow & downRow
        
            for (int move = 0; move < 3; move++) {
                // mid + upRow + downRow
                sum += arr[row][col + move] + arr[row + 2][col + move];
            }
         
            // get maximum summation
            if (sum > max)
                max = sum;
        
        }
        
    }
    return max;
}

/*
int hourglassSum(vector<vector<int>> arr) {
    int sum = 0, max = 0;
    for (int row = 0; row < arr.size(); row++) {
        for (int col = 0; col < arr.size(); col++) {
            // to prevent move after size  
            if ((row + 2) <= (arr.size() - 1) && (col + 1) <= (arr.size() - 1))
                sum = arr[row + 1][col + 1]; // mid between upRow & downRow
            
            for (int move = 0; move < 3; move++) {
                // to prevent move after size          
                if ((row + 2) <= (arr.size() - 1) && (col + move) <= (arr.size() - 1)) {
                    // mid + upRow + downRow
                    sum += arr[row][col + move] + arr[row + 2][col + move];
                } 
            }
            // get maximum summation
            if (sum > max)
                max = sum;
        }
        
    }
    return max;
}
*/