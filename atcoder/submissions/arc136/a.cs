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
      char[] s = Console.ReadLine().ToCharArray();
      for(int i = 1; i < n; i++) 
      {
        if(s[i - 1] == 'B')
        {
          if(s[i] == 'B')
          {
            s[i - 1] = 'A';
            s[i] = 'X';
          } else if(s[i] == 'A')
          {
            s[i - 1] = 'A';
            s[i] = 'B';
          }
        }
      }
      var sb = new StringBuilder();
      for(int i = 0; i < n; i++)
      {
        if(s[i] != 'X')
        {
          sb.Append(s[i]);
        }
      }
      Console.WriteLine(sb.ToString());
      return;
    }
  }
}
