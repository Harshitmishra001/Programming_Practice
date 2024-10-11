package mypkg;
import java_work.*;
public class RocketBird extends Bird {
    protected void hit(){
        System.out.println("I am a Rocket Bird!!!!!");
        Bird bd = new Bird();
        bd.fly();        
    }
}
