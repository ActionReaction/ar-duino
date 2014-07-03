#include "button.h"
#include "led.h"

Action *actions;
Reaction *reactions;

int ActionSize, ReactionSize;

void setup()
{
      Serial.begin(9600);
      string buffer;

      while(1)
      {
            if(Serial.available() > 0)
            {
                buffer = Serial.readStringUntil('\n');
            }
            
            if(buffer.length() > 0) break;
      }

    int
        count_actions,
        count_reactions;

    count_actions = 0;
    count_reactions = 0;

    ActionSize = int(buffer[0]);
    ReactionSize = int(buffer[1]);

    actions = new Action[size_actions];
    reactions = new Action[size_reactions];

    for(int i = 2; i<buffer.length(); ++i)
    {
        int id = int(buffer[0]);
        switch(id) 
        {
            case 1: // button
            {
                int
                    identifier,
                    pin,
                    mode;

                identifier = buffer[++i];
                pin = buffer[++i];
                mode = buffer[++i];

                actions[count_actions++] =
                    Button(identifier, pin, mode);
            } break;
            case 2: // led
            {
                int
                    identifier,
                    pin;

                identifier = buffer[++i];
                pin = buffer[++i];

                actions[count_reactions++] =
                    Led(identifier, pin);
            } break;
        }
    }
}

void loop(void)
{
    for(int i = 0; i < ActionSize; ++i)
    {
        actions[i].Update();
    }

    string buffer;
    if(Serial.available() > 0)
    {
        buffer = Serial.readStringUntil('\n');

        if(buffer.length() > 0)
        {
            int
                identifier,
                state;

            identifier = int(buffer[0]);
            state = int(buffer[1]);

            for(int i = 0; i < ReactionSize; ++i)
            {
                reaction[i].Update();
            }
        }
    }
}

