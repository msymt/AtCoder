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
      int[] hw = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
      int h = hw[0];
      int w = hw[1];
      for(int idx = 0; idx < h; idx++)
      {
        var s = Console.ReadLine();
        Console.WriteLine(s);
        Console.WriteLine(s);
      }
      return;
    }
  }
}
