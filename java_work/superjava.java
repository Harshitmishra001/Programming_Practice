import java.util.Scanner;
import java.io.*;

abstract class Dcars{
    String maker;
    int doors;
    Dcars(String mk,int md){
        this.maker = mk;
        this.doors = md;
    }
    abstract void accelerate();
    void display(){
        System.out.println("I am a Car by "+maker+" having doors "+doors);
    }
}
class Dwheels extends Dcars{
    int wheel;
    Dwheels(String mk,int md,int w){
        super(mk, md);
        this.wheel = w;
    }
    void accelerate(){
        System.out.println("This is abstract");
    }
    void display(){
        super.display();
        System.out.println("I also have "+wheel+" wheel");
    }
}
class superjava{
    public static void main(String[] args) {
        Dwheels whe  = new Dwheels("BMW",4,4);
        whe.display();
        whe.accelerate();
    }
}