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
			int n = int.Parse(Console.ReadLine());
			double ans = 0.0;
			for(int i = 0; i < n; i++) {
				string[] s = Console.ReadLine().Split(' ');
				double a = double.Parse(s[0]);
				double b = double.Parse(s[1]);
				ans += a * b;
			}
			Console.WriteLine(Math.Floor(ans * 1.05));
			return;
		}
	}
}
