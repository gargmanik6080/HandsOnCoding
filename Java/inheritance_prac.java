/*
import java.util.*;
class first {
    int n,m;
    public void data(){
        Scanner scn=new Scanner(System.in);
        n=scn.nextInt();
        m=scn.nextInt();
        scn.close();
    }

}
class second extends first{
    public int logic(){
        int s=0;
        for(int i=n;i<=m;i++){
            int f=1;
            for(int j=2;j<=i/2;j++){
                if(i%j==0){
                    f=0;
                    break;
                }
            }
            if(f==1)s+=i;
        }
        return s;
    }
}
public class inheritance_prac extends second{
    public void display(int s){
        int c=0;
        while(s!=0){
            if((s%10)%2==0)c++;
            s/=10;
        }
        System.out.println(c);
    }
    public static void main(String args[]){
        inheritance_prac obj=new inheritance_prac();
        obj.data();
        obj.display(obj.logic());
    }
}
*/

// interface x{
//     void prnt();
// }
// class first{

// }
// class second extends first,{
    
// }






interface first{
    void m1();
}
public class inheritance_prac implements first{
   public void m1(){
       System.out.println("m1");
   }
   public static void main(String args[]){
       inheritance_prac obj=new inheritance_prac();
       obj.m1();
   }
}