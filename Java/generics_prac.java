import java.util.Scanner;

public class generics_prac {
    public static void main(String[] args) {
        int sm=0;
        int[] arr=new int[10];
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        while(n!=0){
            int d= n%10;
            // sm += d*d*d;
            arr[d]++;
            n = n/10;
        }
        for(int i=0;i<10;i++){
            sm+= arr[i]*arr[i]*arr[i];
        }
        System.out.println(sm);
        int r=0,o=sm;
        while(o!=0){
            r+= o%10;
            o = o/10;
        }
        if(r==sm) System.out.println("Palin");
        else System.out.println("Not Palin");
    }
}
