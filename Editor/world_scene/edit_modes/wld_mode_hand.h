#ifndef WLD_MODE_HAND_H
#define WLD_MODE_HAND_H

#include "../../common_features/edit_mode_base.h"

class WLD_ModeHand : public EditMode
{
public:
    WLD_ModeHand(QGraphicsScene * parentScene = 0, QObject *parent = 0);
    ~WLD_ModeHand();
    void set();
    void mousePress(QGraphicsSceneMouseEvent *mouseEvent);
    void mouseMove(QGraphicsSceneMouseEvent *mouseEvent);
    void mouseRelease(QGraphicsSceneMouseEvent *mouseEvent);

    void keyPress(QKeyEvent *keyEvent);
    void keyRelease(QKeyEvent *keyEvent);
};

#endif // WLD_MODE_HAND_H
