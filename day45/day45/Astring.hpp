//
//  Astring.hpp
//  day45
//
//  Created by Thomas Holz on 01.03.23.
//

#ifndef Astring_hpp
#define Astring_hpp

#include <stdio.h>


class Astring
{
private:
    char* str_;
public:
    Astring();
    Astring(const char* s);
    ~Astring();
    Astring(const Astring& source);

    Astring& operator=(const Astring& rhs);
    Astring& operator=(Astring&& rhs);
    // Overload binary operators
    Astring operator+(const Astring& rhs) const;  // add string to existing string
    bool operator==(const Astring& rhs) const;  // check for string equality
    
    void display() const;
    size_t get_length() const;
};

#endif /* Astring_hpp */
