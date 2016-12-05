//
//  HashMap.cpp
//  HashTableImp
//
//  Created by Aidan Sullivan on 12/5/16.
//  Copyright © 2016 Aidan Sullivan. All rights reserved.
//

#include "HashMap.hpp"

    HashMap::HashMap() {
        
        table = new LinkedHashEntry*[TABLE_SIZE];
        
        for (int i = 0; i < TABLE_SIZE; i++)
            
            table[i] = NULL;
        
    }
    
    int HashMap::get(int key) {
        
        int hash = (key % TABLE_SIZE);
        
        if (table[hash] == NULL)
            
            return -1;
        
        else {
            
            LinkedHashEntry *entry = table[hash];
            
            while (entry != NULL && entry->getKey() != key)
                
                entry = entry->getNext();
            
            if (entry == NULL)
                
                return -1;
            
            else
                
                return entry->getValue();
            
        }
        
    }
    
    void HashMap::put(int key, int value) {
        
        int hash = (key % TABLE_SIZE);
        
        if (table[hash] == NULL)
            
            table[hash] = new LinkedHashEntry(key, value);
        
        else {
            
            LinkedHashEntry *entry = table[hash];
            
            while (entry->getNext() != NULL)
                
                entry = entry->getNext();
            
            if (entry->getKey() == key)
                
                entry->setValue(value);
            else
                
                entry->setNext(new LinkedHashEntry(key, value));
            
        }
        
    }
    
    void HashMap::remove(int key) {
        
        int hash = (key % TABLE_SIZE);
        
        if (table[hash] != NULL) {
            
            LinkedHashEntry *prevEntry = NULL;
            
            LinkedHashEntry *entry = table[hash];
            
            while (entry->getNext() != NULL && entry->getKey() != key) {
                
                prevEntry = entry;
                
                entry = entry->getNext();
                
            }
            
            if (entry->getKey() == key) {
                
                if (prevEntry == NULL) {
                    
                    LinkedHashEntry *nextEntry = entry->getNext();
                    
                    delete entry;
                    
                    table[hash] = nextEntry;
                    
                } else {
                    
                    LinkedHashEntry *next = entry->getNext();
                    
                    delete entry;
                    
                    prevEntry->setNext(next);
                    
                }
                
            }
            
        }
        
    }

    HashMap::~HashMap() {
        
        for (int i = 0; i < TABLE_SIZE; i++)
            
            if (table[i] != NULL) {
                
                LinkedHashEntry *prevEntry = NULL;
                
                LinkedHashEntry *entry = table[i];
                
                while (entry != NULL) {
                    
                    prevEntry = entry;
                    
                    entry = entry->getNext();
                    
                    delete prevEntry;
                    
                }
                
            }
        
        delete[] table;
    
};