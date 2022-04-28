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
      int h = int.Parse(s[0]);
      int m = int.Parse(s[1]);
      int hDiff = 18 - 1 - h;
      int mDiff = 60 - m;
      Console.WriteLine(hDiff * 60 + mDiff);
      return;
    }
  }
}
