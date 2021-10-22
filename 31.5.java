import java.util.*;

class Program154
{
    public static void main(String arg[])
    {
        Marvellous mobj = new Marvellous();
        mobj.Accept();
        mobj.Display();
        String s = mobj.ReverseX();
        System.out.println("Reverse string is : "+s);
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
    public String ReverseX()
    {
       char Arr[] = str.to

    }
}