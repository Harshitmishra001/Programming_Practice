import java.util.Scanner;
import java.io.*;
class customer{
    public static int age;
    public static int maxBudget;
    Scanner s = new Scanner(System.in);
    void getAge(){
        System.out.println("Enter your age:");
        age = s.nextInt();
    }
    void getMaxPrice(){
        System.out.println("Enter You Budget:");
        maxBudget = s.nextInt();
    }
    void displayData(){
        System.out.println("Age: "+age);
        System.out.println("Budget: "+maxBudget);
    }
}
class toys{
    int age = customer.age;
    int maxBudget = customer.maxBudget;
    void buy(){
        
    }
}
class toystore{
    public static void main(String []args){
        customer a = new customer();
        a.getAge();
        a.getMaxPrice();
        a.displayData();
    }
} 