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
      string[] hw = Console.ReadLine().Split(' ');
      string[] rc = Console.ReadLine().Split(' ');
      int h = int.Parse(hw[0]);
      int w = int.Parse(hw[1]);
      int r = int.Parse(rc[0]);
      int c = int.Parse(rc[1]);
      int res = 0;
      if(c != 1) res += 1;
      if(c != w) res += 1;
      if(r != 1) res += 1;
      if(r != h) res += 1;
      Console.WriteLine(res);
      return;
    }
  }
}
