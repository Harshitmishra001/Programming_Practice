public class Mobile{
    int m;
    String mname;
    double price;
    Mobile(int x,String s,double d){
        this.m=x;
        this.mname=s;
        this.price=d;
    }
    void start(){
        System.out.println("Welcome to your Device!!!!" +mname);
    }
    
}
class smartWatch extends Mobile{
    smartWatch(int x, String s, double d) {
        super(x, s, d);
    }
    void start(){
        System.out.println("This is a "+mname+"device");
    };

}
class ClassMethodDemo {
    public static void main(String[] args) {
        Mobile Apple=new Mobile(15,"iPhone15",100000);
        Apple.start();
        smartWatch obj = new smartWatch(10, "ANDROID", 10000);
        obj.start();
    }
}