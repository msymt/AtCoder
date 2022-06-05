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
      var dicSet = new HashSet<char>();
      var dicMap = new Dictionary<char, int>();
      // init
      foreach (var c in w)
      {
        dicMap[c] = 0;
      }
      foreach (var c in w)
      {
        dicMap[c] += 1;
      }
      foreach (var i in dicMap)
      {
        if (i.Value % 2 == 1)
        {
          Console.WriteLine("No");
          return;
        }
      }
      Console.WriteLine("Yes");
      return;
    }
  }
}
