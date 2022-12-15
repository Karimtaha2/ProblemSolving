class Solution {

    public boolean isValidSudoku(char[][] board) {

        for (int row = 0; row < board.length; row++) {
            HashSet<Character> rowSet = new HashSet<>();
            HashSet<Character> colSet = new HashSet<>();

            for (int col = 0; col < board.length; col++) {

                // Check row
                if (board[row][col] != '.') {
                    if (!rowSet.add(board[row][col])) // if not add in rowSet, so it's false
                    {
                        return false;
                    }
                }

                // Check column
                if (board[col][row] != '.') {
                    if (!colSet.add(board[col][row])) {
                        return false;
                    }
                }
            }
        }
        // check sub-boxes
        for (int row = 0; row < board.length; row += 3) { // 0 | 3 | 6 | 9 -> row
            for (int col = 0; col < board.length; col += 3) { // 0 | 3 | 6 | 9 -> col
                HashSet<Character> subBoxesSet = new HashSet<>();
                for (int i = row; i < row + 3; i++) { // 0 : 2 | 3 : 5 | 6 : 8 -> row
                    for (int j = col; j < col + 3; j++) { // 0 : 2 | 3 : 5 | 6 : 8 -> col
                        if (board[i][j] != '.' && !subBoxesSet.add(board[i][j])) {
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
}
