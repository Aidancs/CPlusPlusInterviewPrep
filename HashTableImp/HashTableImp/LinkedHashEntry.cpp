//
//  LinkedHashEntry.cpp
//  HashTableImp
//
//  Created by Aidan Sullivan on 12/5/16.
//  Copyright © 2016 Aidan Sullivan. All rights reserved.
//

#include "LinkedHashEntry.hpp"

LinkedHashEntry::LinkedHashEntry(int key, int value) {
    
    this->key = key;
    this->value = value;
    this->next = NULL;
    
}

int LinkedHashEntry::getKey() {
    
    return key;
    
}

int LinkedHashEntry::getValue() {
    
    return value;
    
}

void LinkedHashEntry::setValue(int value) {
    
    this->value = value;
    
}

LinkedHashEntry *LinkedHashEntry::getNext() {
    
    return next;
    
}

void LinkedHashEntry::setNext(LinkedHashEntry *next) {
    
    this->next = next;
    
}
