#ifndef _ORDINARY_COMMAND_HPP
#define _ORDINARY_COMMAND_HPP
#include "Command.hpp"
#include "../inventory/Player.hpp"
#include "../../utils/ListOfThing.hpp"
#include "../Round.hpp"

class ordinaryCommand : public Command {
    public:
        ordinaryCommand();                                  // default ctor
        ordinaryCommand(string, string);                    // user defined ctor
        ordinaryCommand(const ordinaryCommand&);            // cctor
        ordinaryCommand& operator=(const ordinaryCommand&); // assignment
        ~ordinaryCommand();                                 //  dtor

        virtual void execute(List<Player>&, int, int&);
        virtual bool continueToNextPlayer();

};


#endif