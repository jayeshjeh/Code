import java.util.*;
class Marvellous 
{
    public boolean CheckPrime(int iNo)
    {

    }
}

{    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter number");
        iValue = sobj.nextInt();

        Marvellous mobj = new Marvellous();
        bRet = mobj.CheckPrime(iValue);

        if(bRet == true)
        {
            System.out.println("It is Prime number");
        }
        else
        {
            System.out.println("It is not prime");
        }
    }
}