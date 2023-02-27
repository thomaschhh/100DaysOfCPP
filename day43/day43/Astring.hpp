//
//  Astring.hpp
//  day43
//
//  Created by Thomas Holz on 27.02.23.
//

#ifndef Astring_hpp
#define Astring_hpp

#include <stdio.h>


class Astring
{
private:
    char* str_;  // pointer to a char[] that holds a C-style string
public:
    Astring();
    Astring(const char* s);
    ~Astring();
    Astring(const Astring& source);
    
    // Overload copy assignment - deep copy
    Astring& operator=(const Astring& rhs);
    
    void display() const;
    size_t get_length() const;
};

#endif /* Astring_hpp */
