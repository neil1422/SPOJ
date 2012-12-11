/*  Problem - LAWNMWR
    Author -  Nilendu Das
    Spoj_id - nilendu_das 
    I don't care how you use the code. But I wish you use it for development of your problem solving skills, 
    not increasing your points in SPOJ. At the end of the day your skill matters, not points.
*/



#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <list>

#define fr(a, b, c) for(int a = b; a <= c; a++)
#define mst(a, b) memset(a, b, sizeof(a));
#define SI(a) scanf("%d", &a);
#define SS(a) scanf("%s", a);
#define SC(a) scanf("%c", &a);
using namespace std;
inline bool comp(const int &a, const int &b)
{
    return true;//(a.val==b.val)? a.i < b.i : a.val < b.val;
}

int main()
{

    int num_w, num_l, flag;
    double width[1005], length[1002], w, start;
    while(1){
        start = 0.0;
        flag = 1;
        scanf("%d %d %lf", &num_w, &num_l, &w);
        if(num_l == 0 && num_w == 0 && w == 0.0)
            break;
        fr(i, 1, num_w)
            scanf("%lf", width +i);
        fr(i, 1, num_l)
            scanf("%lf", length + i);
        sort(width, width + num_w + 1);
        sort(length, length + num_l + 1);
        w /= 2.0;
        int i = 1;
        //cout <<"Input complete\n";
        while(1){
            //i = 1;
            //cout << i << " ";
            if(start + w >= width[i]){
                start = width[i] + w;
                i++;
                //cout << "Inside start\n";
            }
            else{
                flag = 0;
                break;
            }
            //cout << start << " ";
            //cin >> length[200];
            if(start >= 75.0)
                break;
            if(i > num_w){
                flag = 0;
                break;
            }
        }
        start = 0, i = 1;
        //cout << flag << " haha ";
        while(1){
            //i = 1;
            if(start + w >= length[i]){
                start = length[i] + w;
                i++;
            }
            else{
                flag = 0;
                break;
            }
            if(start >= 100.0)
                break;
            if(i > num_l)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
            cout <<"YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

