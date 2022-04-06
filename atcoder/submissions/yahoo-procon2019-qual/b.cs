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
			int[] sum = new int[4];
			for(int i = 0; i < 3; i++) {
				string[] n = Console.ReadLine().Split(' ');
				sum[int.Parse(n[0]) - 1]++;
				sum[int.Parse(n[1]) - 1]++;
			}
			if(sum[0] <= 2 && sum[1] <= 2 && sum[2] <= 2 && sum[3] <= 2) {
				Console.WriteLine("YES");
			} else {
				Console.WriteLine("NO");
			}
			return;
		}
	}
}
