// import java.util.Scanner;
// class th implements Runnable{
//     Thread t;
//     String s;
//     int n;
//     th(String z,int x){
//         s=z;
//         t = new Thread(this);
//         t.start();
//         n=x;
//     }
//     public void run(){
//         // String asc="";
//         int x=0;
//         for(int i=0;i<s.length();i++){
//             int z= (int) s.charAt(i);
//             int k=0;
//             while(z>0){
//                 k+=z%10;
//                 z=z/10;
//                 if(z==0 && k>9){
//                     z=k;
//                     k=0;
//                 }
//             }
//             z=k;
//             x+=z;
//         }
//         while(n>0){
//             x+= n%10;
//             n/=10;
//         }
//         // System.out.println(x);

//         // digit squares
//         int a=0;
//         while(x>0){
//             a+= x*x;
//             x/=10;
//         }
//         System.out.println(a);
//     }
// }

// public class multi3 {
//     public static void main(String[] args) {
//         Scanner sc= new Scanner(System.in);
//         String s = sc.nextLine();
//         int x = sc.nextInt();
//         new th(s,x);
//         sc.close();
//     }

// }




/*
import java.util.Scanner;

class th implements Runnable{
    Thread t;
    int n;
    th(int x){
        t = new Thread(this);
        t.start();
        n=x;
    }
    public void run(){
        if(n%2==0) System.out.println("Even");
        else System.out.println("Odd");
    }
}

public class multi3 {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int x = sc.nextInt();
        new th(x);
        sc.close();
    }

}
*/

import java.util.Arrays;

class th implements Runnable{
    Thread t;
    String s;
    th(String z){
        t = new Thread(this);
        t.start();
        s=z;
    }
    public void run(){
        if(s.length()>15) System.out.println("Invalid");
        else{
            String[] x = s.split("[.]");
            // for(int i=0;i<x.length;i++){
            //     System.out.println(x[i]);
            // }
            if(x.length!=4) {
                System.out.println("Invalid");
                return ;
            }
            for(int i=0;i<4;i++){
                
                if( Integer.parseInt(x[i])>255 || Integer.parseInt(x[i])<0){
                    System.out.println("Invalid");
                    return ;
                }

            }
            System.out.println("Valid");
        }
    }
}

public class multi3 {

    // CHECKING IF NUMERIC
    static boolean isNumeric(String str) { 
        try {
            Double.parseDouble(str);  
            return true;
        } 
        catch(Exception e){  
            return false;  
        }
    }
    public static void main(String[] args) {
        // new th("255.100.100.25");
        // System.out.println(isNumeric("2.2/"));
        // System.out.println("bvw".compareTo("baa"));
        // System.out.println('A' - 'a');

        System.out.println(new StringBuilder("Manik").reverse().toString());
        String[] s = {"aaa", "aab", "aba"};
        Arrays.sort(s);
        for(String i:s){
            System.out.println(i);
        }
    }

}