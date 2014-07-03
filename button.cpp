#include "button.h"

Button::Button(
    unsigned char identifier,
    unsigned char pin,
    unsigned char mode
    )
    : Action(identifier)
    , state(false)
{
    //create button...
}

Button::~Button() {}

bool Button::IsAction(unsigned char idenfier)
{
    return idenfier == id;
}

void Button::Update()
{
    bool
        newState;

    // pseudo...
    // newState = ...

    if(state != newState)
    {
        // pseudo...
        // write { identifier, uint8_t(state) }
    }

    state = newState;
}
