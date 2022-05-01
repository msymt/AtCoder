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
    const int mid = 4;
    static void Main()
    {
      string s = Console.ReadLine();
      Console.WriteLine(s.Substring(0, mid) + " " + s.Substring(mid));
      return;
    }
  }
}
