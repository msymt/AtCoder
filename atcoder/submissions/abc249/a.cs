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
      int a = int.Parse(s[0]);
      int b = int.Parse(s[1]);
      int c = int.Parse(s[2]);
      int d = int.Parse(s[3]);
      int e = int.Parse(s[4]);
      int f = int.Parse(s[5]);
      int x = int.Parse(s[6]);
      int takahashi = Solve(a, b, c, x);
      int aoki = Solve(d, e, f, x);
      if(takahashi > aoki) {
        Console.WriteLine("Takahashi");
      } else if(takahashi < aoki) {
        Console.WriteLine("Aoki");
      } else {
        Console.WriteLine("Draw");
      }
      return;
    }

    static int Solve(int a, int b, int c, int x)
    {
      int q = x / (a + c);
      int r = x % (a + c);
      return (q * a + Math.Min(a, r)) * b;
    }
  }
}
