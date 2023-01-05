import java.util.*;

class Program
{
    public static void main(String arg[])
    {
        Marvellous mobj = new Marvellous();
        boolean bRet;
        mobj.Accept();
        mobj.Display();
        bRet=mobj.CountVowelsl();
        if(bRet == true)
        {
            System.out.println("Vowels are Present");
        }
        else
        {
            System.out.println("Vowels are absent");
        }
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
        int iCnt =0,i=0,icnt=0,iDif=0;
        while(i<Arr.length)
        {
            if((Arr[i]=='a')||(Arr[i]=='e')||(Arr[i]=='i')||(Arr[i]=='o')||(Arr[i]=='u'))
            {
                iCnt++;
            }
            i++;
        }
        String newstr = new String(Arr);
        boolean bRet = newstr.equals(str);
        return bRet;

    }
}