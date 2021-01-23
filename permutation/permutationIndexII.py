class Solution:
    """
    @param A: An array of integers
    @return: A long integer
    """
    def permutationIndexII(self, A):
        # write your code here
        ret, factor, multi_factor = 1, 1, 1
        
        //use a dict to count the 
        repeat= {}
        for i in range(len(A)-1, -1, -1) :
            if A[i] not in repeat:
                repeat[A[i]] =0
            repeat[A[i]] +=1 
            
            multi_factor *= repeat[A[i]]
            
            rank = 0
            for j in range(i+1, len(A)) :
                if A[j] < A[i] :
                    rank +=1 
            ret += factor*rank // multi_factor
            factor *= len(A)-i
        
        return ret
