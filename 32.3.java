import java.util.*;

class Program145
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iLength =0, iRet= 0;

        System.out.println("Enter the number of elements");
        iLength=sobj.nextInt();   //used to accept interger .nextInt():

        Marvellous mobj = new Marvellous(iLength);
        mobj.Accept();
        mobj.Display();


    }
}

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);  //Input
        int iCnt =0;
        System.out.println("Enter elements");   // To Display
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        int iCnt=0;
        System.out.println("Elements are : ");
        for(iCnt =0;iCnt<Arr.length;iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}

class Marvellous extends ArrayX
{
    public Marvellous (int iValue)
    {
        super(iValue);
    }
    public void Display()
    {
        int iSum =0,iCnt=0;
        for(iCnt =0;iCnt<Arr.length;iCnt++)
        {
            if (((Arr[iCnt] % 5 ) == 0)&&(Arr[iCnt]%2)==0)
            {
                System.out.println("Number are "+Arr[iCnt]);
            }
        }

    }
}


