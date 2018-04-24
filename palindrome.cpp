class Solution {
public:
	bool isPalindrome(string s) {
		int n = s.size();
		int i = 0, j = n - 1;
		
		for (int i = 0; i < n; i++)
		{
			if (s[i] >= 'A'&&s[i] <= 'Z')
				s[i] = s[i] - 'A' + 'a';
		}

		while (i<j)
		{
			if ((s[i]<'a' || s[i]>'z') && (s[i]<'0' || s[i]>'9'))
			{
				i++;
				continue;
			}
				
			if ((s[j]<'a' || s[j]>'z') && (s[j]<'0' || s[j]>'9'))
			{
				j--;
				continue;
			}

			if (s[i] == s[j])
			{
				i++;
				j--;
			}
			else
			{
				return false;
			}
		}

		return true;
	}
};
