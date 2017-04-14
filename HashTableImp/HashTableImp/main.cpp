 //
//  main.cpp
//  HashTableImp
//
//  Created by Aidan Sullivan on 12/4/16.
//  Copyright © 2016 Aidan Sullivan. All rights reserved.
//

#include <iostream>
#include "LinkedHashEntry.hpp"
#include "HashMap.hpp"

int main(int argc, const char * argv[]) {
    
    LinkedHashEntry entry1(900001, "Aidan");
    
    std::cout << entry1.getKey() << " " << std::endl;
    std::cout << entry1.getValue() << " " << std::endl;
    
    
    
    
    return 0;
}

void setUp(){
    
    // create a random genrerator for the hash entrys (128)
    
    
}


