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
      if(s[0] == s[2] && s[1] == s[3])
      {
        Console.WriteLine("Yes");
      }
      else
      {
        Console.WriteLine("No");
      }

      return;
    }
  }
}
