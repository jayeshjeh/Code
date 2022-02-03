import java.util.*;

class Program262
{
    public static void main(String str[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows");
        int rows = sobj.nextInt();

        System.out.println("Enter number of columns");
        int columns = sobj.nextint();

        int Arr[][] = new int [rows][colums];

        System.out.pritln("Please enter the elements ");

        for(i = 0; i <Arr.length; i++)
        {
            for(j=0; j< Arr[i].length; j++)
            {
                Arr[i][j]= sobj.nextInt();
            }
        }

        System.out.println("Entered elements are : ");

        for(i=0; i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length; j++)
            {

            }
        }
    }
}