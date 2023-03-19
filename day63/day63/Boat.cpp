//
//  Boat.cpp
//  day63
//
//  Created by Thomas Holz on 19.03.23.
//

#include "Boat.hpp"

Boat::Boat() : Boat(1876, "MS Test"){
}

Boat::Boat(int date_build) : Boat(date_build, "MS Test"){
}

Boat::Boat(std::string boat_name) : Boat(1876, boat_name){
}

Boat::Boat(int date_build, std::string boat_name) : date_build_(date_build), boat_name_(boat_name){
}
