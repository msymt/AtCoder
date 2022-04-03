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
			string[] str = Console.ReadLine().Split();
			int[] a = new int[2002];
			for(int i = 0; i < n; i++) {
				a[int.Parse(str[i])]++;
			}
			for(int i = 0; i <= 2000; i++) {
				if(a[i] == 0) {
					Console.WriteLine(i);
					break;
				}
			}
		}
	}
}
