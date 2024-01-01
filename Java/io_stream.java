/*
- java.io.*

input : to read the data from  buffer /file /object 
output : to write the data  to buffer /file /object
Stream : flow of data between program and device

======================================================

java.io.* 
	-inputStream
	-OutputStream
	-Reader
	-Writer


1) Byte Stream classes  
      -FileInputStream(r-f)
      -FileOutputStream(w-f)
      -ByteArrayInputStream(r-arry-byte)
      -ByteArrayOutputStream(w-array_byte)
      -DataInputStream(r-temp-buff,also file)
      -DataOutputStream(w-temp-buffer,file)
      -ObjectInputStream(r-obj)
      -ObjectOutputStream(w-obj)

2) Character Stream classes
      -FileReader(r-f)
      -FileWriter(w-f)
      -CharArrayReader(r-array of char)
      -CharArrayWriter(w-array of char)
      -BufferedReader(r-tmp-buffer,file)
      -BufferedWriter(w-temp buffer)
3) Misc classes
		data  about data/meta information
		-File

*/

import java.io.*;
public class io_stream {
	/*
    public static void main(String[] args) {
		File f=  new File("abc.txt");
		System.out.println(f.exists());
		System.out.println(f.getName());
		System.out.println(f.getPath());
		System.out.println(f.getAbsolutePath());
		System.out.println(f.canRead());
		System.out.println(f.canWrite());

	}*/

	/*
	public static void main(String[] args) throws Exception{
		FileInputStream f = new FileInputStream("abc.txt");

		// Reading the file
		int i;
		while((i=f.read())!=-1){
			System.out.print((char)i);
		}
	}*/

	public static void main(String[] args) throws Exception{
		FileOutputStream f = new FileOutputStream("New");
		String s ="This is the data...\n";
		byte b[] = s.getBytes();
		f.write(b);
		System.out.println("Data written!!!");
		f.close();
	}
}
