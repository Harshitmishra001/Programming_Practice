import java.util.Scanner;
import java.io.*;
interface  animals{
    abstract void canRun();
}
interface cat {
    default void eat(){
        System.out.println("I eat only expensive food (-_-)");
    }
    void canRun();
}
interface wildcat{
    default void eat(){
        System.out.println("I eat everthing (-_-||)");
    }
    void canRun();
}
class fastAnimal implements  wildcat,cat{
    @Override
    public void canRun(){
        System.out.println("I am fast a fk boi");
    }
    public void eat(){
        wildcat.super.eat();
    }
}
public class interfaceex{
    public static void main(String []args){

        fastAnimal tiger = new fastAnimal();
        tiger.eat();
    }
}