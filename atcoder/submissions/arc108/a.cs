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
			string[] a = Console.ReadLine().Split(' ');
			long s = long.Parse(a[0]);
			long p = long.Parse(a[1]);
			for(long n = 1; n <= 1000050; n++) {
				long m = s - n;
				if(n * m == p) {
					Console.WriteLine("Yes");
					return;
				}
			}
			Console.WriteLine("No");
		}
	}
}
