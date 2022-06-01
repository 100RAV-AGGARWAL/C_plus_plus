class Solution
{
public:
    int numUniqueEmails(vector<string> &emails)
    {
        int count = 0;

        set<string> names, domains;

        for (auto i : emails)
        {
            int temp = 0, len = i.length();

            for (int j = 0; j < len; j++)
            {
                if (i[j] == '@')
                {
                    temp = j;
                    break;
                }
            }

            string name = i.substr(0, temp);
            string domain = i.substr(temp + 1);

            if (domains.find(domain) == domains.end())
            {
                domains.insert(domain);
                count++;

                string tempName;
                for (auto j : name)
                {
                    if (j != '.' && j != '+')
                        tempName += j;

                    if (j == '+')
                        break;
                }
                names.insert(tempName);
            }
            else
            {
                string tempName;
                for (auto j : name)
                {
                    if (j != '.' && j != '+')
                        tempName += j;

                    if (j == '+')
                        break;
                }

                if (names.find(tempName) == names.end())
                {
                    names.insert(tempName);
                    count++;
                }
            }
        }

        return count;
    }
};