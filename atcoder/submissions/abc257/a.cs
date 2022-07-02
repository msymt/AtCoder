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
      List<char> list = new List<char>();
      string[] nx = Console.ReadLine().Split(' ');
      int n = int.Parse(nx[0]);
      int x = int.Parse(nx[1]);
      x -= 1;
      for(int i = 0; i < 26; i++)
      {
        for(int j = 0; j < n; j++)
        {
          list.Add((char)('A' + i));
        }
      }
      Console.WriteLine(list[x]);
      return;
    }
  }
}
