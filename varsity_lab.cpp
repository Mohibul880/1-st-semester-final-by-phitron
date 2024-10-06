#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{ initwindow(680,420,"Direct Equation");
    int X=getmaxx();
    int Y=getmaxy();
    rectangle(0,0,X,Y);
    line(0,Y/2,X,Y/2);
    line(X/2,0,X/2,Y);
    int a,b;
    cout<<"insert value of A & B:";
    cin>>a>>b;
    int c,d;
    cout<<"insert value of C & D:";
    cin>>c>>d;
    cout<<"A="<<a<<endl<<"B="<<b<<endl<<"C="<<c<<endl<<"D="<<d<<endl;
    int dx=c-a,dy=d-b;
    int m=dy/dx;
    int z=b-m*a;
    int x=a,y=b,xend=c;
    while(x<=xend)
    { int xx=X/2+x;
        int yy=Y/2-y;
    putpixel(xx,yy,WHITE);
        x=x+1;
        y=m*x+z;
    }
    while(!kbhit())
    {
        delay(100);
    }
  return 0;
}
