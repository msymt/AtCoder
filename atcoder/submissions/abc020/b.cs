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
      string[] ab = Console.ReadLine().Split(' ');
      int a = int.Parse(ab[0]);
      int b = int.Parse(ab[1]);
      double bLen = (double)ab[1].Length;
      int c = a * (int)Math.Pow(10.0, bLen) + b;
      Console.WriteLine(c * 2);
      return;
    }
  }
}
