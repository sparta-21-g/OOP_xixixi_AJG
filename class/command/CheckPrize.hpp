#ifndef CHECKPRIZE_HPP
#define CHECKPRIZE_HPP
#include "OrdinaryCommand.hpp"
class Round;

class CheckPrize : public ordinaryCommand {
    private:

    public:
        CheckPrize(string, string);

        bool continueToNextPlayer();
        void execute(List<Player>&, int, int&);
};

#endif
