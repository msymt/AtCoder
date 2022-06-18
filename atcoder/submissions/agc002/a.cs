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
      long[] input = Console.ReadLine().Split(' ').Select(long.Parse).ToArray();
      long a = input[0];
      long b = input[1];
      if(a > 0)
      {
        Console.WriteLine("Positive");
      }
      else
      {
        if(b >= 0)
        {
          Console.WriteLine("Zero");
        }
        else
        {
          if((b - a) % 2 == 0)
          {
            Console.WriteLine("Negative");
          }
          else
          {
            Console.WriteLine("Positive");
          }
        }
      }
      return;
    }
  }
}
