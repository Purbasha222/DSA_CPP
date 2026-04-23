#include <bits/stdc++.h>
using namespace std;

int main(){
    // P-1
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // P-2
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // P-3
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // P-4
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    // P-5
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=5-i+1;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // P-6
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=5-i+1;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // P-7
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5-i;j++){
    //         cout<<" ";
    //     }

    //     for(int j=0;j<2*i+1;j++){
    //         cout<<"*";
    //     }

    //     for(int j=0;j<5-i;j++){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // P-8
    // int n=5;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }

    //     for(int j=0;j<2*n-(2*i+1);j++){
    //         cout<<"*";
    //     }

    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }


    // P-10
    // int n=5;

    // for(int i=1;i<=2*n-1;i++){
    //     int stars=i;
    //     if(i>n)stars=2*n-i;
    //     for(int j=1;j<=stars;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // P-11
    // int n=5;
    // int start=1;
    // for(int i=0;i<n;i++){
    //     if(i%2==0) start=1;
    //     else start=0;
    //     for(int j=0;j<=i;j++){
    //         cout<<start<<" ";
    //         start=1-start;
    //     }
    //     cout<<endl;
    // }

    // P-12
    // int n=4;
    // int space=2*(n-1);
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<j;
    //     }

    //     for(int j=1;j<=space;j++){
    //         cout<<" ";
    //     }

    //      for(int j=i;j>=1;j--){
    //         cout<<j;
    //     }
    //     cout<<endl;
    //     space-=2;
    // }

    // P-13
    // int n=5;
    // int count=1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }

    // P-14
    // int n=5;
    // for(int i=0;i<n;i++){
    //     for(char ch='A';ch<='A'+i;ch++){
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }

    // P-15
    // int n=5;
    // char ch='A';
    // for(int i=0;i<n;i++){
    //     for(char ch='A';ch<='A'+(n-i-1);ch++){
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }

    // P-16
    // int n=5;
    // char ch='A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<ch<<" ";
    //     }
    //     ch++;
    //     cout<<endl;
    // }

    // P-17
    int n=5;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        char ch='A';
        int breakpoint=(2*i+1)/2;

        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint)ch++;
            else ch--;
        }

        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}