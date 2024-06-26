import java.util.*;
import java.lang.*;
import java.io.*;
class Find_median
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while(T-->0)
        {
            int n = Integer.parseInt(br.readLine().trim());
            String s = br.readLine();
            String[] S = s.split(" ");
            int[] v  = new int[n];
            for(int  i = 0; i < n; i++)
                v[i] = Integer.parseInt(S[i]);
            Solution ob = new Solution();
            int ans = ob.find_median(v);
            System.out.println(ans);
        }
    }
}


class Solution
{
    public int find_median(int[] v)
    {
        int n=v.length;
        Arrays.sort(v);//initially sorting the given array
        if(n%2==0){
            return (v[(n/2)-1]+v[n/2])/2;//if the length of array is even then return the average of the middle two elements
        }
        return v[n/2];//else return the middle element
        
    }
}
