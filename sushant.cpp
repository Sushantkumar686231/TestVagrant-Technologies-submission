#include<bits/stdc++.h>
using namespace std;

class price
{
    private:
        string n;
        float d[7];
        float sum;

    public:
        price() 
        {
            cin >> n;
            int s=0;
            for(int i=0;i<7;i++) 
            {
                float a;
                cin>>a;
                s+=a;
                d[i]=a;
            }
            sum=s;
        }
        string ret_n() 
        {
            return n;
        }
        float ssum() 
        {
            return sum;
        }
        float ret_day_amount(int day) 
        {
            return d[day];
        }
};

void solve(price d[],int papers, int limit){
    for(int i=0;i<papers-1;i++) 
    {
        for(int j=i+1;j<papers;j++) 
        {
            if (d[i].ssum()+d[j].ssum()<=limit) 
            {
                cout<<"{"<<d[i].ret_n()<<","<<d[j].ret_n()<<"}";
            }
        }
    }
    cout<<endl;
}


int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    int total_price,total_cases;
    cin>>total_price;
    price d[total_price];
    cin>>total_cases;
    while(total_cases--) 
    {
        float budget;
        cin>>budget;
        solve(d,total_price,budget);
    }
    return 0;
}