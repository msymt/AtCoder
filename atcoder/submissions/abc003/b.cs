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
      char[] ans = {'a', 't', 'c', 'o', 'd', 'e', 'r'};
      string s = Console.ReadLine();
      string t = Console.ReadLine();
      for(int index = 0; index < s.Length; index++)
      {
        if(s[index] != t[index])
        {
          if(!((s[index] == '@' && ans.Contains(t[index])) || (t[index] == '@' && ans.Contains(s[index]))))
          {
            Console.WriteLine("You will lose");
            return;
          }
        }
      }
      Console.WriteLine("You can win");
      return;
    }
  }
}
