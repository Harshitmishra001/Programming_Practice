import java.io.*;
import java.util.Scanner;
class Multithreading extends Thread{
    @Override
    public void run(){
        for(int i=1;i<=5;i++){
            System.out.println(i);
            try{
                Thread.sleep(1000);
            }catch(InterruptedException e){
                e.printStackTrace();
            }
        }
    }
}
public class TaskSchedullingDemo {
    public static void main(String[] args) {
        Multithreading Multithreading = new Multithreading();
        Thread t1 = new Thread (Multithreading);
        Thread t2 = new Thread (Multithreading);
        t1.start();
        t2.start();        
    }
}