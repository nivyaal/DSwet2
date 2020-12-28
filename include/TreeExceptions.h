#ifndef DSEXCEPTIONS_H
#define DSEXCEPTIONS_H

#include <iostream>

    class AVLtreeException:public std::exception
    {
        public:
        virtual ~AVLtreeException(){};
    };

    class valueDoesntExist:public AVLtreeException
    {
        public:
        const char* what() const noexcept override
        {
            return "erase failure, value doesnt exist";
        }
        ~valueDoesntExist()=default;
    };

    class valueExist:public AVLtreeException
    {
        public:
        const char* what() const noexcept override
        {
            return "insert failure , value already exist";
        }
        ~valueExist()=default;
    };

#endif //DSEXCEPTIONS
