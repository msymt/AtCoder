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
      int n = int.Parse(Console.ReadLine());
      int[] l = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
      Array.Sort(l);
      int ans = 0;
      for(int i = 0; i < n * 2; i += 2)
      {
        ans += Math.Min(l[i], l[i + 1]);
      }
      Console.WriteLine(ans);
      return;
    }
  }
}
