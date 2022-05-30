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
      string[] s = Console.ReadLine().Split(' ');
      int[] sorted = s.Select(int.Parse).OrderBy(x => x).ToArray();
      if(sorted[1] == int.Parse(s[1]))
      {
        Console.WriteLine("Yes");
      }
      else
      {
        Console.WriteLine("No");
      }
      return;
    }
  }
}
