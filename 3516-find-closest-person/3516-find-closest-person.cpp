class Solution {
public:
    int findClosest(int x, int y, int z) {
    //   int d=x*x-y*y-2*z*(x-y);
    //     return (d==0)?0:1<<(d>0);  
    if (x == z && y == z) return 0;
        if (x == z) return 1;
        if (y == z) return 2;
        return findClosest(x + (x < z ? 1 : -1), y + (y < z ? 1 : -1), z);
    }
};