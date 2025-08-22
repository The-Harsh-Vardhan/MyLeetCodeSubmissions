class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int rows = grid.size();
        int columns = grid[0].size();

        //Variables to keep track of the reactangle
        int r_min = rows;
        int c_min = columns;
        int r_max = 0;
        int c_max = 0;
        int area = 0;

        //Traversing the Row
        for(int i=0; i<rows; i++) {
            //Traversing the Column
            for(int j=0; j<columns; j++) {
                //Upon Encountering a 1
                if(grid[i][j] == 1) {
                    if(i < r_min) {
                        r_min = i;
                    }
                    if(i > r_max) {
                        r_max = i;
                    }
                    if(j < c_min) {
                        c_min = j;
                    }
                    if(j > c_max) {
                        c_max = j;
                    }
                    int length = (r_max+1) - r_min;
                    int breadth = (c_max+1) - c_min;
                    area = length * breadth;
                }   
            }
        }
        return area;
    }
};