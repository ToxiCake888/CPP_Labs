#include "testfile.h"

void Box::SetLen(double a){
    length=a;
}
void Box::SetWid(double a){width=a;}
void Box::SetHig(double a){high=a;}
void Box::SetNam(char *a){name=a;}
double Box::GetLen(){return length;}
double Box::GetWid(){return width;}
double Box::GetHig(){return high;}
char *Box::GetNam(){return name;}
double Box::Square(){return width*length;}
double Box::Volueme(){return width*length*high;}
