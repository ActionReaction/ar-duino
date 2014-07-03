#ifndef __ARD_BUTTON__
#define __ARD_BUTTON__

#include "action.h"

class Button: public Action
{
    public:
        Button(
            unsigned char identifier,
            unsigned char pin,
            unsigned char mode
            );

        virtual ~Button();

        virtual bool IsAction(unsigned char idenfier);

        virtual void Update();

    private:
        bool state;
        // your button...
};

#endif
