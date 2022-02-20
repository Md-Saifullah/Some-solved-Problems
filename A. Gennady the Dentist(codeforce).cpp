#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        vector<int> ab;
        long long of[5000],hall[5000],con[5000],i,sumHall,j;
        for(i=1; i<=n; i++)
        {
            cin>>of[i]>>hall[i]>>con[i];
        }
        for(i=1; i<=n; i++)
        {
            sumHall=0;
            if(con[i]>=0)
            {
                ab.push_back(i);
            }
            else
            {
                continue;
            }
            for(j=i+1; j<=n; j++)
            {
                if(con[j]<0)
                {
                    continue;
                }

                if(con[j]<sumHall+of[i])
                {
                    con[j]-=(sumHall+of[i]);
                    sumHall+=hall[j];
                }
                else
                {
                    con[j]-=(sumHall+of[i]);
                }

                if(of[i]>0)
                {
                    of[i]--;
                }

            }
        }
        cout<<ab.size()<<endl;
        for(int b:ab)
        {
            cout<<b<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/***
47
11 100 70
11 7 29
47 6 115
65 77 158
30 94 46
13 81 295
61 35 245
50 31 354
34 5 133
89 37 379
26 55 212
48 65 347
47 5 515
74 75 106
91 40 298
1 69 712
57 90 651
22 83 128
78 96 162
22 72 326
81 3 288
34 100 255
50 26 899
76 61 985
1 39 691
91 31 380
94 65 619
33 84 46
88 93 467
77 32 562
9 38 787
23 15 508
67 57 1564
35 29 518
79 13 1064
83 1 641
83 38 1372
76 1 574
47 88 615
83 17 755
81 2 1778
99 20 854
76 83 731
47 2 578
62 83 167
10 23 888
10 88 182*/

