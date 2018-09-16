//
//  main.cpp
//  BullCowGame
//
//  Created by Fernan Nader on 9/14/18.
//  Copyright © 2018 Fernan Nader. All rights reserved.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    // insert code here...
    constexpr int DUMBWORD_LENGTH = 6;
    std::cout << "Welcome to bulls and cows. This game is kinda fun, I guess. Anyways, \n";
    std::cout << "guess the " << DUMBWORD_LENGTH;
    std::cout << " letter word I'm thinking of.\n";
    
    //Enter your guess, fool.
    std::cout << "Enter your guess ";
    std::string Guess;
    std::getline (std::cin,Guess);
    
    //repeat the guess back.
    std::cout << "Your guess was: " << Guess << std::endl;
    
    
    return 0;
}
