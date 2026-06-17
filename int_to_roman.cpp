#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string intToRoman(int num) {
        int last_dig = 0, multiplier = 1;
        string roman = "";
        string ones = "";
        string tens ="";
        string hundreds="";
        string thousands="";
        
        while (num > 0)
        {
            last_dig = (num % 10) * multiplier;
            switch (multiplier) {
                case (1):
                {
                    if (last_dig < 4)
                    {
                        for (int i = 0; i < last_dig; i++)
                        {
                            ones += 'I';
                        }
                    }
                    else if (last_dig == 4 || last_dig == 9)
                    {
                        switch (last_dig) {
                            case (4):
                            {
                                ones = "IV";
                                break;
                            }
                            case (9):
                            {
                                ones = "IX";
                                break;
                            }
                        } 
                    }
                    else
                    {
                        ones += 'V';
                        if (last_dig > 4)
                        {
                            for (int i = 0; i < last_dig - 5; i++)
                            {
                                ones += 'I';
                            }
                        }
                    }
                    break;
                }
                case 10:
                {
                    if (last_dig < 40)
                    {
                        for (int i = 0; i < (last_dig/multiplier); i++)
                        {
                            tens += 'X';
                        }
                    }
                    else if (last_dig == 40 || last_dig == 90)
                    {
                        switch (last_dig) {
                            case (40):
                            {
                                tens = "XL";
                                break;
                            }
                            case (90):
                            {
                                tens = "XC";
                                break;
                            }
                        } 
                    }
                    else
                    {
                        tens += 'L';
                        if (last_dig > 40)
                        {
                            for (int i = 0; i < (last_dig/multiplier) - 5; i++)
                            {
                                tens += 'X';
                            }
                        }
                    }
                    break;
                }
                case 100:
                {
                    if (last_dig < 400)
                    {
                        for (int i = 0; i < (last_dig/multiplier); i++)
                        {
                            hundreds += 'C';
                        }
                    }
                    else if (last_dig == 400 || last_dig == 900)
                    {
                        switch (last_dig) {
                            case (400):
                            {
                                hundreds = "CD";
                                break;
                            }
                            case (900):
                            {
                                hundreds = "CM";
                                break;
                            }
                        } 
                    }
                    else
                    {
                        hundreds += 'D';
                        if (last_dig > 400)
                        {
                            for (int i = 0; i < (last_dig/multiplier) - 5; i++)
                            {
                                hundreds += 'C';
                            }
                        }
                    }
                    break; 
                }
                case 1000:
                {
                    
                    if (last_dig < 4000)
                    {
                        for (int i = 0; i < (last_dig/multiplier); i++)
                        {
                            thousands += 'M';
                        }
                    }
                    else {cout<<"LIMIT REACHED";return roman="";}
                    break; 
                }
                default:
                    break;
            }
            num = num / 10;
            multiplier *= 10;
        }
        roman=thousands+ hundreds + tens + ones;
        return roman; 
    }
};

int main()
{
    Solution s;
    cout << s.intToRoman(49);
    return 0;
}