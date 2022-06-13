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
      int[] d = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
      int[] j = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
      int sumV = 0;
      for(int idx = 0; idx < d.Length; idx++)
      {
        sumV += Math.Max(d[idx], j[idx]);
      }
      Console.WriteLine(sumV);
      return;
    }
  }
}
