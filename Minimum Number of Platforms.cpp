#include<bits/stdc++.h>
int calculateMinPatforms(int at[], int dt[], int n)
{ 
    sort(at, at + n);
    sort(dt, dt + n);
    int cntt = 1, j = 1, i = 0;
    while (j < n)
    {
        if (at[j] > dt[i])
            i++;
        else
            cntt++;
        j++;
    }
    return cntt;
}