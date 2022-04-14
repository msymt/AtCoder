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
			string[] a = Console.ReadLine().Split();
			double n = double.Parse(a[0]);
			double m = double.Parse(a[1]);
			double c = Math.Pow(n * n + m * m, 0.5);
			double x = n / c;
			double y = m / c;
			Console.WriteLine("{0:F12} {1:F12}", x, y);
			return;
		}
	}
}
