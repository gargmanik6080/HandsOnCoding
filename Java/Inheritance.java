// import java.math.BigInteger;
import java.util.*;

// import javax.sql.rowset.spi.SyncResolver;
// import javax.swing.plaf.synth.SynthSpinnerUI;

// import java.math.*;



//-------------------------------------single inheritance

/*public class Inheritance {
    void display1()
    {
        System.out.println("I'm into base class.");
    }
}
class inheritedClass extends Inheritance
{
    void display2()
    {
        System.out.println("I'm into derived class.");
    }
    public static void main(String[] args)
    {
        inheritedClass obj=new inheritedClass();
        obj.display1();
        obj.display2();
    }
}*/




/*public class Inheritance
{
    int n;
    int value()
    {
        System.out.println("Enter the number you want to find the Factorial of : ");
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        sc.close();
        return n;
    }
}
class InheritedClass extends Inheritance
{
    BigInteger fact(int n)
    {
        BigInteger b0=new BigInteger(""+1);
        for(int i=n;i>=2;i--)
        {
            b0=b0.multiply(new BigInteger(""+i));
        }
        return b0;
    }
    public static void main(String[] args)
    {
        InheritedClass obj=new InheritedClass();
        System.out.println(obj.fact(obj.value()));
    }
}*/


/*public class Inheritance
{
    int getData()
    {
        System.out.println("Enter number : ");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        sc.close();
        return n;
    }
}
class second extends Inheritance
{
    int count=0;
    int arr[]=new int[20];
    void printNumberInArray(int n)
    {
        int i=0;
        while(n!=0)
        {
            int rem=n%10;
            arr[i++]=rem;
            n=n/10;
            count++;
        }
    }
    void swap(int a,int b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    void sortArray(int arr[])
    {
        for(int i=0;i<count;i++)
        {
            for(int j=i+1;j<count;j++)
            {
                if(arr[i]>arr[j])
                {
                    //swap(arr[i],arr[j]);
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
    void displayArray(int arr[])
    {
        for(int i=0;i<count;i++)
        {
            System.out.print(arr[i]);
        }
    }
    public static void main(String[] args)
    {
        second obj=new second();
        obj.printNumberInArray(obj.getData());
        obj.sortArray(obj.arr);
        obj.displayArray(obj.arr);
    }
}*/


/*public class Inheritance
{
    int getData()
    {
        System.out.println("Enter number : ");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        //sc.close();
        return n;
    }
}
class second extends Inheritance
{
    int d,count=0;
    void getNumber()
    {
        System.out.println("Get number : ");
        Scanner sc=new Scanner(System.in);
        d=sc.nextInt();
        //sc.close();
        //return d;
    }
    int numberOfTimes(int n)
    {
        count=0;
        while(n!=0)
        {
            int rem=n%10;
            if(rem==d)
            {
                count++;
            }
            n=n/10;
        }
        return count;
    }
    void display(int count)
    {
        System.out.println("Number of times "+d+" occurred is "+count);
    }
    public static void main(String[] args)
    {
        second obj=new second();
        //int n=obj.getData();
        obj.getNumber();
        obj.display(obj.numberOfTimes(obj.getData()));
    }
}*/


//get the char from base class, and print char array in derived class with removed vowels
/*public class Inheritance
{
    char arr[];
    int size;
    void getData()
    {
        System.out.println("Enter String : ");
        Scanner sc=new Scanner(System.in);
        String res=sc.nextLine();
        size=res.length();
        arr=res.toCharArray();

        //for(int i=0;i<size;i++)
        //{
        //    char ch=sc.next().charAt(i);
        //    arr[i]=ch;
        //}

        System.out.println("Stored Array : ");
        for(int i=0;i<size;i++)
        {
            System.out.print(arr[i]+" ");
        }
    }
}
class second extends Inheritance
{
    void removeVowels(char arr[])
    {
        int i=0;
        while(i<size)
        {
            if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u' || arr[i]=='A' || arr[i]=='E' || arr[i]=='I' || arr[i]=='O' || arr[i]=='U' )
            {
                for(int j=i;j<size-1;j++)
                {
                    arr[j]=arr[j+1];
                }
                size--;
            }
            i++;
        }
    }
    void displayCharArray(char arr[])
    {
        System.out.println("\nCharacters after removing vowels : ");
        for(int i=0;i<size;i++)
        {
            System.out.print(arr[i]+" ");
        }
    }
    public static void main(String[] args)
    {
        second obj=new second();
        obj.getData();
        obj.removeVowels(obj.arr);
        obj.displayCharArray(obj.arr);
    }
}*/










//------------------------------------multilevel inheritance

/*public class Inheritance
{
    void display1()
    {
        System.out.println("I'm into base class.");
    }
}
class second extends Inheritance
{
    void display2()
    {
        System.out.println("I'm into second class.");
    }
}
class third extends second
{
    void display3()
    {
        System.out.println("I'm into third class.");
    }
    public static void main(String[] args)
    {
        third obj=new third();
        obj.display1();
        obj.display2();
        obj.display3();
    }
}*/


/*public class Inheritance
{
    int getData()
    {
        System.out.println("Enter a number : ");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        sc.close();
        return n;
    }
}
class second extends Inheritance
{
    int sumOfDigits(int n)
    {
        int sum=0;
        while(n!=0)
        {
            int rem=n%10;
            sum=sum+rem;
            n=n/10;
        }
        return sum;
    }
}
class third extends second
{
    void display(int n)
    {
        System.out.println("Sum of digits is "+n);
    }
    public static void main(String[] args)
    {
        third obj=new third();
        obj.display(obj.sumOfDigits(obj.getData()));
    }
}*/



//get 1D array from base class, sort it in ascending orde in second class, print the array in third class
public class Inheritance
{
    int size;
    int[] getArray()
    {
        Scanner sc=new Scanner(System.in);
        int arr[];
        System.out.println("Enter size of the Array : ");
        size=sc.nextInt();
        arr=new int[size];
        System.out.println("Enter elements : ");
        for(int i=0;i<size;i++)
        {
            arr[i]=sc.nextInt();
        }
        System.out.println("Stored Array : ");
        for(int i=0;i<size;i++)
        {
            System.out.print(arr[i]+" ");
        }
        sc.close();
        return arr;
    }
}
class second extends Inheritance
{
    int[] sort(int arr[])
    {
        for(int i=0;i<size;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(arr[i]>arr[j])
                {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        return arr;
    }
}
class third extends second
{
    void display(int arr[])
    {
        System.out.println("\nArray after sorting in ascending order : ");
        for(int i=0;i<size;i++)
        {
            System.out.print(arr[i]+" ");
        }
    }
    public static void main(String[] args)
    {
        third obj=new third();
        obj.display(obj.sort(obj.getArray()));
    }
}