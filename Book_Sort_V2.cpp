#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <sstream>

struct Book {
    int book_id;
    std::string author_name;
    double price;
    int no_of_pages;
    std::string publisher;
    int year_of_publishing;
};

bool compareBooks(const Book &book1, const Book &book2) {
    return book1.author_name < book2.author_name;
}

int main() {
    std::string file_path = "books_file.txt";  // Replace with the actual file path
    std::ifstream file(file_path);

    if (!file.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    std::vector<Book> books;
    std::string line;

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        Book book;

        ss >> book.book_id >> std::ws;
        std::getline(ss, book.author_name, ',');
        ss >> book.price >> std::ws;
        ss >> book.no_of_pages >> std::ws;
        std::getline(ss, book.publisher, ',');
        ss >> book.year_of_publishing;

        books.push_back(book);
    }

    file.close();

    // Sort the vector of books based on author names
    std::sort(books.begin(), books.end(), compareBooks);

    // Write the sorted books back to the file
    std::ofstream output_file(file_path);

    if (!output_file.is_open()) {
        std::cerr << "Error opening output file!" << std::endl;
        return 1;
    }

    for (const Book &book : books) {
        output_file << book.book_id << ',' << book.author_name << ',' << book.price << ',' 
                    << book.no_of_pages << ',' << book.publisher << ',' << book.year_of_publishing << '\n';
    }

    output_file.close();

    return 0;
}
