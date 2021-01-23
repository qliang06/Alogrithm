class Solution {
public:
    /**
     * @param A: An array of integers
     * @return: A long integer
     */
    long long permutationIndex(vector<int> &A) {
        // write your code here
        
        long long ret= 1;
        int n= A.size();
        long long factor= 1;
        for(int i=n-1; i>=0; i--) {
            int rank =0;
            for(int j= i+1; j<n; j++)
                if(A[j] < A[i])
                    rank++;
            ret += rank*factor;
            factor *= n-i;
        }
        
        return ret;
    }
};
