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
      char[] ca = s.ToCharArray();
      int a = 0;
      int b = 0;
      int c = 0;
      int d = 0;
      int e = 0;
      int f = 0;
      foreach (char v in ca)
      {
        if(v == 'A')
        {
          a++;
        }
        else if(v == 'B')
        {
          b++;
        }
        else if(v == 'C')
        {
          c++;
        }
        else if(v == 'D')
        {
          d++;
        }
        else if(v == 'E')
        {
          e++;
        }
        else if(v == 'F')
        {
          f++;
        }
      }
      Console.WriteLine(a + " " + b + " " + c + " " + d + " " + e + " " + f);
      return;
    }
  }
}
