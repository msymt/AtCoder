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
      if(n < 2)
      {
        Console.WriteLine(1);
      }
      else
      {
        int[] x = new int[n + 1];
        x[0] = 1; x[1] = 1;
        for(int i = 2; i <= n; i++)
        {
          x[i] = x[i - 1] + x[i - 2];
        }
        Console.WriteLine(x[n]);
      }
      return;
    }
  }
}
