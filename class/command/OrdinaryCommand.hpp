#ifndef _ORDINARY_COMMAND_HPP
#define _ORDINARY_COMMAND_HPP
#include "Command.hpp"
#include "../inventory/Player.hpp"
#include "../../utils/ListOfThing.hpp"
#include "../Round.hpp"
#include "../inventory/AbilityCardsBank.hpp"
#include "../inventory/CardsBank.hpp"

class OrdinaryCommand : public Command {
    public:
        OrdinaryCommand();                                  // default ctor
        OrdinaryCommand(string, string);                    // user defined ctor
        OrdinaryCommand(const OrdinaryCommand&);            // cctor
        OrdinaryCommand& operator=(const OrdinaryCommand&); // assignment
        ~OrdinaryCommand();                                 //  dtor

        virtual void execute(List<Player>&, int, int&, CardsBank&, AbilityCardsBank&);
        virtual bool continueToNextPlayer();

};


#endif