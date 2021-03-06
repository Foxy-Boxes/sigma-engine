#include "../../tools/SingleUseString.h"
#include "Matrix44.h"
#include "Vector2d.h"
class Vector3d
{
private:
    /* data */
    double x;
    double y;
    double z;
    double length;
public:
    Vector3d(double,double,double);
    Vector3d();
    Vector3d* add(Vector3d *);
    Vector3d* mul(Vector3d *);
    Vector3d* sub(Vector3d *);
    Vector3d* div(Vector3d *);
    Vector3d* add(double);
    Vector3d* mul(double);
    Vector3d* sub(double);
    Vector3d* div(double);
    double dot(Vector3d *);
    Vector3d& rotateXY(double);
    Vector3d& normalize();
    Vector3d* cross(Vector3d *);
    Vector3d* mulwithMatrix(Matrix44*);
    Vector3d& mulwithMatrixUpdateSelf(Matrix44*);
    Vector3d* decDistortion(Vector3d*);
    double getX();
    double getY();
    double getZ();
    void incX(double);
    void incY(double);
    void incZ(double);
    void ScaleX(double);
    void ScaleY(double);
    void ScaleZ(double);
    void OrientX(double toadd,double tomul);
    void OrientY(double toadd,double tomul);
    void OrientZ(double toadd,double tomul);
    void setX(double);
    void setY(double);
    void setZ(double);
    double getLength();
    void updateLength();
    SingleUseString* getStrRepr();
    SingleUseString* getStrRepr(char);
    SingleUseString* getStrRepr(const char*);
    SingleUseString* getStrRepr(const char* ,const char* ,const char*);
};