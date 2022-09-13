//
//  main.cpp
//  IBeforeE
//
//  Created by Muhammed Suleman Motiwala on 8/30/20.
//  Copyright 2020 Muhammed Suleman Motiwala. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

bool check(string word){
    if (word.find("ie") /* word contains ie */) {
        return true;
        //then make sure it doesnt have c after
        // print word + bool
    }
    
    else if (word == "ei" /* word contains ei */){
        cout << "has ei\n";
        //make sure it has "c" after
        // print word + bool
    }
    
    /*else{
        
    }
    */
return true;
}

int main() {
    // insert code here...
    string wordIn;
    
    cout << "Enter a word\n";
    cin >> wordIn;
    
    check(wordIn);

    return 0;
}
