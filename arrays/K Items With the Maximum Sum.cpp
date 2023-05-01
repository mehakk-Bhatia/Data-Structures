class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
         
        if(k == 0){
            return 0;
        }
        
        if(k < numOnes){
            return k;
        }
        int sum = 0;
        int x = k;
        sum += numOnes;
        x -= numOnes;
        x -= numZeros;
        if(x>0){
            sum += x*-1;
        }
        return sum;
        
        
    }
};
