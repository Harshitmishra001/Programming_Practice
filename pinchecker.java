import java.util.Scanner;
import java.io.*;

class pinchecker{
    public static void main(String[] args) {
        String userPassword = "harshit";
        String password ;
        Scanner s = new Scanner(System.in);
        int tries = 0;
        while(tries<3){
            System.out.println("Please Enter Your Password----->\n");
            password = s.nextLine();
            if (userPassword.equals(password)){
                System.out.println("Welcome!!\n");
                break;
            }
            else{
                System.out.println("Wrong Password!!\n");
                tries++;
            }
        }
        if (tries>=3){
            System.out.println("You have been blocked!!\n");
        }
        s.close();
    }
}