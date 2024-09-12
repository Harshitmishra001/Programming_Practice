import java.io.*;
class InputOutput{
    public static void main(String []args) throws IOException{
        InputStreamReader istream= new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(istream);
        String s = br.readLine();
        System.out.println(s);
    }
}