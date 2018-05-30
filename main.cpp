#include <iostream>

#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

void main81(){

    priority_queue <int> p1;//默认情况下 是最大值优先级队列。

    priority_queue<int,vector<int>,less<int> > p2;//提前定义好的预定义函数。

    priority_queue<int,vector<int>,greater<int> >p3;//最小值优先级数列。

    p1.push(33);

    p1.push(55);

    p1.push(22);

    p1.push(11);

    cout<<"队头元素："<<p1.top()<<endl;

    cout<<"队列的大小："<<p1.size()<<endl;

    while(p1.size()>0){

        cout<<p1.top()<<" ";

        p1.pop();


    }

    cout<<"测试最小值优先级队列"<<endl;

    p3.push(22);

    p3.push(11);

    p3.push(55);

    p3.push(77);


    cout<<"队头元素："<<p3.top()<<endl;

    cout<<"队列的大小："<<p3.size()<<endl;

    while(p3.size()>0){


        cout<<p3.top()<<" ";

        p3.pop();


    }



}


int main()
{
    main81();
    return 0;
}

