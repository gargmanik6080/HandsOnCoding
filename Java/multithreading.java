/*
                                MULTITHREADING
when size of program become very large then we can divide it in 2 smaller subprogram/thread 
         and when each thread is executing parallely by dividing the time slot
Thread Life Cycle:
1. Born state      - when object is created of Thread class
2. Runnable State  - when u call start() method
3. Running State   - when processor becomes free
4. Block State     - when you stop the method for some time/ condition
                     - sleep()
                     - suspend()
5. Dead State      - when you call stop(), life cycle of a thread has been completed

___________________________________________________________________________________________________________________________________________________________
-> extend Thread
-> implement Runnable interface
___________________________________________________________________________________________________________________________________________________________


java.lang.Thread
    inbuilt class
        Inbuilt Modules:
            - start
            - run
            - setName
            - getName
            - setPriority
            - getPriority()

            Thread Priority:
                - MIN_PRIORITY - 1
                - MAX          - 10
                - NORM         - 5 (Default pri)
            
            - sleep(int)
            - isAlive()
            - join
            - stop()
              etc.

java.lang.Runnable   -> (inbuilt interface)
    public void run()

*//*
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
*//*
class A extends Thread{
    public void run() {}
}

class first{}
class second extends first implements Runnable{
    public void run() {}
}

class abc implements Runnable{
    public void run() {}
}
*/
// class first extends Thread{
//     public void run(){
//         for(int i=1;i<=10;i++){
//             System.out.println("i = "+i);
//         }
//         System.out.println("Exitted first");
//     }
// }
// class second extends Thread{
//     public void run(){
//         for(int j=1;j<=10;j++){
//             System.out.println("j = "+j);
//         }
//         System.out.println("Exitted second");
//     }
// }
// class third extends Thread{
//     public void run(){
//         for(int k=1;k<=10;k++){
//             System.out.println("k = "+k);
//         }
//         System.out.println("Exitted third");
//     }
// }

// class Demo{
//     public static void main(String[] args) {
//         first f = new first();
//         second s = new second();
//         third t = new third();

//         // Not multi threading 
//         // f.run();
//         // s.run();
//         // t.run();

//         f.start();
//         s.start();
//         t.start();
//     }
// }
/*
|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|
*/



/*
 * new Thread()
 * new Thread()
 * new Thread(this)
 * new Thread(this,String)
 */
/*
class first implements Runnable{
    public void run(){
        for(int i=1;i<=100;i++){
            System.out.println("i = "+i);
        }
        System.out.println("Exitted first");
    }
}
class second implements Runnable{
    public void run(){
        for(int j=1;j<=100;j++){
            System.out.println("j = "+j);
        }
        System.out.println("Exitted second");
    }
}
class third implements Runnable{
    public void run(){
        for(int k=1;k<=100;k++){
            System.out.println("k = "+k);
        }
        System.out.println("Exitted third");
    }
}

class Demo{
    public static void main(String[] args) {
        first f = new first();
        second s = new second();
        third t = new third();

        // Multi threading
        Thread t1 = new Thread(f);
        Thread t2 = new Thread(s);
        Thread t3 = new Thread(t);

        t1.start();
        t2.start();
        t3.start();
        try{Thread.sleep(70);} 
        catch (Exception e){}
        System.out.println("Hi");
    }
}
*/
/*
class multithreading{
    public static void main(String[] args) {
        Thread t = new Thread();
        System.out.println(t);
        t.setName("CSE");
        System.out.println(t);
    }
}*/

// ONE CHILD ONE PARENT
/*
class th implements Runnable{
    Thread t;
    th(){
        t = new Thread(this);
        t.start();
    }
    public void run(){
        for(int i=0;i<10;i++){
            System.out.println("Child : " +i);
        }
        System.out.println("Exitted Child");
    }
}
class multi{
    public static void main(String[] args) {
        new th();
        for(int i=0;i<10;i++){
            System.out.println("Parent : " +i);
        }
        System.out.println("Exitted Parent");
    }
}*/

