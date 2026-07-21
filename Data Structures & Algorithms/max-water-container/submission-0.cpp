class Solution {
public:
    int maxArea(vector<int>& arr) {
        int i = 0;
        int j = arr.size()-1;

        int area = 0;
        while(i<j){
            int area_it = 0;
            area_it += (j-i)*min(arr[j],arr[i]);

            area = max(area,area_it);
            if(arr[j]>arr[i]) i++;
            else j--;
        }

        return area;
        
    }
};
