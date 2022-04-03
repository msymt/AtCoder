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
			long A = long.Parse(input[0]);
			long B = long.Parse(input[1]);
			long C = long.Parse(input[2]);
			long D = long.Parse(input[3]);
			string ans = "Takahashi";
			if(A * 60 + B > C * 60 + D) {
				ans = "Aoki";
			}
			Console.WriteLine(ans);
		}
	}
}
