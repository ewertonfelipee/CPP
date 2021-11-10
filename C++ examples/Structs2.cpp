#include <iostream>

using namespace std;

struct Point3d
{
    int x, y, z;

    void DrawPoint3d(Point3d point)
    {
        cout << "x:" << point.x << ", y:" << point.y << ", z:" << point.z << endl;
    }

};

int main()
{

    Point3d points; // points is object

    points.x = 3;
    points.y = 4;
    points.z = 5;

    points.DrawPoint3d(points);
    return 0;
}