package RunningSumOf1dArray;

public class Solution {
	
    public static int[] runningSum(int[] nums) {
		int[] arry = new int[nums.length];
		for(int i = 0; i < nums.length; i++) {
			if(i == 0)
                arry[i] = nums[i];
            else
                arry[i] = arry[i-1] + nums[i];
		}
        return arry;
    }

}
