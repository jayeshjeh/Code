import java.util.*;

class Program
{
    public static void main(String arg[])
    {
        Marvellous mobj = new Marvellous();
        int iRet = 0;
        mobj.Accept();
        mobj.Display();
        iRet=mobj.CountCapital();
        System.out.println("Numbers of Capital characters are : "+iRet);
    }
}

class StringX
{
    public String str;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter String");
        str = sobj.nextLine();
    }
    public void Display()
    {
        System.out.println("String is : "+str);
    }
}
class Marvellous extends StringX
{
    public int CountCapital()
    {
        char Arr[] = str.toCharArray();
        int iCnt =0,i=0;
        while(i<Arr.length)
        {
            if((Arr[i]>='A')&&(Arr[i]<='Z'))
            {
                iCnt++;
            }
            i++;
        }
        return iCnt;
    }
}