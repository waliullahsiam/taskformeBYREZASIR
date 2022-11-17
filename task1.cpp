//soft drinking (1)
// #include<bits/stdc++.h>

// using namespace std;

// int main(){

//     int n,k,l,c,d,p,nl,np;

//     cin>>n>>k>>l>>c>>d>>p>>nl>>np;

//     int res1=(k*l)/nl;

//     int res2=c*d;
//     int res3=p/np;

//     int val=res1<res2?res1:res2;
//     int val2=val<res3?val:res3;


//      cout<<val2/n<<endl;
//     return 0;

// }

//Increasing(2)
// #include<bits/stdc++.h>
// using namespace std;
 
// void solve()
// {
//    int n;
//    cin>>n;
//    int arr[n];
//    map<int,int>count;
 
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr[i];
//        count[arr[i]]++;
 
//    }
 
//    for(int i=0;i<n;i++)
//    {
//        if(count[arr[i]]>=2)
//        {
//            cout<<"NO\n";
//            return;
//        }
 
//    }
 
//    cout<<"YES\n";
 
 
 
 
 
 
// }
// int main()
// {
//     int t;cin>>t;
 
//     while(t--)
//     {
//         solve();
//     }
// }



//indirect sort(3)
// #include<bits/stdc++.h>
// using namespace std;
 
// void solve()
// {
//    int n;
//    cin>>n;
//    int arr[n];
//    map<int,int>count;
 
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr[i];
//        count[arr[i]]++;
 
//    }
 
//    for(int i=0;i<n;i++)
//    {
//        if(count[arr[i]]>=2)
//        {
//            cout<<"NO\n";
//            return;
//        }
 
//    }
 
//    cout<<"YES\n";
 
 
 
 
 
 
// }
// int main()
// {
//     int t;cin>>t;
 
//     while(t--)
//     {
//         solve();
//     }
// }


//two groups(4)

// #include<bits/stdc++.h>
// using namespace std;
// void solve()
// {
 
//      long long int n;
//     cin>>n;
//     long long int arr[n];
//     long long int sum=0;
 
//     for(int i=0;i<n;i++)
//     {
 
//         cin>>arr[i];
//         sum+=arr[i];
//     }
//     cout<<abs(sum)<<endl;
// }
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         solve();
//     }
 
 
// }


//factorial divisibility(5)

// #include<bits/stdc++.h>
// using namespace std;
// void solve()
// {
 
//      long long int n;
//     cin>>n;
//     long long int arr[n];
//     long long int sum=0;
 
//     for(int i=0;i<n;i++)
//     {
 
//         cin>>arr[i];
//         sum+=arr[i];
//     }
//     cout<<abs(sum)<<endl;
// }
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         solve();
//     }
 
 
// }

//accumulation of dominoes(6)

// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;
 
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
 
//     ll n, m;
 
//     cin >> n >> m;
//     if (m > 1)
//     {
//         cout << n * (m - 1);
//     }
 
//     else
 
//     {
//         cout << n - 1;
//     }
//     return 0;
// }


// Cowardly Rooks(7)

// #include <bits/stdc++.h>
 
// using namespace std;
 
// void solve()
// {
//    int n,m;
//    cin>>n>>m;
//    for(int i=1;i<=m;i++)
//    {
//        int x,y;
//        cin>>x>>y;
//    }
 
//    if(m<n)
//    {
//        cout<<"YES\n";
//    }
 
//    else
//    {
//        cout<<"NO\n";
//    }
// }
 
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
 
 
 
//     int t;
//     cin>>t;
 
//     while(t--)
//     {
//         solve();
//     }
 
 

 //min_max swap(8)

//  #include<bits/stdc++.h>
// using namespace std;
 
// void solve()
// {
 
//     int n;
//     cin>>n;
//     int arr[n],arr2[n];
 
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
 
//     for(int j=0;j<n;j++)
//     {
 
 
//         cin>>arr2[j];
//     }
 
 
 
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]<arr2[i])
//         {
//             swap(arr[i],arr2[i]);
//         }
 
//     }
 
//     int val=*max_element(arr,arr+n);
 
//     int val2=*max_element(arr2,arr2+n);
 
//     cout<<val*val2<<endl;
 
 
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
 
//     int t;
//     cin>>t;
//     while(t--)
//     {
 
//         solve();
//     }
// }
 
 
 
 
 
 
//     return 0;
// }