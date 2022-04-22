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
      string t = Console.ReadLine();
      foreach (char c in t)
      {
        if (c == '?') Console.Write('D');
        else Console.Write(c);
      }
      Console.WriteLine();
      return;
    }
  }
}
