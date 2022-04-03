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
			string[] input = Console.ReadLine().Split(' ');
			int a = int.Parse(input[0]);
			int b = int.Parse(input[1]);
			int c = int.Parse(input[2]);
			int d = int.Parse(input[3]);
			int[] res = new int[4]{a, b, c, d};
			Array.Sort(res);
			if(res[0] == 1 && res[1] == 4 && res[2] == 7 && res[3] == 9) {
				Console.WriteLine("YES");
			} else {
				Console.WriteLine("NO");
			}
		}
	}
}
