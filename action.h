#ifndef __ARD_ACTION__
#define __ARD_ACTION__

class Action
{
    public:
        virtual ~Action() {}

        virtual bool IsAction(unsigned char idenfier) = 0;

        virtual void Update() = 0;

    protected:
        unsigned char id;

        Action(unsigned char identifier) : id(identifier) {}
};

#endif
