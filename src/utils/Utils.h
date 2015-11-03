
#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <glm/gtx/string_cast.hpp>
#include <stdio.h>
#include <stdlib.h>

#define debug std::cout << "vid: " << __LINE__ << " " << __FUNCTION__ << std::endl << std::endl;

class Utils {

public:

static void printQuat(glm::quat q) {
    std::cout << glm::to_string(glm::eulerAngles(q)) << std::endl;
}


private:

};

#endif // UTILS_H