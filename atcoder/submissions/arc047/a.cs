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
      string nl = Console.ReadLine();
      int n = int.Parse(nl.Split()[0]);
      int l = int.Parse(nl.Split()[1]);
      string s = Console.ReadLine();
      int currentTab = 1;
      int crashNum = 0;
      foreach (char c in s)
      {
        if(c == '+')
        {
          currentTab += 1;
          if(currentTab > l)
          {
            crashNum += 1;
            currentTab = 1;
          }
        }
        else
        {
          if(currentTab > 0)
          {
            currentTab -= 1;
          }
        }
      }
      Console.WriteLine(crashNum);
      return;
    }
  }
}
