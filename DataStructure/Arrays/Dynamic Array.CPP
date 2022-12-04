vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    int lastAnswer = 0;
    vector<int> emptyArray[n];
    vector<int> answerArray;
    for (int row = 0; row < queries.size(); row++) {
        int x = queries[row][1]; // second col
        int y = queries[row][2]; // third col
        if (queries[row][0] == 1)
            emptyArray[(x ^ lastAnswer) % n].push_back(y);
        else if (queries[row][0] == 2) {
            int value = y % (emptyArray[(x ^ lastAnswer) % n].size());
            lastAnswer = emptyArray[(x ^ lastAnswer) % n][value];
            answerArray.push_back(lastAnswer);
        }
            
    }
    
    return answerArray;
}