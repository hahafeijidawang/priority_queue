#include <iostream>

#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

void main81(){

    priority_queue <int> p1;//Ĭ������� �����ֵ���ȼ����С�

    priority_queue<int,vector<int>,less<int> > p2;//��ǰ����õ�Ԥ���庯����

    priority_queue<int,vector<int>,greater<int> >p3;//��Сֵ���ȼ����С�

    p1.push(33);

    p1.push(55);

    p1.push(22);

    p1.push(11);

    cout<<"��ͷԪ�أ�"<<p1.top()<<endl;

    cout<<"���еĴ�С��"<<p1.size()<<endl;

    while(p1.size()>0){

        cout<<p1.top()<<" ";

        p1.pop();


    }

    cout<<"������Сֵ���ȼ�����"<<endl;

    p3.push(22);

    p3.push(11);

    p3.push(55);

    p3.push(77);


    cout<<"��ͷԪ�أ�"<<p3.top()<<endl;

    cout<<"���еĴ�С��"<<p3.size()<<endl;

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

