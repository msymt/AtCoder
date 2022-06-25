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
      Console.WriteLine(func(func(func(20.0))));
      return;
    }
    static double func(double n)
    {
      return (double)Math.Floor((n * n + 4.0) / 8.0);
    }
  }
}
