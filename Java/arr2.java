import java.util.Scanner;

public class arr2 {
    public int rev(int n){
        int x=0;
        while(n!=0){
            x=x*10 + n%10;
            n/=10;
        }
        return x;
    }
    public boolean prime(int n){
        if(n==2) return true;
        if(n==1 || n%2==0) return false;
        for(int i=3;i<n;i+=2){
            if(n%i==0) return false;
        }
        return true;
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        sc.close();

        arr2 obj= new arr2();
        int arr[]=new int[b-a+1];
        int j=0;
        for(int i=a;i<=b;i++){
            if(obj.prime(i) && obj.prime(obj.rev(i))){
                arr[j]=i;
                j++;
            }
        }
        for(int i=0;i<arr.length;i++){
            if(arr[i]==0) break;
            System.out.print(arr[i] + " ");
        }
        System.out.println("");
    }
}
