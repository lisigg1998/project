//
//  planes.h
//  Aeroplane_Project
//
//  Created by HRBattery on 2019/4/16.
//  Modified by Re-Entry

#ifndef planes_h
#define planes_h

#include "cocos2d.h"
#include <string>
USING_NS_CC;
using namespace std;

class Planes: public cocos2d::Sprite {
public:
    int color;                                             // 0 = blue, 1 = green, 2 = red, 3 = yellow
    int id;                                                // from 0 to 3, mark of different planes
    string status;                                         // "ground" = airport, "taking off" = take-off point, "outer" = outer runway, "inner" = final runway, "finished" = finish the run
    string card;                                           // for advance mode
    string buff;                                           // for advance mode
    int round_left;                                        // for advance mode
    int position;                                          // position of plane
    int enter_pt;                                          // the point of entering outer runway
    int turn_pt;                                           // the point of entering final runway
    int fly_start;                                         // the start point of dotted line
    int fly_end;                                           // the end point of dotted line
    int init_rotation;                                     // initial direction of plane
    int roll;                                              // roll point
    Vec2 start_pt;                                         // coordinate in the airport
    Vec2 take_off_pt;                                      // coordinate of take-off point
    bool jumped;                                           // has jumped or not in a round
    bool can_touch;                                        // enable to be touched or not

    virtual bool init(int _init_rotation, string icon);

    static Planes* create();

    static Planes* create(int _color, int _id, int _enter_pt, int _turn_pt, int _fly_start, int _fly_end, int _init_rotation, Vec2 _start_pt, Vec2 _take_off_pt, string icon, string _status = "ground", int _position = -10, int _roll = 1);

    virtual bool onTouchBegan(cocos2d::Touch*, cocos2d::Event*);

    virtual void setRollPoint(EventCustom* event);

    virtual void setTouchable(EventCustom* event);

    virtual void submit_status(EventCustom* event);

    virtual void going_down();

    virtual void ram_judge(EventCustom* event);
};

#endif // planes_h
