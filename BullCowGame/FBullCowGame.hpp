//
//  FBullCowGame.hpp
//  BullCowGame
//
//  Created by Chase Lee on 12/14/18.
//  Copyright © 2018 Chase Lee. All rights reserved.
//

#ifndef FBullCowGame_hpp
#define FBullCowGame_hpp

#include <stdio.h>
#include <string>

using FString = std::string;
using int32 = int;

// all values initialized to 0
struct FBullCowCount {
    int32 Bulls = 0;
    int32 Cows = 0;
};

enum class EGuessStatus {
    Invalid_Status,
    OK,
    Not_Isogram,
    Wrong_Length,
    Not_Lowercase
};

class FBullCowGame {
public:
    FBullCowGame(); // constructor
    
    int32 GetMaxTries() const;
    int32 GetCurrentTry() const;
    int32 GetHiddenWordLength() const;
    bool IsGameWon() const;
    EGuessStatus CheckGuessValidity(FString) const;
    
    void Reset();
    FBullCowCount SubmitValidGuess(FString);

private:
    // see constructor for initialization
    int32 MyCurrentTry;
    int32 MyMaxTries;
    FString MyHiddenWord;
    bool bGameIsWon;
    
    bool IsIsogram(FString) const;
};

#endif /* FBullCowGame_hpp */
