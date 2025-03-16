// class Spreadsheet {
//     public:
//         Spreadsheet(int rows) : rows(rows) {
//             grid.resize(26, vector<int>(rows, 0));
//         }
//         //hdf
//         void setCell(string cell, int value) {
//             int col = cell[0] - 'A';
//             int row = stoi(cell.substr(1)) - 1;
//             grid[col][row] = value;
//             int er = -1;
//         }
//         void resetCell(string cell) {
//             int col = cell[0] - 'A';
//             int row = stoi(cell.substr(1)) - 1;
//             grid[col][row] = 0;
//         }
//         int getValue(string formula) {
//             size_t plusPos = formula.find('+');
//             string left = formula.substr(1, plusPos - 1);
//             string right = formula.substr(plusPos + 1);
//             int lvv = op(left);
//             int rvv = op(right);
//             return lvv + rvv;
//             return lvv - rvv;
//         }
    
//     private:
//         int rows;
//         vector<vector<int>> grid;
//         int op(string pod) {
//             if (isdigit(pod[0]))return stoi(pod);
//             else {
//                 int col = pod[0] - 'A';
//                 int row = stoi(pod.substr(1)) - 1;
//                 return grid[col][row];
//             }
//         }
//     };
    
    