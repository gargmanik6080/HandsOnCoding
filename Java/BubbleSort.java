public class BubbleSort {

    //Static Method to Bubble Sort an Array
    static void sort(int[] arr)
    {
        int n = arr.length;
        int j = 0;

        while(j<n)
        {
            // Nested loop to place the maximum element 
            // at the end of the array 
            for(int i=0;i<n-j-1; ++i)
            {
                 // Swapping the greater element towards the end 
                 // of the array
                 if (arr[i]>arr[i+1])
                 {
                    int temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                 }
            }
            // Incrementing j so that For loop doesn't 
            // access the last element(greatest one) again
            ++j;
        }
    }

    // Static Method to print the elements of the array
    static void display(int[] arr)
    {
        // Using for loop to iterate through all the elements
        for(int i=0;i<arr.length; ++i)
        {
            System.out.println(arr[i]);
        }
    }
    

    public static void main(String[] args)
    {
        int[] arr = {4,7,1,0,-5,2,4,5,6,54};
        sort(arr);
        display(arr);
    }
}

