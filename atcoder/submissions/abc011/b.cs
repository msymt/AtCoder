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
      string s = Console.ReadLine();
      char[] c = s.ToCharArray();
      c[0] = char.ToUpper(c[0]);
      for(int i = 1; i < c.Length; i++)
      {
        c[i] = char.ToLower(c[i]);
      }
      Console.WriteLine(new string(c));
      return;
    }
  }
}
