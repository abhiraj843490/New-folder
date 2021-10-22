
public class Program11_Matrix {
    public static void main(String[] args){
        int[][]arr=new int[6][6];
        for(int i=0;i<arr.length-1;i++){
            int cnt=0;
            for(int j=0;j<arr[i].length-1;j++){
                arr[i][j]=(int)(Math.random()*2);
                cnt+=arr[i][j];
            }
            if(cnt%2==0){
                arr[i][arr[i].length-1]=1;
            }
        }
        for(int j=0;j<6;j++){
            int cnt=0;
            for(int i=0;i<6;i++){
                cnt+=arr[i][j];
            }
            if(cnt%2==0){
                arr[arr.length-1][j]=1;
            }
        }
        printArray(arr);
    }
    public static void printArray(int[][] arr){
        for(int i=0;i<arr.length;i++){
            for(int j=0;j<arr[i].length;j++){
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
    }
}
