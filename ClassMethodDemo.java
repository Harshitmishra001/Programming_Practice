class Mobile{
    int m;
    String mname;
    double price;
    Mobile(int x,String s,double d){
        this.m=x;
        this.mname=s;
        this.price=d;
    }
    void start(){
        System.out.println("Welcome to your Device!!!!");
    }
}
class ClassMethodDemo {
    public static void main(String[] args) {
        Mobile oppo;
        Mobile Apple=new Mobile(15,"iPhone15",100000);
        Apple.start();
        
    }
}