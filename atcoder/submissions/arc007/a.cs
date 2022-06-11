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
      char x = Console.ReadLine().ToCharArray()[0];
      string s = Console.ReadLine();
      foreach (var c in s)
      {
        if(c != x)
        {
          Console.Write(c);
        }
      }
      Console.WriteLine("");
      return;
    }
  }
}
