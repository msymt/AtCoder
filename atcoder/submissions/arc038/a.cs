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
      string a = Console.ReadLine();
      int[] b = a.Split(' ').Select(x => int.Parse(x)).ToArray();
      Array.Sort(b);
      Array.Reverse(b);
      int ans = 0;
      for(int i = 0; i < b.Length; i++) {
        if(i % 2 == 0) ans += b[i];
      }
      Console.WriteLine(ans);
      return;
    }
  }
}
