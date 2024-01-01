import java.io.*;
public class floyd_triangle {
    public static void main(String[] args) throws Exception{
        int n=5;
        int x=1;
        String s="";

        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                s=s+x+" ";
                x++;
            }
            s+="\n";
        }
        FileOutputStream f = new FileOutputStream("floyd");
        byte b[] = s.getBytes();
        f.write(b);
        System.out.println("Data written!!!");
		f.close();
    }
}
