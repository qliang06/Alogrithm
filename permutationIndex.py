class Solution:
    """
    @param A: An array of integers
    @return: A long integer
    """
    def permutationIndex(self, A):
        # write your code here
        ret =1
        factor =1
        #start from the end of the array
        for i in range(len(A)-1, -1, -1):
            rank = 0
            #find the number of elment that smaller than i after i
            for j in range(i+1, len(A)):
                if A[j] < A[i] :
                    rank +=1
            #cantor extention
            ret += factor*rank
            factor *= len(A)-i
            
        return ret
