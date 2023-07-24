#ifndef UTILS_H
#define UTILS_H

#include <iostream>

#define ASSERT(condition, error_msg)\
	if(!(condition)){\
		std::cout << (error_msg) << std::endl;\
		return 1;\
	}

#endif
