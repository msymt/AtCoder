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
      if(s[0] == 'y' && s[1] == 'a' && s[2] == 'h')
      {
        if(s[3] == s[4])
        {
          Console.WriteLine("YES");
          return;
        }
      }
      Console.WriteLine("NO");
      return;
    }
  }
}
