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
      int[] s = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
      int a = s[0];
      int b = s[1];
      int c = s[2];
      float ans = (float)(b * c) / (float)a;
      Console.WriteLine(ans);
      return;
    }
  }
}
