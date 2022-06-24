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
      string[] xy = Console.ReadLine().Split(' ');
      char[] x = xy[0].ToCharArray();
      char[] y = xy[1].ToCharArray();
      if(x[0] == 'S' && y[0] == 'H')
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
