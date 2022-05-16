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
      string s = Console.ReadLine();
      var dic = new Dictionary<string, int>();
      dic.Add("Monday", 1);
      dic.Add("Tuesday", 2);
      dic.Add("Wednesday", 3);
      dic.Add("Thursday", 4);
      dic.Add("Friday", 5);
      dic.Add("Saturday", 6);
      dic.Add("Sunday", 6);
      Console.WriteLine(dic["Saturday"] - dic[s]);
      return;
    }
  }
}
