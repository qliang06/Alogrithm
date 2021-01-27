#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void swap(char** s, int a, int b) {
//     char* temp= s[a];
//     s[a]= s[b];
//     s[b]= temp;
// }

// void reverse(char **s,int x, int y)
// {
    
//     while(x<y)
//     {
//      swap(s,x,y);
//         x++;
//         y--;
//     }
// }

// void sort(char** s, int begin, int end) {
//     //printf("%d, %d\n", begin, end);
//     //begin = 1 end =2;
//     //i= 1; i<=1;
//     //j= 1; j<=2-1-1
//     for(int i=begin; i<=end-1; i++) {
//         for(int j= 0; j<=end-i-1; j++){
             
//             if(strcmp(s[begin+j], s[begin+j+1])>0) {
//                 swap(s, begin+j, begin+j+1);    
//             }
                
//         }
//     }
// } 

// int next_permutation(int n, char **s)
// {
// 	/**
// 	* Complete this method
// 	* Return 0 when there is no next permutation and 1 otherwise
// 	* Modify array s to its next permutation
// 	*/
//     //1 2 4 6 5 3
//     //1 2 5 6 4 3
//     //1 2 5 3 4 6
//     //ab cd;
    
//     int position = -1;
//     for(int i=n-1; i>0 ; i--)
//     {
//         if(strcmp(s[i-1], s[i])>=0)
//             continue;
//         position= i-1;
//     }
    
//     if(position == -1)
//         return 0;
        
//     //printf("%d\n", position);
     
//     for(int i=n-1; i>position; i--) {
//         if(strcmp(s[i], s[position]) > 0)
//         {
//             //printf("%d\n", i);
//             swap(s, i, position);    
//             break;   
//         }    
//     }
    
//     reverse(s, position+1, n-1);
//     return 1;
// }  
void swap(char **s,int x,int y)
{
    char *temp;
    temp = s[x];
    s[x] = s[y];
    s[y] = temp;
}

void reverse(char **s,int x, int y)
{
    
    while(x<y)
    {
     swap(s,x,y);
        x++;
        y--;
    }
}

int next_permutation(int n, char **s)
{
    int i,inv=-1;
    for(i=0;i<n-1;i++)
    {
        if(strcmp(s[i],s[i+1]) < 0)
        {
            inv = i;
        }
    }
    if(inv == -1) return 0;
    for(i=n-1;i>inv;i--)
    {
        if(strcmp(s[inv],s[i]) < 0)
        {
            swap(s,inv,i);
            break;
        }
    }
    reverse(s,inv+1,n-1);
    return 1;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}
