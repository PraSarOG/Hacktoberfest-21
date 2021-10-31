using System;

namespace calculator
{
    class MainClass
    {

        public static int GetInt(int Input)
        {
            Input = Convert.ToInt32(Console.ReadLine());
            return Input;
        }


        public static void Main(string[] args)
        {

            int abcd = GetInt(5);

            int a, b, c, d, e, f;

            Console.Write("1st number: ");
            a = GetInt();

            Console.Write("2nd number: ");
            b = Convert.ToInt32(Console.ReadLine());

            c = a + b;
            d = a - b;
            e = a * b;
            f = a / b;

            Console.Write($"Sum: {c}\n Differnce: {d}\n Product: {e}\n Remainder: {f}");


        }

    }
}
