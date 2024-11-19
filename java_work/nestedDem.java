class Outerclass{
    int outx = 15;
    int outy = 20;
    class Innerclass{
        int innerx = 5;
        int innery = 10;
        void display(){
            System.out.println("Outer x " +outx);
            System.out.println("Outer y :"+outy);
        }
    }
}

public class nestedDem{
    public static void main(String[] args) {
        Outerclass.Innerclass obj = new Outerclass().new Innerclass();
        obj.display();
    }
}