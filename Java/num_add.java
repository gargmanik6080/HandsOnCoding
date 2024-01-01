import java.util.Scanner;

/*public class num_add{
    public static void main(String[] args) {
        String a="6846846846";
        String b="6546846846";
        String c="";
        int z=0;
        for(int i=a.length()-1;i>=0;i--){
            int x=(a.charAt(i)-'0') + (b.charAt(i)-'0') + z;
            if(x>9){
                z=1;
                x=x%10;}
            else z=0;
            c= String.valueOf(x)+c;
        }
        if(z==1)c="1"+c;
        System.out.println(c);
    }
}*/



// class pow{
//     int a,b;
//     public void gete(/*int n,int m*/){
//         Scanner x=new Scanner(System.in);
//         a=x.nextInt();
//         b=x.nextInt();
//         x.close();
//         // System.out.println(" "+a+" "+b);
//     }
//     public void log(){
//         int z=1;
//         while(b>0){
//             z= z*a;
//             b--;
//         }
//         a=z;
//     }
//     public void p(){
//         System.out.println(a);
//     }

//     public static void main(String[] args) {
//         pow x=new pow();
//         x.gete();
//         x.log();
//         x.p();

//     }
// }






class prime{
    int a;
    public void gete(/*/int n,int m*/){
        Scanner x=new Scanner(System.in);
        a=x.nextInt();
        x.close();
        // System.out.println(" "+a+" "+b);
    }
    public boolean log(){
        if(a==1 || a==2) return true;
        if(a%2==0) return false;
        for(int i=3;i<a;i++){
            if(a%i==0)return false;
        }
        return true;
    }
    public void p(boolean b){
        if(b) System.out.println("Yes");
        else System.out.println("No");
    }

    public static void main(String[] args) {
        prime x=new prime();
        x.gete();
        boolean b=x.log();
        x.p(b);

    }
}