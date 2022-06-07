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
      char[] c1 = Console.ReadLine().ToCharArray(); Array.Reverse(c1);
      char[] c2 = Console.ReadLine().ToCharArray(); Array.Reverse(c2);
      char[] c3 = Console.ReadLine().ToCharArray(); Array.Reverse(c3);
      char[] c4 = Console.ReadLine().ToCharArray(); Array.Reverse(c4);
      WriteCharArray(c4);
      WriteCharArray(c3);
      WriteCharArray(c2);
      WriteCharArray(c1);
      return;
    }
    static void WriteCharArray(char[] c)
    {
      foreach (var cc in c)
      {
        Console.Write(cc);
      }
      Console.WriteLine();
    }
  }
}
