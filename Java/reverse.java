
public class reverse {
    //USING LOOP ITERATION
    static String loop(String str)
    {
        int n = str.length();
        String str2 = "";
        for(int i = n-1; i >= 0; i--)
        {
            char x = str.charAt(i);
            str2 = str2.concat(Character.toString(x));
        }
        str = str2;
        return str;
    }

    //RECURSION
    static void rec(String str)
    {
        int n = str.length();
        if (n > 0)
        {
            System.out.print(str.charAt(n-1));
            rec(str.substring(0, n-1));
        }
    }




    public static void main(String args[])
    {

        String x = loop("hello");
        System.out.println(x);
        rec("Hello");
    }
}
//reverse string by recursion and other method