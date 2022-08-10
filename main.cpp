#include<iostream>
#include<string>
#include<time.h>
#include<vector>
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

    vector<int> vec2;

    if(vec[0] >= vec[1] && vec[0] >= vec[2]){

        vec2.push_back(vec[0]);

        if(vec[1] >= vec[2]){
            vec2.push_back(vec[1]);
            vec2.push_back(vec[2]);
        }
        else if(vec[2] >= vec[1]){
            vec2.push_back(vec[2]);
            vec2.push_back(vec[1]);
        }
    }else if(vec[1] >= vec[0] && vec[1] >= vec[2]){

        vec2.push_back(vec[1]);

        if(vec[0] >= vec[2]){
            vec2.push_back(vec[0]);
            vec2.push_back(vec[2]);
        }
        else if(vec[2] >= vec[0]){
            vec2.push_back(vec[2]);
            vec2.push_back(vec[0]);
        }
    }else if(vec[2] >= vec[0] && vec[2] >= vec[1]){

        vec2.push_back(vec[2]);

        if(vec[1] >= vec[0]){
            vec2.push_back(vec[1]);
            vec2.push_back(vec[0]);
        }
        else if(vec[0] >= vec[1]){
            vec2.push_back(vec[0]);
            vec2.push_back(vec[1]);
        }
    }

    cout<<"Random Generated Values (ASC): "<<vec2[0]<<", "<<vec2[1]<<", "<<vec2[2]<<"\n";

    int no;
    cout<<"Enter any Number Between (1-100): ";
    cin>>no;

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    line(vec2[0], 50, vec2[2], 50);
    line(vec2[1], 100, vec2[0], 50);
    line(vec2[2], 50, vec2[1], 100);

    if(no <= 100 && no >= vec2[0]){
            line(vec2[0], no, 200, 75);
    }
    else if(no < vec2[0] && no >= vec2[2]){
            line(no, 75, 0, 75);
    }
    else if(no < vec2[2] && no >= 1){
            line(no+vec2[2], 50, no+vec2[2], 0);
    }

    getch();
    return 0;
}
