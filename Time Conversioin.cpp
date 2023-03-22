#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    if(s[8]=='A' && (s[0]=='1' && s[1]=='2'))
    {
        s[0]='0';
        s[1]='0';
        s.resize(s.size() - 2);
        
    }
    
    else if((s[8]=='A' && s[0]=='0') || (s[8]=='P' && s[0]=='1' && s[1]=='2') ) {
    
       s.resize(s.size() - 2);
     
    }
   
    else{
        s.resize(s.size() - 2);
        char b[3];
        b[0]=s[0];
        b[1]=s[1];
        b[2]='\0';
        string p;
        int num= atoi(b) + 12;
        p = to_string(num);
        s[0] = p[0];
        s[1] = p[1];
        
    }
    
 return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
