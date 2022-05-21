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
      int n = int.Parse(Console.ReadLine());
      string[] a = Console.ReadLine().Split(' ');
      Double SumVal = 0.0;
      int bugCount = 0;
      foreach (var c in a)
      {
        int e = int.Parse(c);
        SumVal += e;
        if(e > 0)
        {
          bugCount++;
        }
      }
      Console.WriteLine(Math.Ceiling(SumVal / bugCount));
      return;
    }
  }
}
