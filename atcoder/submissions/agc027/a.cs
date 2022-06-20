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
      int[] nx = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
      int n = nx[0];
      int x = nx[1];
      int[] nums = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
      Array.Sort(nums);
      int ans = 0;
      for(int i = 0; i < n; i++)
    　　　　{
      if(x >= nums[i] && i != n-1)
      {
        x -= nums[i];
        ans ++;
      }else if(x == nums[i])
      {
        ans ++;
      }
      else break;
      }
      Console.WriteLine(ans);
      return;
    }
  }
}
