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
      char[] w = Console.ReadLine().ToCharArray();
      foreach (char c in w)
      {
        if(!(c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o'))
        {
          Console.Write(c);
        }
      }
      Console.WriteLine();
      return;
    }
  }
}
