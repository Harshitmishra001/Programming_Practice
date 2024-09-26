import java.util.Scanner;
import java.util.Random;
import java.io.*;

class guessNumber{
    public static void main(String []args){
        Random rand = new Random();
        int num = rand.nextInt(100)+1;
        Scanner s = new Scanner(System.in);
        while(true){
            System.out.println("Enter Your Guess---->\n");
            int userInput = s.nextInt();
            if(userInput==num){
                System.out.println("you guessed right\n");
                break;
            }
            else if(userInput<num){
                    System.out.println("num is less\n");
                }
            else if(userInput > num) {
                    System.out.println("num is greater\n");
                
            }
        else{
            System.out.println("Wrong input\n");
        }
        }
        s.close();
    }
}