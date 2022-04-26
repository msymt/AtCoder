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
      string s = Console.ReadLine();
      int[] a = s.Split(' ').Select(x => int.Parse(x)).ToArray();
      Array.Sort(a);
      int sum = 0;
      foreach (int i in a){
        if(i >= 80) {
          break;
        }
        sum += (80 - i);
      }
      Console.WriteLine(sum);
      return;
    }
  }
}
