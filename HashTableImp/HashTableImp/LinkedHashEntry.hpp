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

class LinkedHashEntry {
    
private:
    
    int key;
    int value;
    LinkedHashEntry *next;
    
public:
    
    LinkedHashEntry(int key, int value);
    int getKey();
    int getValue();
    void setValue(int value);
    LinkedHashEntry *getNext();
    void setNext(LinkedHashEntry *next);
    
};

#endif /* LinkedHashEntry_hpp */
