class Solution {
public:
    int findSpecialInteger(vector<int>& arr)
    {
       
        int count= 1;
        if(arr.size()==1){
            return arr[0];
        }
        else{

            for (int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]==arr[i+1]){
                count++;
                if(count>arr.size()/4)
                    return arr[i];
            }

            else{
                count = 1;
            }
        }
        }
        return -1;
    }
};
