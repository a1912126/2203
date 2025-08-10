#include <bits/stdc++.h>
class ChristmasTree{
    public:
        std::vector <long long> factorial;
        int length;
        long long res = 0;
        void backtrack(int i,int red,int green,int blue,long long cur){
            if (i==length+1){
                res += cur;
                return;
            }
            if (i%3 == 0){
                int each = i/3;
                if (red>=each && green >=each && blue>=each){
                    long long ways = (factorial[i]/(factorial[each]*factorial[each]*factorial[each]));
                    backtrack(i+1,red-each,green-each,blue-each,cur*ways);
                }
            }
            if (i%2 ==0){
                int each = i/2;
                long long ways = factorial[i] / (factorial[each]*factorial[each]);
                if (red>=each && green>=each){
                    backtrack(i+1,red-each,green-each,blue,cur*ways);
                }
                if (red>=each && blue>=each){
                    backtrack(i+1,red-each,green,blue-each,cur*ways);
                }
                if (blue>=each && green>=each){
                    backtrack(i+1,red,green-each,blue-each,cur*ways);
                }                
            }
            if (red>=i){
                backtrack(i+1,red-i,green,blue,cur);
            }
            if (blue>=i){
                backtrack(i+1,red,green,blue-i,cur);
            }
            if (green>=i){
                backtrack(i+1,red,green-i,blue,cur);
            }

        }
        long long decorationWays(int N, int red, int green, int blue){
            length = N;
            long long cur = 1;
            res = 0;
            factorial.clear();
            factorial.push_back(cur);
            for (int i =0;i<N;i++){
                cur *= i+1;
                factorial.push_back(cur);
            }
            backtrack(1,red,green,blue,1);
            return res;

        }
};