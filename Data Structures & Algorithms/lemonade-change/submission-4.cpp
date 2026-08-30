class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        if(bills[0]!=5)
        return false;
        int note_five=1,note_ten=0,note_twenty=0;
        for(int i=1;i<n;i++)
        {
            if(bills[i]==5)
            {
                note_five++;
            }
            else if(bills[i]==10)
            {
                if(note_five<=0)
                {
                    return false;
                }
                else
                {
                    note_ten++;
                    note_five--;
                }

            }
            else
            {
                if (note_ten > 0 && note_five > 0) {
                    note_ten--;
                    note_five--;
                } 
                else if (note_five >= 3) {
                    note_five -= 3;
                } 
                else {
                    return false;
                }

            }
        }
        return true;
          
    }
};