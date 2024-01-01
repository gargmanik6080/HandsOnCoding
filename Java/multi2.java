/*class th implements Runnable{
    Thread t;
    th(String name){
        t = new Thread(this,name);
        t.start();
    }
    public void run(){
        System.out.println("I am in thread "+ t.getName());
    }
}
class multi2{
    public static void main(String[] args) {
        new th("First");
        new th("Second");
        new th("Third");

    }
}*/


/*
import java.math.BigInteger;

class th implements Runnable{
    Thread t;
    String s;
    th(String n, String str){
        t = new Thread(this,n);
        t.start();
        s=str;
    }
    public void run(){
        if(t.getName()=="First"){
            int x = Integer.parseInt(s);
            BigInteger b=new BigInteger(""+1);
            while(x>0){
                b = b.multiply(new BigInteger(""+x)) ;
                x--;
            }

            System.out.println(b);
        }
    }
}
class multi2{
    public static void main(String[] args) {
        new th("First",  "12");
        // new th("Second");
        // new th("Third");

    }
}*/


// SUSPENDING n RESUMING THREADS
/*
class newth implements Runnable{
    Thread t;
    String n;
    newth(String s){
        t = new Thread(this);
        t.start();
        n=s;
    }
    public void run(){
        for(int i=1;i<=50;i++){
            System.out.println("Child "+n+" : " +i);
            try{Thread.sleep(50);}
            catch(Exception x){}
        }
        System.out.println("Exitted Child "+ n );
    }
}
class multi2{
    public static void main(String[] args) {
        newth o1 = new newth("1");
        newth o2 = new newth("2");

        try{
            System.out.println("Sus 1");
            // Thread.sleep(500);
            o1.t.suspend();
            Thread.sleep(500);
            System.out.println("Res 1");
            o1.t.resume();

            // Thread.sleep(500);
            o2.t.suspend();
            o2.t.resume();
        }
        catch(Exception e){}
    }
}*/
