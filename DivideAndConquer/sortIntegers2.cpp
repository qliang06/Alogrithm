class Solution {
public:
    /**
     * @param A: an integer array
     * @return: nothing
     */
    void sortIntegers2(vector<int> &A) {
        // write your code here
        quickSort(A, 0, A.size()-1);
    }
    
    void quickSort(vector<int> &a, int m, int n) {
        if(m >= n)
            return;
        //find the partition index
        int pi= partition(a, m, n);
        //cout << pi << ":" << m << ":" << n << endl;
        quickSort(a, m, pi-1);
        quickSort(a, pi+1, n);
    }
    
    int partition(vector<int> &a, int m, int n) {
        int pivort= a[n];
        //index of the smaller element
        int i= m-1;
        for(int j= m; j< n; j++) {
        //swap smaller element to the front of the array
            if(a[j] < pivort) {
                i++;
                int temp= a[j];
                a[j]= a[i];
                a[i]= temp;
            }
        }
        
        int temp= a[i+1];
        a[i+1]= a[n];
        a[n]= temp;
        
        return i+1;
    }
};
