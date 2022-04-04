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
			string input = Console.ReadLine();
			int cnt = 0;
			foreach(char c in input) {
				if (c == 'x') {
					cnt++;
				}
			}
			if(cnt > 7) {
				Console.WriteLine("NO");
			} else {
				Console.WriteLine("YES");
			}
			return;
		}
	}
}
