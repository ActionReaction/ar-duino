#include "led.h"

Led::Led(
    unsigned char identifier,
    unsigned char pin
    )
    : Reaction(identifier)
{

}

Led::~Led() {}

bool Led::IsReaction(unsigned char identifier)
{
    return identifier = id;
}

void Led::Trigger(unsigned char state)
{
    // switch led?
}
