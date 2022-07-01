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
      string[] n = Console.ReadLine().Split(' ');
      int a = int.Parse(n[0]);
      int b = int.Parse(n[1]);
      Console.WriteLine(a * b * b);
      return;
    }
  }
}
