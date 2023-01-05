import java.util.*;

class Number
{

}

class Marvellous 
{
    public static void main (String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize =0, iValue=0,iCnt=0;
        boolean bRet = False;

        System.out.println("Enter number of elements :");
        iSize = sobj.nextInt();

        int arr[] = new int[iSize];

        System.out.println("Enter elements in array : ");
        for(iCnt =0;iCnt<arr.length;iCnt++)
        {
            arr[iCnt]= sobj.nextInt();
        }

    }
}
