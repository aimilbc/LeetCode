package RunningSumOf1dArray;

public class RunningSumOf1dArray {

	public static void main(String[] args) {
		// 1. create arrays (original & second)
		// 2. call class Solution and store summed elements on the second array
		// 3. display the original and calculated array
		
		// 1.
		int intArray[] = {1,2,3,4};
		int[] outArray = new int[intArray.length];
		
		// 2.
		outArray = Solution.runningSum(intArray);
		
		// 3.
		System.out.println("This program will sum up elements in a vector as it goes up elements.");
		System.out.print("The original array: ");
		for (int i : intArray) {
			System.out.print(i + " ");
		}
		System.out.print("\nThe second array: ");
		for (int i : outArray) {
			System.out.print(i + " ");
		}
		System.out.println("\n");
		
	}
}