//  3 CHILD 1 PARENT
/*
class th implements Runnable{
    Thread t;
    static int x=0;
    int z;
    th(String n){
        t = new Thread(this,n);
        t.start();
        z=x++;
    }
    public void run(){
        for(int i=z*10+1;i<=z*10+10;i++){
            System.out.println(t.getName() + " Child : " +(+i));
        }
        System.out.println("Exitted Child");
    }
}
class multi{
    public static void main(String[] args) {
        new th("First");
        new th("Second");
        new th("Third");

    }
}*/

// 5 CHILD

class th implements Runnable{
    Thread t;
    th(String n){
        t = new Thread(this,n);
        t.start();
    }
    public void run(){
        for(int i=1;i<=10;i++){
            System.out.println(t.getName() + " Child : " +(i));
        }
        System.out.println("Exitted Child");
    }
}
class multi{
    public static void main(String[] args) {
        new th("First");
        new th("Second");
        new th("Third");
        new th("Forth");
        new th("Fifth");

    }
}



// 3 CHILD 
/*
import java.sql.Array;
import java.util.Arrays;
import java.util.Collections;

class th implements Runnable{
    Thread t;
    String s;
    th(String x, String z){
        t = new Thread(this,x);
        t.start();
        s=z;
    }
    public void run(){
        if(t.getName()=="1"){
            String x="";
            for(int i=0;i<s.length();i++){
                if(s.charAt(i)!= 'a' && s.charAt(i)!= 'e' && s.charAt(i)!= 'i' && s.charAt(i)!= 'o' && s.charAt(i)!= 'u') x+= s.charAt(i);
            }
            s = new String(x);
        }
        else if(t.getName()=="2"){
            s = "abccba";
        }
        else{
            char a[] = s.toCharArray();
            Arrays.sort(a);
            s = new String(a);
            StringBuilder z=  new StringBuilder(s).reverse();
            s= new String(z);
        }
        System.out.println(t.getName() +" "+ s);
    }

}
class multithreading{
    public static void main(String[] args) {
        new th("1", "acvsvva");
        new th("2", "abccba");
        new th("3", "abbcaba");
    }
}*/


// import java.sql.Array;
// import java.util.Arrays;
// import java.util.Collections;
/*
class th implements Runnable{
    Thread t;
    String s;
    th(String x, String z){
        t = new Thread(this,x);
        t.start();
        s=z;
    }
    public void run(){
        if(t.getName()=="1"){
            
        }
        else if(t.getName()=="2"){
        }
        else{

        }
        System.out.println(t.getName() +" "+ s);
    }

}
class multithreading{
    public static void main(String[] args) {
        new th("1", "acvsvva");
        new th("2", "abccba");
        new th("3", "abbcaba");
    }
}

*/


//
//
//
//
//
/*
class ThreadQes3 implements Runnable{
    Thread t;
    String name;

    ThreadQes3(String name){
            this.name = name;
            t = new Thread(this,name);
            t.start();
    }

    Scanner sc = new Scanner(System.in);
    int input = sc.nextInt();
    


    public void run(){
            if(name.equals("Thread 1")){

                 String s = ""+new StringBuffer(""+input).reverse();

                 if((""+input).equals(s)){
                            System.out.println("Palindrome");
                 }
                 else{
                    System.out.println("Not palindrome");
                 }
            }
            if(name.equals("Thread 2")){

                    //conerting integer into int array
                    String s = ""+input;
                    int a[] = new int[s.length()];

                    for(int i=0;i<s.length();i++){
                             a[i] = Integer.parseInt(""+s.charAt(i));
                            }
                    Arrays.sort(a);
                    String str = "";
                    for(int i=0;i<a.length;i++){
                            str+=a[i];
                            
                    }
                    int res = Integer.parseInt(str);
                    System.out.println(res);
            }
    }
}

class Qes3{

public static void main(String[] args) {
    

    new ThreadQes3("Thread 1");
    new ThreadQes3("Thread 2");
    // new ThreadQes3("Thread 3");
    // new ThreadQes3("Thread 4");
    // new ThreadQes3("Thread 5");
    // new ThreadQes3("Thread 6");


}
}*/
