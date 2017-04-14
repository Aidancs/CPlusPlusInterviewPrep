//
//  LinkedHashEntry.cpp
//  HashTableImp
//
//  Created by Aidan Sullivan on 12/5/16.
//  Copyright © 2016 Aidan Sullivan. All rights reserved.
//

#include "LinkedHashEntry.hpp"

LinkedHashEntry::LinkedHashEntry(int key, std::string value) {
    
    this->key = key;
    this->value = value;
    this->next = NULL;
    
}

int LinkedHashEntry::getKey() {
    
    return key;
    
}

std::string LinkedHashEntry::getValue() {
    
    return value;
    
}

void LinkedHashEntry::setValue(std::string value) {
    
    this->value = value;
    
}

LinkedHashEntry *LinkedHashEntry::getNext() {
    
    return next;
    
}

void LinkedHashEntry::setNext(LinkedHashEntry *next) {
    
    this->next = next;
    
}
