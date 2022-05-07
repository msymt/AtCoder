using System.Security.Cryptography;
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
      string[] s = Console.ReadLine().Split(' ');
      int n = int.Parse(s[0]);
      int k = int.Parse(s[1]);
      if(k * 2 - 1 <= n)
      {
        Console.WriteLine("YES");
      }
      else
      {
        Console.WriteLine("NO");
      }
      return;
    }
  }
}
