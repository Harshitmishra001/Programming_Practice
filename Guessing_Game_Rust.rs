fn main() {
    println!("This Is A guessing Game!");
    println!("Enter Guess: ");
    println!("Apple,Green,Orange,Yellow");
    let word:String = String::from("apple");
    loop{
        let mut guess = String::new();
        std::io::stdin().read_line(&mut guess).expect("Failed");
        guess = guess.trim().to_lowercase();
        if guess==word{
            println!("You Guessed Correct!");
            break;
        }
        else{
            println!("Wrong Guess!!!");
        }
        println!("Your Guess: {}",guess);
}
}