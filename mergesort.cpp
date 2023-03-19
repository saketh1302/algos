
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int md, int e)
{

    int i = s;
    int mid=(s+e)/2;
    int j = mid + 1;
    vector<int> temp;
    while (i <= mid && j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }

        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= e)
    {
        temp.push_back(arr[j]);
        j++;
    }
    int o = 0;
    for (int u = s; u <= e; u++)
    {
        arr[u] = temp[o++];
    }

    return;
}
void mergesort(int arr[], int s, int e)
{

    if (s >= e)
        return;

    int mid = (s + e) / 2;
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);

    merge(arr, s, mid, e);
    // cout<<"l";
    return;
}
int main()
{

    int arr[] = {2, 1, 4, 7, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergesort(arr, 0, 6);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
