//
//  DivideByZeroException.h
//  day61
//
//  Created by Thomas Holz on 17.03.23.
//

#ifndef DivideByZeroException_h
#define DivideByZeroException_h

class DivideByZeroException : public std::exception{
public:
    // specify that the constructor cannot throw an exception
    DivideByZeroException () noexcept = default;
    // destructors don't throw exceptions by default
    ~DivideByZeroException () = default;
    
    virtual const char* what() const noexcept{
        return "DivideByZeroException: 'kg' must be > 0";
    }
};

#endif /* DivideByZeroException_h */
