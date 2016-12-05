//
//  LinkedHashEntry.hpp
//  HashTableImp
//
//  Created by Aidan Sullivan on 12/5/16.
//  Copyright © 2016 Aidan Sullivan. All rights reserved.
//

#ifndef LinkedHashEntry_hpp
#define LinkedHashEntry_hpp

#include <stdio.h>
#include "string"

class LinkedHashEntry {
    
private:
    
    int key;
    std::string value;
    LinkedHashEntry *next;
    
public:
    
    LinkedHashEntry(int key, std::string value);
    int getKey();
    std::string getValue();
    void setValue(std::string value);
    LinkedHashEntry *getNext();
    void setNext(LinkedHashEntry *next);
    
};

#endif /* LinkedHashEntry_hpp */
