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
      int y = int.Parse(Console.ReadLine());
      if(y % 400 == 0)
      {
        Console.WriteLine("YES");
      }
      else if(y % 100 == 0)
      {
        Console.WriteLine("NO");
      }
      else if(y % 4 == 0)
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
