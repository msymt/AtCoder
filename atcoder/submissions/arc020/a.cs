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
      string[] s = Console.ReadLine().Split(' ');
      int a = Math.Abs(int.Parse(s[0]));
      int b = Math.Abs(int.Parse(s[1]));
      if(a > b)
      {
        Console.WriteLine("Bug");
      } else if(a < b)
      {
        Console.WriteLine("Ant");
      } else
      {
        Console.WriteLine("Draw");
      }
      return;
    }
  }
}
