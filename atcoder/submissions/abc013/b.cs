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
      int a = int.Parse(Console.ReadLine());
      int b = int.Parse(Console.ReadLine());
      Console.WriteLine(Math.Min(Math.Abs(a - b), 10 - Math.Abs(a - b)));
      return;
    }
  }
}
