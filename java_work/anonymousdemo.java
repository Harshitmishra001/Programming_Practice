abstract class Cycle{
    abstract public void gearup();
}
class CycleDemo{
    public void runCycle(){
        Cycle c1 = new Cycle(){
            @Override
            public void gearup(){
                System.out.println("Apply anonomyous gear");
            }
        };
        c1.gearup();
    }
}
public class anonymousdemo {
    public static void main(String[] args) {
        CycleDemo cd1 = new CycleDemo();
        cd1.runCycle();
    }
}
