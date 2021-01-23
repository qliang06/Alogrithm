## 197.Permutation Index(Cantor expansion)

https://www.lintcode.com/problem/permutation-index/description

Given a permutation which contains no repeated number, find its index in all the permutations of these numbers, 

which are ordered in lexicographical order. The index begins at 1.

Input:[3,2,1]

Output:6

Solution：

Cantor expansion

Given a full permutation, calculate its lexicographic order. For the sake of clarity, we have an example [2, 3, 4, 1] to illustrate the operational steps of Cantor:

rank = 0

1.The first digit is 2, then all the permutations starting with 1 must be before this full permutation, then there are (3!) = 6 in the full arrangement of 1 . 

	rank = rank + 1*3! = 6
	
2.The second digit is 3, then all the permutations with 1 and 2 as the second digit must be before this circle. 

	However, we have already made 2 start, so we don't need to consider 2 in the second place. 
	
	We only need to calculate 1 in the second place. rank = rank + 1 * 2! = 8
	
3.The third place is 4, and at the same time, we calculate all the cases with 1 in the third place. 、

	rank = rank + 1 * 1! = 9 
	
4.The last one, rank = rank + 0 * 0! = 9

	Since my lexicographical order starts at 1, and we're counting the number of permutations less than rank 3214, 
	
	then rank 3214 is going to have to be added by 1
	
  
  
