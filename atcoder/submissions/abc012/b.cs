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
      var n = int.Parse(Console.ReadLine());
      int h = n / 3600;
      n = n % 3600;
      int m = n / 60;
      n = n % 60;
      int s = n;
      Console.WriteLine($"{h:00}:{m:00}:{s:00}");
      return;
    }
  }
}
