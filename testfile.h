#pragma once


class Box{
    private:
        double length;
        double width;
        double high;
        char *name;
    public:
        void SetLen(double a);
        void SetWid(double a);
        void SetHig(double a);
        void SetNam(char *a);
        double GetLen();
        double GetWid();
        double GetHig();
        char *GetNam();
        double Square();
        double Volueme();
};
