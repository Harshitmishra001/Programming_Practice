package java_work;
class Bird{
    protected void fly(){
        System.out.println("I can Fly");
    }
}
class AngryBird extends Bird{
    void walk(){
        System.out.println("I can walk");
    }
}