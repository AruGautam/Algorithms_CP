import java.util.*;
public class QuickSortRandom 
{
     
     public static void Random(int arr[],int l,int h)
     {
    	 Random r = new Random();
    	 int rand = r.nextInt(h-l)+l;
    	 int temp=arr[rand];
    	 arr[rand]=arr[h];
    	 arr[h]=temp;
     }
     public static int partition(int arr[],int l,int h)
     {
    	 Random(arr,l,h);
    	 int pivot = arr[h];
    	 int i=l-1;
    	 for(int j=l;j<h;j++)
    	 {
    		 if(arr[j]<pivot)
    		 {
    		 i++;
    		 int t = arr[i];
    		 arr[i]=arr[j];
    		 arr[j]=t;
    		 }
    	 }
    	 i++;
    	 int c= pivot;
    	 pivot=arr[i];
    	 arr[i]=c;
    	 return i;
     }
     public static void quicksort(int arr[],int l,int h)
     {
    	 if(l<h)
    	 {
    	 int pivot = partition(arr,l,h);
    	 
    	 quicksort(arr,l,pivot-1);
    	 quicksort(arr,pivot+1,h);
    	 }
     }
     public static void main(String[]args)
     {
    	 
    	 int arr[]= {8,1,3,2,9,6};
    	 int n = arr.length;
    	 quicksort(arr,0,n-1);
    	 System.out.println("the sorted array is:");
    	 for(int i=0;i<arr.length;i++)
    	 {
    		 System.out.println(arr[i]);
    	 }
     }
}
