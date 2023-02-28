//
//  Astring.hpp
//  day44
//
//  Created by Thomas Holz on 28.02.23.
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
    // Overload move assignment operator
    Astring& operator=(Astring&& rhs);
    
    void display() const;
    size_t get_length() const;
};

#endif /* Astring_hpp */
