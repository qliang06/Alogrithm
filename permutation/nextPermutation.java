public class NextPermutation {
	
public class Solution {
    public void nextPermutation(int[] nums) {
        int i = nums.length - 2;
        while (i >= 0 && nums[i + 1] <= nums[i]) {
            i--;
        }
        if (i >= 0) {
            int j = nums.length - 1;
            while (j >= 0 && nums[j] <= nums[i]) {
                j--;
            }
            swap(nums, i, j);
        }
        reverse(nums, i + 1);
    }

    private void reverse(int[] nums, int start) {
        int i = start, j = nums.length - 1;
        while (i < j) {
            swap(nums, i, j);
            i++;
            j--;
        }
    }

    private void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
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
