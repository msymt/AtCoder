using System;
using System.Buffers.Text;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Numerics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;

namespace AtCoder
{
  class Program
  {
    static void Main()
    {
      // int n = int.Parse(Console.ReadLine());
      // double ans = (double)(n * 9d / 5d) + 32d;
      // Console.WriteLine(ans);
      char[] s = Console.ReadLine().ToCharArray();
      foreach (char c in s)
      {
        switch (c)
        {

          case 'O':
            Console.Write("0");
            break;
          case 'D':
            Console.Write("0");
            break;
          case 'I':
            Console.Write("1");
            break;
          case 'Z':
            Console.Write("2");
            break;
          case 'S':
            Console.Write("5");
            break;
          case 'B':
            Console.Write("8");
            break;
          default:
            Console.Write(c);
            break;
        }
      }
      Console.WriteLine("");
      return;
    }
  }
}
