class Solution:
    """
    @param A: an integer array
    @return: nothing
    """
    def sortIntegers2(self, A):
        # write your code here
        if not A:
            return
        self.qsort(A, 0, len(A)-1)
        
        return
    
    def qsort(self, A, low, high):
        if low >= high:
            return
        
        left, right = low, high
        
        mid= left+(right-left)//2
        pivort= A[mid]
        
        while left < right:
            while A[left] < pivort:
                left +=1
            while A[right] > pivort:
                right -=1
            if left <= right:
                A[left], A[right] = A[right], A[left]
                left += 1
                right -= 1
                
        self.qsort(A, low, right)
        self.qsort(A, left, high)
        
        return
