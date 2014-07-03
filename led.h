#ifndef __ARD_LED__
#define __ARD_LED__

#include "reaction.h"

class Led: public Reaction
{
    public:
        Led(
            unsigned char identifier,
            unsigned char pin
            );

        virtual ~Led();

        virtual bool IsReaction(unsigned char identifier);

        virtual void Trigger(unsigned char state);
};

#endif
