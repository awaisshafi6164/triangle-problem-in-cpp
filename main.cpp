#include <iostream>
#include<time.h>
#include<vector>
#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

double area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}

int main()
{
    cout<<"\t\tTriangle Problem\n\n";

    srand(time(0));

    vector<int> vec;

	vec.push_back((rand() % 100) + 1);
	vec.push_back((rand() % 100) + 1);
	vec.push_back((rand() % 100) + 1);

    cout<<"Random Generated Values: "<<vec[0]<<", "<<vec[1]<<", "<<vec[2]<<"\n";

    sort(vec.begin(), vec.end(), greater<int>());

    cout<<"Random Generated Values after sorting: "<<vec[0]<<", "<<vec[1]<<", "<<vec[2]<<"\n";

    int x0 = 0;
    cout<<"Enter any Number (x0): ";
    cin>>x0;

    int y0 = 0;
    cout<<"Enter any Number (y0): ";
    cin>>y0;

    double A, A1, A2, A3;

    A = area(vec[2], vec[2], vec[1], 0, vec[0], vec[0]);
    A1 = area(x0, y0, vec[1], 0, vec[0], vec[0]);
    A2 = area(vec[2], vec[2], x0, y0, vec[0], vec[0]);
    A3 = area(vec[2], vec[2], vec[1], 0, x0, y0);

    cout<<"Area Of Triangle: "<< A <<endl;
    cout<<"A = A1 + A2 + A3 = "<< A1 + A2 + A3<<endl;

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    int c = 100;

    circle(x0+c, y0+c, 2);

    line(vec[2]+c, vec[2]+c, vec[1]+c, 0+c);
    line(vec[1]+c, 0+c, vec[0]+c, vec[0]+c);
    line(vec[0]+c, vec[0]+c, vec[2]+c, vec[2]+c);

    if(A == (A1 + A2 + A3)){
        outtextxy(50, 250, "Given point lies 'INSIDE' the triangle.");
    }
    else{
        outtextxy(50, 250, "Given point lies 'OUTSIDE' the triangle.");
    }

    getch();
    closegraph();
    return 0;
}
