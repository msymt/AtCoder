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
      string[] n = Console.ReadLine().Split(' ');
      string s = n[0];
      string t = n[1];
      string u = n[2];
      if(s.Length == 5 && t.Length == 7 && u.Length == 5)
      {
        Console.WriteLine("valid");
      }
      else
      {
        Console.WriteLine("invalid");
      }
      return;
    }
  }
}
