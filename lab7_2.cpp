#include <iostream>
#include <string>

int main() {
    std::string user_name, movie_choice, free_day, phrase;
    int student_id;

    std::cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    std::cout << "?????: ";
    std::getline(std::cin, user_name);

    std::cout << "Fahsai: Wow!!! " << user_name << " is a really cool name.\n";

    std::cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    std::cout << user_name << ": ";
    std::cin >> student_id;

    int gear_number = student_id / 10000000 - 12;

    std::cout << "Fahsai: I think you may be GEAR " << gear_number << ". I have a free movie ticket for you.\n";

    std::cout << "Fahsai: Let's go to the cinema together!!!\n";

    std::cout << "Fahsai: What movie do you want to watch?\n";
    std::cout << user_name << ": ";
    std::cin.ignore(); // clear the newline character from the input buffer
    std::getline(std::cin, movie_choice);

    std::cout << "Fahsai: So....which day are you free to go with me?\n";
    std::cout << user_name << ": ";
    std::getline(std::cin, free_day);

    std::cout << "Fahsai: " << free_day << "....that is OK!!! I'm looking forward to watching " << movie_choice << " with you.\n";

    std::cout << user_name << ": ";
    std::getline(std::cin, phrase);

    std::cout << "Fahsai: 555+ see you " << free_day << ". Bye Bye \\(^ ^)/\n";

    return 0;
}
