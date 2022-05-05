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
      int a = int.Parse(s[0]);
      int b = int.Parse(s[1]);
      int c = int.Parse(s[2]);
      for(int i = 1; i <= 127; i++)
      {
        if(i % 3 == a && i % 5 == b && i % 7 == c)
        {
          Console.WriteLine(i);
        }
      }
      return;
    }
  }
}
