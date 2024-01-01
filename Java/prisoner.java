import java.util.Collections;
import java.util.*;
public class prisoner {
    public static Integer[] arr_rand(){
        Integer[] a=new Integer[100];
        for(int i=0;i<100;i++){
            a[i]=i+1;
            // System.out.print(a[i]);
        }
        List<Integer> intList = Arrays.asList(a);
        Collections.shuffle(intList);
        intList.toArray(a);
        return a;
    }


    public static void print1(Integer[] a){
        for(int i=0;i<100;i++){
            System.out.print(a[i]);
            System.out.print(" ");
        }
    }
    public static void main(String[] args){
        Integer[] a = arr_rand();
        print1(a);
        Boolean y=false;
        for(int i=0;i<100;i++){
            int x=0,cur=i;
            y=false;
            while(x<50){
                if(a[cur] == cur+1){y=true;
                    break;}
                else{cur = a[cur]-1;}
                x++;
            }
            if(y==false){break;}
        }
        if(y==false){System.out.println("The prisoners couldn't escape...");}
        else{System.out.println("The prisoners were able to escape...");}
    }
}


