#include <bits/stdc++.h>

class FracCount{
    public:
            int gcd(int a, int b) {
            while (b != 0) {
                int t = a % b;
                a = b;
                b = t;
            }
            return a;
            }

            int totient(int n) {
                int result = n;
                int x = n;
                for (int p = 2; p * p <= x; p++) {
                    if (x % p == 0) {
                        while (x % p == 0) x /= p;
                        result -= result / p;
                    }
                }
                if (x > 1) result -= result / x;
                return result;
            }
        	int position(int numerator, int denominator){
                int pos = 0;
                for (int d = 2; d <= denominator - 1; d++) {
                    pos += totient(d);
                }
                int count = 0;
                for (int k = 1; k <= numerator; k++) {
                    if (gcd(k, denominator) == 1) count++;
                }

                return pos + count;
        }
};