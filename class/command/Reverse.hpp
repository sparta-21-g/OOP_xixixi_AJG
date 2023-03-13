#ifndef _REVERSE_HPP_
#define _REVERSE_HPP_
#include "AbilityCommand.hpp"

class Reverse : public AbilityCommand {
    private:

    public:
        Reverse();                          // default ctor
        Reverse(string, string);            // user defined ctor
        Reverse(const Reverse&);            // cctor
        Reverse& operator=(const Reverse&); // assignment
        ~Reverse();                         //  dtor

        void execute();
        bool continueToNextPlayer();

};

#endif