#include <iostream>
#include<string>

int main ()
{
    std::hash <std::string> hash;

    std::string passwordGuess;
    unsigned long hashedPassword = 1065148159544519853; // hash of password

    std::cout << "Enter your password: ";
    std::cin >> passwordGuess;

    unsigned long hashedPasswordGuess = hash(passwordGuess);


    if (hashedPasswordGuess  == hashedPassword) {
        std::cout << "Password is correct!" << std::endl;
    } else {
        std::cout << "Password is wrong!" << std::endl;
    }
}
