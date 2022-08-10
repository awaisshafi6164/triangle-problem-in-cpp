#include<iostream>
#include<string>
#include<time.h>
#include<vector>
#include <bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{

    cout<<"\tTriangle Problem\n\n";

    srand(time(0));

    vector<int> vec;

	vec.push_back((rand() % 100) + 1);
	vec.push_back((rand() % 100) + 1);
	vec.push_back((rand() % 100) + 1);

    cout<<"Random Generated Values: "<<vec[0]<<", "<<vec[1]<<", "<<vec[2]<<"\n";

    sort(vec.begin(), vec.end(), greater<int>());

    cout<<"Random Generated Values after sorting: "<<vec[0]<<", "<<vec[1]<<", "<<vec[2]<<"\n";

    int no;
    cout<<"Enter any Number Between (1-100): ";
    cin>>no;

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    line(vec[0], 0, vec[2], 0);
    line(vec[1], 100, vec[0], 0);
    line(vec[2], 0, vec[1], 100);

    if(no >= vec[0] && no <= 100){
            line(vec[0], no, 200, no);
            line(vec[0], no, vec[1], no);
    }
    else if(no >= vec[1] && no < vec[0]){
            line(vec[1], no, 0, no);
    }
    else if(no >= vec[2] && no < vec[1]){
            line(no, 50, no, 0);
    }else{
        cout<<"\n\nIt does not lie in triangle.\n";
    }

    getch();
    return 0;
}
