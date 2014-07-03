#ifndef __ARD_REACTION__
#define __ARD_REACTION__

class Reaction
{
    public:
        virtual ~Reaction() {}

        virtual bool IsReaction(unsigned char idenfier) = 0;

        virtual void Trigger(unsigned char state) = 0;

    protected:
        unsigned char id;

        Reaction(unsigned char identifier) : id(identifier) {}
};

#endif
