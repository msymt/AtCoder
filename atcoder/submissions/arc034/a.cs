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
      double maxV = 0.0;
      for (int i = 0; i < n; i++)
      {
        int[] s = Console.ReadLine().Split().Select(int.Parse).ToArray();
        double sum = (double)(s.Sum() - s[s.Length - 1]) + (double)(s[s.Length - 1] * 11d / 90d);
        maxV = Math.Max(maxV, sum);
      }
      Console.WriteLine(maxV.ToString("G17"));
      return;
    }
  }
}
