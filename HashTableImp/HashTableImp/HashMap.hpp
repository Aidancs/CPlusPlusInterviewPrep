//
//  HashMap.hpp
//  HashTableImp
//
//  Created by Aidan Sullivan on 12/5/16.
//  Copyright © 2016 Aidan Sullivan. All rights reserved.
//

#ifndef HashMap_hpp
#define HashMap_hpp

#include <stdio.h>
#include "LinkedHashEntry.hpp"

const int TABLE_SIZE = 128;



class HashMap {
    
private:
    
    LinkedHashEntry **table;
    
public:
    
    HashMap();
    int get(int key);
    void put(int key, std::string value);
    void remove(int key);
    ~HashMap();
    
};

#endif /* HashMap_hpp */
