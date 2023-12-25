 #include<iostream>
 using namespace std;
 int main()
 {
    int a,b,k=1;
    bool underscore=true,digit=true;
    string s;
    cin>>a>>b>>s;
    for (int i = 0; i < a+b+1; i++)
    {
        if(i==a*k){
            if(s[i]!='-'){
                //cout<<s[i]<<"\n";
                underscore=false;
            }
        }else{
            if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9'){

            }else{
                digit=false;
            }
        }
    }
    if(underscore&&digit){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    
 } 