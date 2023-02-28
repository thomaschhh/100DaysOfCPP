//
//  Astring.cpp
//  day44
//
//  Created by Thomas Holz on 28.02.23.
//

#include "Astring.hpp"
#include <iostream>

Astring::Astring()
    : str_{nullptr} {
    str_ = new char[1];
    *str_ = '\0';
}

Astring::Astring(const char* s)
    : str_ {nullptr} {
        if (s==nullptr) {
            str_ = new char[1];
            *str_ = '\0';
        } else {
            str_ = new char[std::strlen(s) + 1];
            std::strcpy(str_, s);
        }
}

Astring::Astring(const Astring& source)
    : str_{nullptr} {
        std::cout << "copy constructor" << std::endl;
        str_ = new char[std::strlen(source.str_) + 1];
        std::strcpy(str_, source.str_);
}

Astring::~Astring() {
    delete [] str_;
}

Astring& Astring::operator=(const Astring& rhs) {
    std::cout << "assignment operator overloading - copy" << std::endl;
    
    if (this == &rhs)
        return *this;
    
    delete [] str_;
    str_ = new char[std::strlen(rhs.str_) + 1];
    
    std::strcpy(str_, rhs.str_);
    
    return *this;
}

// assignment operator overloading - move
Astring& Astring::operator=(Astring&& rhs) {
    std::cout << "assignment operator overloading - move" << std::endl;
    
    if (this == &rhs)
        return *this;
    
    delete [] str_;
    str_ = rhs.str_;
    
    rhs.str_ = nullptr;
    
    return *this;
}

void Astring::display() const {
    std::cout << "'" << str_ << "'" << " has " << get_length() << " characters" << std::endl;
}

size_t Astring::get_length() const {
    return strlen(str_);
}
