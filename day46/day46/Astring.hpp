//
//  Astring.hpp
//  day46
//
//  Created by Thomas Holz on 02.03.23.
//

#ifndef Astring_hpp
#define Astring_hpp

#include <stdio.h>
#include <iostream>

class Astring{
    // Overload global stream insertion / extration operators
    friend std::ostream& operator<<(std::ostream& output, const Astring& rhs);
    friend std::istream& operator>>(std::istream& input, Astring& rhs);
    
public:
    Astring();
    Astring(const char* s);
    ~Astring();
    Astring(const Astring& source);

    Astring& operator=(const Astring& rhs);
    Astring& operator=(Astring&& rhs);
    Astring operator+(const Astring& rhs) const;  
    bool operator==(const Astring& rhs) const;
    
    void display() const;
    size_t get_length() const;
private:
    char* str_;
    
};

#endif /* Astring_hpp */


