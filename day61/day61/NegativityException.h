//
//  NegativityException.h
//  day61
//
//  Created by Thomas Holz on 17.03.23.
//

#ifndef NegativityException_h
#define NegativityException_h

class NegativityException : public std::exception {
public:
    // specify that the constructor cannot throw an exception
    NegativityException () noexcept = default;
    // destructors don't throw exceptions by default
    ~NegativityException () = default;
    
    virtual const char* what() const noexcept{
        return "NegativityException: 'price' and 'kg' must be > 0";
    }
};

#endif /* NegativityException_h */
