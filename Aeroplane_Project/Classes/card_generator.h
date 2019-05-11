//
//  card_generator.h
//  Aeroplane_Project
//
//  Created by Re-Entry on 2019/4/28.
//

#ifndef card_generator_h
#define card_generator_h

#include "cocos2d.h"
USING_NS_CC;

class Card_Generator: public cocos2d::Sprite {
public:
    int round;                                             // whose turn
    bool can_touch;                                        // enable to be touched or not

    virtual bool init();

    static Card_Generator* create();

    int getrandom();

    virtual bool onTouchBegan(cocos2d::Touch*, cocos2d::Event*);

    virtual void setTouchable(EventCustom* event);

    virtual void setTouchableFalse(EventCustom* event);

    virtual void setRound(EventCustom* event);
    
    virtual void AIDraw();
};

#endif // card_generator_h
