#include "Vector3d.h"
class Vertex : public Vector3d 
{
private:
    /* data */
public:
    Vertex(double,double,double);
    Vertex(Vector3d*);
};
