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
      if(s.Length < ansSize)
      {
        Console.WriteLine("No");
        return;
      }
      string subS = s.Substring(0, ansSize);
      if(subS == ans)
      {
        Console.WriteLine("Yes");
        return;
      }
      Console.WriteLine("No");
      return;
    }
    const int ansSize = 4;
    const string ans = "YAKI";
  }
}
