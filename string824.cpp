#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;
string toGoatLatin(string S) {
        vector<string> s;
        string word = "aeiouAEIOU";
        string final="";
        string demo="";
        //cout<<"aaaaa";
        while(string::npos!=S.find(" ")){
            demo=S.substr(0,S.find(" "));
             cout<<demo<<endl;
            S = S.substr(S.find(" ")+1,-1);

            s.push_back(demo);


        }
        s.push_back(S);
        //cout<<s[3]<<endl;

        for(int i = 0; i<s.size();i++){
            if(word.find(s[i][0])!=string::npos){
                //s.erase(s[i][0],1);
                s[i].append("ma");

            }else{
               s[i].append(1,s[i][0]).append("ma");//�ȼ����ַ������Ƴ�
               cout<<s[i][0]<<endl;
               s[i].erase(0,1);//erase(i,j)��ʾ�Ƴ���i���ַ�


            }

            s[i].append(i+1,'a');
            final.append(s[i]).append(" ");

        }
        final.erase(final.size()-1,1);//ȥ����β�ո�

        return final;

    }
int main(){
    string  S = "I speak Goat Latin";
    //int m = S.find(" ");
   // cout<<m;
    //cout<<"sdfdf";
    string result = toGoatLatin(S);
   // cout<<"sdfdf";
    cout<<result;
    return 0;
}
