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
      string s = Console.ReadLine();
      bool isC = false;
      foreach (char c in s)
      {
        if(c == 'C')
        {
          isC = true;
        }
        if(c == 'F' && isC)
        {
          Console.WriteLine("Yes");
          return;
        }
      }
      Console.WriteLine("No");
      return;
    }
  }
}
