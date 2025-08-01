#include <bits/stdc++.h>

class SquareOfDigits{
    public: 
        int getMax(std::vector<std::string> data){
            int res = 1;
            int rows = int(data.size());
            int cols = int(data[0].size());
            for (int r =0;r<rows;r++){
                for (int c=0;c<cols;c++){
                    int check = std::min(rows-r-1,cols-c-1);
                    for (int j =0;j<check;j++){
                        if(data[r][c] == data[r][c+j+1] &&data[r][c] == data[r+j+1][c] &&data[r][c] == data[r+j+1][c+j+1]){
                            res = std::max(res,(j+2)*(j+2));
                        }
                    }
                }
            }
            return res;
        }
};