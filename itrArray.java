import java.util.Scanner;
import java.io.*;
class itrArray
{
    public static void main(String []args)
    {
        String []fruits= {"Apple","Banana","Orange"};
        int i =0;
        while (true)
        {
            try
            {
            System.out.println(fruits[i]);
            i++;
            }
            catch(ArrayIndexOutOfBoundsException e)
            {
                break;
            }
        }
    }
}