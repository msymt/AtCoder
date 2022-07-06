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
      int[] ab = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
      int a = ab[0];
      int b = ab[1];
      if(a+1 - b >= 0)
      {
        Console.WriteLine(1);
      }
      else
      {
        Console.WriteLine(0);
      }
      return;
    }
  }
}
