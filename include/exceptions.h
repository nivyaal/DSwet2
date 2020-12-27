

#ifndef DSEXCEPTIONS_EXCEPTIONS_H
#define DSEXCEPTIONS_EXCEPTIONS_H

#include <exception>

class Failure :public std::exception {};
class InvalidInput :public std::exception{};

#endif 