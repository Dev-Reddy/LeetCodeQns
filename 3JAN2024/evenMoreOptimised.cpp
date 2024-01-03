class Solution {
public:
    int numberOfBeams(vector<string>& bank) 
    {     
        int beams = 0;
        int device = 0;
        int prev = 0;

        for(string& row: bank)
        {
            device = 0;
            for(char c: row)
            {
                if(c == '1')
                    device++;
            }

            if(device > 0)
            {
                beams += device * prev;
                prev = device;
            }
        }

        return beams;
    }
};