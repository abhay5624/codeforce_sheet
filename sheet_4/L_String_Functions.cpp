 #include<iostream>
 using namespace std;

 int main(){
 string str;
 int n,q;
 cin>>n>>q;
 cin>>str;
    for (int j = 0; j < q; j++)
    {
        string query;
        cin>>query;
        if(query=="substr"){
            int a,b;
            cin>>a>>b;
            for (int i = a-1; i <= b-1; i++)
            {
                cout<<str[i];
            }
            cout<<endl;
        }else if(query=="sort"){
            int a,b;
            cin>>a>>b;
            for (int i = a-1; i < b; i++)
            {
                for (int j = a-1; j < b-1; j++)
                {
                    if(str[j]>str[j+1]){
                        swap(str[j],str[j+1]);
                    }
                }
            }
        }else if(query=="pop_back"){
            int lenth= str.length();
            n=lenth-1;
            str[lenth-1]='\0';
        }else if(query=="back"){
            cout<<str[n-1]<<endl;
        }else if(query=="reverse"){
            int a,b;
            cin>>a>>b;
            for(int i = 0; i <= (b-a)/2; i++)
            {
                swap(str[a+i-1],str[b-i-1]);             
            }            
        }else if(query=="front"){
            cout<<str[0]<<endl;
        }else if(query=="push_back"){
            char ch;
            cin>>ch;
            str=str+ch;
            n=n+1;
        }else if(query=="print"){
            int k;
            cin>>k;
            cout<<str[k]<<endl;
        }
    }
 }
 