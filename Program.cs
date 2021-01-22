using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Palindrome
{
    class Program
    {
        public void isPalindrome(string str)
        {
            str = str.ToLower();
            string rev = "";
            for(int i = str.Length-1; i>=0; i--)
            {
                rev += str[i].ToString();

            }
            if (rev == str)
                Console.WriteLine("Given string is a palindrome");
            else
                Console.WriteLine("Given string is not a palindrome");
        }
        static void Main(string[] args)
        {
            Program obj = new Program();
            Console.WriteLine("enter word or Phrase to check : ");
            string input = Console.ReadLine();
            obj.isPalindrome(input);
            Console.ReadLine();
        }
    }
}
