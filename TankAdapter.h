#pragma once

#include "TankAdaptee.h"
#include "DestroyableGroundObject.h"

class TankAdapter : public DestroyableGroundObject {
private:
    TankAdaptee tankAdaptee;

public:
    TankAdapter() {}
    ~TankAdapter() {}

    bool __fastcall isInside(double x1, double x2) const override 
    {
        return tankAdaptee.isInRange(x1, x2);
    }

    inline uint16_t GetScore() const override
    {
        return tankAdaptee.GetScore();
    }

    void Draw() const override 
    {
        tankAdaptee.Paint();
    }

    void SetPos(double nx, double ny) override 
    {
        tankAdaptee.SetPos(nx, ny);
    }

    double GetY() const override 
    {
        return tankAdaptee.GetY();
    }

    double GetX() const override 
    {
        return tankAdaptee.GetX();
    }

    void SetWidth(uint16_t widthN) override
    {
        tankAdaptee.SetWidth(widthN);
    }

    uint16_t GetWidth() const override 
    {
        return tankAdaptee.GetWidth();
    }
};
