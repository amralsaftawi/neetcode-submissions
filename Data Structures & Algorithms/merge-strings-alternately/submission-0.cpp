class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str="";
        int ptr1=0,ptr2=0;

        while(ptr1<word1.size() && ptr2<word2.size())
        {
            str+=word1[ptr1];
            str+=word2[ptr2];
            ptr1++;
            ptr2++;
        }
        while(ptr1<word1.size())
        {
            str+=word1[ptr1];
            ptr1++;
        }
        while(ptr2<word2.size())
        {
            str+=word2[ptr2];
            ptr2++;
        }

        return str;
    }
};