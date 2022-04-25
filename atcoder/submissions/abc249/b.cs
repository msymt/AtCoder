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
      char[] c2 = c.Distinct().ToArray();
      if(c.Length != c2.Length) {
        Console.WriteLine("No");
        return;
      }
      if(s.ToLower() == s || s.ToUpper() == s) {
        Console.WriteLine("No");
        return;
      }
      Console.WriteLine("Yes");
      return;
    }
  }
}
