#include<stdio.h>
#include<stdlib.h>
#include<set>
#include<iostream>
#include<map>
#include<vector>
using namespace std;
//using namespace stdext;

vector<int> twoSum(vector<int> vs, int target)
{
    map<int,int> hm;
    vector<int> result;
    vector<int>::size_type i,j;
    for(i=0;i!=vs.size();i++)
        hm.insert(pair<int,int>(vs[i],i));
    for(i=0;i!=vs.size();i++)
    {
        map<int,int>::iterator iter=hm.find(target-vs[i]);
        if(iter!=hm.end()&&iter->second!=i)//不重复并且不为空
        {
            j=iter->second;
            if(i<j)
            {
                result.push_back(i+1);
                result.push_back(j+1);
            }
            else{
                result.push_back(j+1);
                result.push_back(i+1);
            }
        }
    }
    return result;
}
int main(void)
{
	int a[] = {150,24,79,50,88,345,3};
	vector<int> vs;
	for (int i = 0; i < sizeof(a)/sizeof(int); ++i)
	{
		vs.push_back(a[i]);
	}
	vector<int> ret = twoSum(vs, 200);
	cout << ret[0] << ' ' << ret[1] << endl;
	return 0;
}
