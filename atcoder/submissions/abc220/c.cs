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
using System.Runtime.Intrinsics.X86;
using System.Text;

namespace AtCoder {
	class Program {
		static void Main() {
			long n;
			long[] arr;
			long x;
			n = long.Parse(Console.ReadLine());
			arr = new long[n];
			int i = 0;
			foreach (string y in Console.ReadLine().Split(' ')){
				arr[i++] = long.Parse(y);
			}
			x = long.Parse(Console.ReadLine());
			long total = arr.Sum();
			long ans = n * (x/total);
			x = x % total;
			i = 0;
			while(x > 0) {
				ans++;
				x -= arr[i++];
			}
			Console.WriteLine(x == 0? ans + 1 : ans);
			return;
		}
	}
}
