#include<iostream.h>
#include<conio.h>

class box
{
	 double width,height,depth;
	 public:
		box()
		{
		    cout<<"\nDefault Constructor:";
		    width=4;
		    height=5;
		    depth=6;
		    }
		    box(double w,double h,double d)
		    {cout<<"\nParameterized Constructor";
		    width=w;
		    height=h;
		    depth=d;
		    }
		    box(box &b)
		    {
		    cout<<"\nCopy Constructor";
		    width=b.width;
		    height=b.height;
		    depth=b.depth;
		    }
		    void volume()
		    {
		    	cout<<"\nVolume = "<,width*height*depth;
			}
};

void main()
{
clrscr();
box b1;
b1.volume();
box b2(6,7,8);
b2.volume();
box b3(b1);
b3.volume();
getch();
}
