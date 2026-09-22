class Solution {
public:
    bool isPalindrome(string s) {
        int left=0,right=s.size()-1;

        while(left<=right)
        {
            if(isalnum(s[left]) && isalnum(s[right]))
            {
                if(tolower(s[left]) == tolower(s[right]))
                {
                    left++;
                    right--;
 
                }
                else
                {
                    return false;
                }

            }
            else if(!isalnum(s[left]))
            {
                  left++;
            }
            else
            {
                right--;
            }

        }
        return true;
    }
};
