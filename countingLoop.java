import java.util.Scanner;
import java.io.*;

class countingLoop{
    public static void main(String []args){
        int n = 0;
        while (n<=10) {
            System.out.println(n);
            n++;
        }
        n=0;
        for(n=0;n<=10;n++){
            System.out.println(n);
        }
    }
}