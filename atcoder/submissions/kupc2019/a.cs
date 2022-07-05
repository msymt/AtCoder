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
      int[] nx = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
      int[] array = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
      int n = nx[0];
      int x = nx[1];
      int maxV = array.Max();
      int ans = 0;
      foreach (int item in array)
      {
        if(maxV <= item + x)
        {
          ans++;
        }
      }
      Console.WriteLine(ans);
      return;
    }
  }
}
