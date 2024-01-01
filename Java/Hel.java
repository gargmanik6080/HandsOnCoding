import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.File;
// import java.io.*;
class Hel{ 
    public static void main(String[] args) 
        throws FileNotFoundException,IOException{

            //Reading from file1
        for(String s:args){
            System.out.println(s);
        }
        BufferedReader core= new BufferedReader(new FileReader(args[0]));
        String line;
        String lines = "";
        while ((line = core.readLine()) != null)
        {
            System.out.println(line);
            lines = lines.concat(line) ;
            lines = lines.concat("\n");
        }
        core.close();


            //Creating file2
        File obj = new File(args[1]);
        if (obj.createNewFile())
        {
            System.out.println("New File Created: " + obj.getName());
        }

        //WRITING TO FILE2
        
        FileWriter obj2 = new FileWriter(args[1]);
        obj2.write(lines);
        obj2.close();
        System.out.println("File Modified!!");






    }
}