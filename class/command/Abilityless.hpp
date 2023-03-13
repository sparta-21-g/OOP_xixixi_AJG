#ifndef _ABILITYLESS_HPP_
#define _ABILITYLESS_HPP_
#include "AbilityCommand.hpp"

class Abilityless : public AbilityCommand {
    private:

    public:
        Abilityless();                              // default ctor
        Abilityless(string, string);                // user defined ctor
        Abilityless(const Abilityless&);            // cctor
        Abilityless& operator=(const Abilityless&); // assignment
        ~Abilityless();                             //  dtor

        void execute();
        bool continueToNextPlayer();
        
};

#endif 