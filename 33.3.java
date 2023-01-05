import java.util.*;
class Program140
{
    public static void main(String str[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo1=0, iNo2=0, iAns =0;

        System.out.println("Enter Number");
        iNo1= sobj.nextInt();

        Marvellous mobj = new Marvellous();

        iAns = mobj.Addition(iNo1);

        System.out.println("Count is : "+iAns);
    }
}
class Marvellous
{
    public int Addition(int iNo)
    {
        int iDigit=0,iCnt=0;
        if(iNo<0)
        {
            iNo =-iNo;
        }

        while(iNo>0)
        {
            iDigit=iNo%10;
            if(iDigit>3 && iDigit<7)
            {
                iCnt++;
            }
            iNo= iNo/10;
        }
        return iCnt;
    }
}
