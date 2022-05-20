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
      long initNum = 42;
      long curNum = initNum * 2;
      long max = 130000000;
      while(curNum < max)
      {
        curNum += curNum;
      }
      Console.WriteLine(curNum);
      return;
    }
  }
}
