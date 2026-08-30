class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
      
        unordered_set<char> row[9], col[9], box[9];

        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                char current = board[i][j];
                if (current == '.') continue;

                // Calculate box index
                int boxIndex = (i / 3) * 3 + (j / 3);

                // Check for duplicates
                if (row[i].count(current) || col[j].count(current) || box[boxIndex].count(current)) {
                    return false;
                }

                // Insert into sets
                row[i].insert(current);
                col[j].insert(current);
                box[boxIndex].insert(current);
            }
        }

        return true;
    }
};


