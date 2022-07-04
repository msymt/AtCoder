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
      int k = int.Parse(Console.ReadLine());
      int h = 21 + (k / 60);
      int m = k % 60;
      Console.WriteLine($"{h}:{m:00}");
      return;
    }
  }
}
