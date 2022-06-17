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

      int[] rc = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
      int[] a1 = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
      int[] a2 = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
      int r = rc[0];
      int c = rc[1];
      if(r == 1)
      {
        if(c == 1)
        {
          Console.WriteLine(a1[0]);
        }
        else
        {
          Console.WriteLine(a1[1]);
        }
      }
      else
      {
        if(c == 1)
        {
          Console.WriteLine(a2[0]);
        }
        else
        {
          Console.WriteLine(a2[1]);
        }
      }
      return;
    }
  }
}
