import java.io.*;
import java.util.*;

class Sum_of_series {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t;
        t = Integer.parseInt(br.readLine());
        while(t-- > 0){
            
            int n;
            n = Integer.parseInt(br.readLine());
            
            Solution obj = new Solution();
            long res = obj.seriesSum(n);
            
            System.out.println(res);
            
        }
    }
}


class Solution {
    public static long seriesSum(int n) {
        return ((long)n)*((long)(n+1))/2 ;//type casting integer to long to handle large values
    }
}
