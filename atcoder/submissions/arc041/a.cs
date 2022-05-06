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
    const string ans = "HAGIYA";
    const int start = 4;
    static void Main()
    {
      string[] s = Console.ReadLine().Split(' ');
      int k = int.Parse(Console.ReadLine());
      int x = int.Parse(s[0]);
      int y = int.Parse(s[1]);
      int ans = 0;
      if(y >= k)
      {
        ans = x + k;
      }
      else
      {
        ans = y + x - (k - y);
      }
      Console.WriteLine(ans);
      return;
    }
  }
}
