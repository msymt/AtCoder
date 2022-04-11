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
			string[] n = Console.ReadLine().Split(' ');
			int a = int.Parse(n[0]);
			int b = int.Parse(n[1]);
			int c = int.Parse(n[2]);
			int ans = 0;
			if(a + b + 1 >= c) ans = b + c;
			else ans = (a + b + 1) + b;
			Console.WriteLine(ans);
			return;
		}
	}
}
