/*
class ffs{
    public static void main(String[] args) {
        System.out.println("Hello");
    }
}
class ffs2{
    public static void main(String[] args) {
        System.out.println("Java");
    }
}

class prac1 {
    
    public static void main(String[] args) {
        ffs.main(new String[1]);
        ffs2.main(new String[1]);
        System.out.println("Geek");
    }

}
*/

/*

class prac1{
    final void aa(){
        System.out.println("HI");
    }
    final void aa(int a){
        System.out.println("Bye");
    }
    public static void main(String[] args) {
        prac1 x=new prac1() ;
        x.aa();
        x.aa(5);


        int ch;
        for(ch='a';ch<=10;ch++);
        System.out.println((int)'z');
    }
    
}*/

// REVERSE WORDS
/*
class prac1{
    public static void main(String ar[]) {
        String s = "you are welcome";
        String[] x= s.split(" ");
        String a="";
        for(String i:x){
            a+= " " + new StringBuffer(i).reverse();
        }
        a = ""+new StringBuffer(a).deleteCharAt(0);
        System.out.println(a);
    }
}*/

// anagram 
/*
import java.util.Arrays;
class prac1{
    public static void main(String[] args) {
        String s1="army";
        String s2="mary";
        char[] c1 = s1.toCharArray();
        char[] c2 = s2.toCharArray();
        Arrays.sort(c1);
        Arrays.sort(c2);
        s1= new String(c1);
        s2= new String(c2);
        if(s1.equals(s2)) System.out.println("Anagram");
        else System.out.println("Not");
    }
}
*/

// PALINDROME
/*
class prac1{
    boolean ispalin(String s){
        String x =  "" + new StringBuffer(s).reverse();
        // System.out.println(x);
        return s.equals(x);
    }
    public static void main(String[] args) {
        String s= "abc abbc abbcca abccba";
        String[] x= s.split(" ");
        int mx=0;
        prac1 obj=new prac1();
        for(String i:x){
            if(obj.ispalin(i)==true){
                if(mx<i.length()) mx=i.length();
            }
        }
        System.out.println(mx);
    }
}*/

// SORT WORDS
/*
import java.util.Arrays;

class prac1{
    public static void main(String[] args) {
        String s= "you are welcome .. .. .... abc abbc abbcca abccba";
        String[] x= s.split(" ");
        String a="";
        for(String i:x){
            char[] c= i.toCharArray();
            Arrays.sort(c);

            a+= " "+ new String(c);
        }
        System.out.println(a);
    }
}*/

// COUNT WORDS
class prac1{
    public static void main(String[] args) {
        String s= "you are welcome .. .. .... abc abbc abbcca abccba";
        String[] x= s.split(" ");
        System.out.println(x.length);
    }
}