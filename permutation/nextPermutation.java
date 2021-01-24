public class NextPermutation {
	
	public void nextPermutation(int[] nums) {
		int min= Integer.MAX_VALUE;
        boolean flag= false;
        for(int i= nums.length-1; i>0; i--)
        {
            if(nums[i]> nums[i-1])
            {
                int p= i-1;
                int r= i;
                for(int j= p+1; j<nums.length; j++)
                {
                    if(nums[j]>nums[p])
                    {
                        min= Math.min(nums[j]- nums[p], min);
                        r= j;
                    }    
                }
                int t= nums[p];
                nums[p]= nums[r];
                nums[r]= t;
                
                Arrays.sort(nums, p+1, nums.length);
                flag= true;
                return;
            }
        }
		/*
        boolean flag= false;
        for(int i= nums.length-1; i>0; i--)
            for(int j= i-1; j>=0; j--)
                if(nums[i]> nums[j])
                {
                    
                     int t= nums[j];
                     nums[j]= nums[i];
                     nums[i]= t;
                     Arrays.sort(nums, j+1, nums.length);
                    
                    flag= true;
                    return;
                }
        */
        
        if(!flag)
            Arrays.sort(nums);
        
    }
	
	public static void main(String[] args) {

		int[] a= new int[]{4, 2, 0, 2, 3, 2, 0};
		NextPermutation ab= new NextPermutation();
		//a.countOfAtoms("HO2");
		ab.nextPermutation(a);
		for(int i=0; i<a.length; i++)
		System.out.println(a[i]);
	}
}
