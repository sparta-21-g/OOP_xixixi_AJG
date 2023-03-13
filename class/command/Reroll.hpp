#ifndef _REROLL_HPP_
#define _REROLL_HPP_
#include "AbilityCommand.hpp"

class Reroll : public AbilityCommand {
    private:

    public:
        Reroll();                           // default ctor
        Reroll(string, string);             // user defined ctor
        Reroll(const Reroll&);              // cctor
        Reroll& operator=(const Reroll&);   // assignment
        ~Reroll();                          //  dtor

        void execute();
        bool continueToNextPlayer();

};

#endif