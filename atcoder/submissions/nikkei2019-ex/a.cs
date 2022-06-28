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
      char[] s = Console.ReadLine().ToCharArray();
      for(int index = 0; index < s.Length; index++)
      {
        Console.WriteLine(index + 1);
      }
      return;
    }
  }
}
