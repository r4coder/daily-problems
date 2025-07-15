class Solution {
public:
    bool isValid(string word) {
        string  s;
        s=word;
        int n=s.size();
        int i;
        int v=0;
        int c=0;
        int k=0;
      

        for(i=0;i<n;i++)
        {
            if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]>='0'&&s[i]<='9')
            {
                 if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                 {
                          v++;
                 }
                 else if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
                 {
                    c++;
                 }
            }

            else
            {
                    k=2;
                    break;
            }


           
        }


       return c>=1&&v>=1&&s.size()>=3&&k!=2;
    
    }
    
};