/*
You are given a string s representing an attendance record for a student where each character signifies whether the student was absent, late, or present on that day.
The record only contains the following three characters:

'A': Absent.
'L': Late.
'P': Present.
The student is eligible for an attendance award if they meet both of the following criteria:

The student was absent ('A') for strictly fewer than 2 days total.
The student was never late ('L') for 3 or more consecutive days.
Return true if the student is eligible for an attendance award, or false otherwise.

Input: s = "PPALLP"
Output: true
Explanation: The student has fewer than 2 absences and was never late 3 or more consecutive days.

*/

class Solution {
public:
    bool checkRecord(string s) {
        int ca = 0;
        string cl = "LLL";
        int cli = 0;
        int find = s.find(cl);
        for(int i=0; i<s.size(); i++) {
            if(s[i] == 'A')
                ca++;
            if(find != string::npos)
                cli = 1;
        }
        
        if(ca<2 && cli==0) {
            return true;
        }else
            return false;
    }
};
