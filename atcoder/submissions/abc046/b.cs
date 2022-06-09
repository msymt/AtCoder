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
      string[] input = Console.ReadLine().Split(' ');
      int n = int.Parse(input[0]);
      int k = int.Parse(input[1]);
      double ans = k * Math.Pow(k - 1, n - 1);
      Console.WriteLine(ans);
      return;
    }
  }
}
