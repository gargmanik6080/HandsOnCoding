//2 no. in main func n create func named add(int a,int b), sub, mul, div
/*public class prac {
    public int add(int a,int b){
        return a+b;
    }
    public int sub(int a,int b){
        return a-b;
    }
    public int pro(int a,int b){
        return a*b;
    }
    public int div(int a,int b){
        return a/b;
    }
    public static void main(String[] args) {
        int a=1005;
        int b=5;
        prac obj=new prac();
        System.out.println("Sum:"+ obj.add(a, b));
        System.out.println("Diff:"+ obj.sub(a, b));
        System.out.println("Product:"+ obj.pro(a, b));
        System.out.println("Divisor:"+ obj.div(a, b));
    }
}
*/

// import java.util.Scanner;

// public class newjava {
//     public static void main(String[] args) {
//         int[] arr = new int[10];
//         Scanner scanner = new Scanner(System.in);
        
//         // Accept values from the user
//         for (int i = 0; i < 10; i++) {
//             System.out.print("Enter value for element " + i + ": ");
//             arr[i] = scanner.nextInt();
//         }
        
//         // Display the values
//         System.out.print("Values in the array: ");
//         for (int i = 0; i < 10; i++) {
//             System.out.print(arr[i] + " ");
//         }
//     }
// }


// import java.util.Scanner;

// public class newjava{
//     public static void main(String[] args) {
//         int[] arr = new int[10];
//         Scanner scanner = new Scanner(System.in);
        
//         // Accept values from the user
//         for (int i = 0; i < 10; i++) {
//             System.out.print("Enter value for element " + i + ": ");
//             arr[i] = scanner.nextInt();
//         }
        
//         // Find the minimum value
//         int min = arr[0];
//         for (int i = 1; i < 10; i++) {
//             if (arr[i] < min) {
//                 min = arr[i];
//             }
//         }
        
//         // Display the minimum value
//         System.out.println("Minimum value: " + min);
//     }
// }



// import java.util.Scanner;

// public class newjava {
//   public static void main(String[] args) {
//     Scanner scanner = new Scanner(System.in);

//     int[] numbers = new int[10];

//     System.out.println("Enter 10 numbers:");

//     // Accept 10 numbers from user and store in array
//     for (int i = 0; i < 10; i++) {
//       numbers[i] = scanner.nextInt();
//     }

//     // Find maximum number in array
//     int max = numbers[0];
//     for (int i = 1; i < 10; i++) {
//       if (numbers[i] > max) {
//         max = numbers[i];
//       }
//     }

//     System.out.println("Maximum number is " + max);
//   }
// }



import java.util.Scanner;

public class prac {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] numbers = new int[5];
        input.next().charAt(0);
        // Accept input numbers from the user
        System.out.println("Enter 5 numbers:");
        for (int i = 0; i < 5; i++) {
            numbers[i] = input.nextInt();
        }
        input.close();
        // Count positive numbers
        int count = 0;
        for (int i = 0; i < 5; i++) {
            if (numbers[i] > 0) {
                count++;
            }
        }

        // Display the count
        System.out.println("Count of positive numbers: " + count);
    }
}