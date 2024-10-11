package java_work;
class Customer {
    private int age;

    public Customer(int age) {
        this.age = age;
    }

    public int getAge() {  
        return age;
    }

    public double getMaxPrice() {
        if (age < 12) {
            return 20.0;
        } else {
            return 50.0;
        }
    }
}

abstract class Toys {
    public abstract boolean checkAge(int age);

    public abstract void buy();
}

class BoardGame extends Toys {
    @Override
    public boolean checkAge(int age) {
        return age >= 6;
    }

    @Override
    public void buy() {
        System.out.println("Buying a board game.");
    }
}

abstract class GameCollection extends Toys {
}

class Chess extends GameCollection {
    @Override
    public boolean checkAge(int age) {
        return age >= 10;
    }

    @Override
    public void buy() {
        System.out.println("Buying a Chess game.");
    }
}

class Cards extends GameCollection {
    @Override
    public boolean checkAge(int age) {
        return age >= 8;
    }

    @Override
    public void buy() {
        System.out.println("Buying a Card game.");
    }
}

class Store {
    public void enterStore() {
        System.out.println("Entering the store.");
    }
}

class BuyingSession {
    public void create() {
        System.out.println("Creating a buying session.");
    }
}

public class toyStore {
    public static void main(String[] args) {
        Customer customer = new Customer(10);
        Store store = new Store();
        store.enterStore();

        BuyingSession session = new BuyingSession();
        session.create();

        Toys boardGame = new BoardGame();
        if (boardGame.checkAge(customer.getAge())) {
            boardGame.buy();
        } else {
            System.out.println("Customer is too young for this toy.");
        }

        Toys chess = new Chess();
        if (chess.checkAge(customer.getAge())) {
            chess.buy();
        } else {
            System.out.println("Customer is too young for this toy.");
        }
    }
}