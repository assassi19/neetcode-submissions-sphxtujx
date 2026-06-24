class Solution {
    public boolean isValidSudoku(char[][] board) {
        Set<String> set = new HashSet<>();

        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                char number = board[i][j];
                if(number == '.'){
                    continue;
                }
                String rowKey = number + "in row" + i;
                String colKey = number + "in col" + j;
                String squareKey = number + "in square" + (i/3)*3 + j/3;

                if(!set.add(rowKey) || !set.add(colKey) || !set.add(squareKey)){
                    return false;
                }
            }
        }
        return true;
    }
}
