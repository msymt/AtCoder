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
      Console.WriteLine(RecFun("", n));
      return;
    }
    static string RecFun(string str, int n) {
      if(n <= 1)
        return "1";
      
      return RecFun(str, n - 1) + " " + n.ToString() + " " + RecFun(str, n - 1);
    }
  }
}
