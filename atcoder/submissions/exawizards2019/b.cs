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
			string s = Console.ReadLine();
			int bCnt = 0;
			int rCnt = 0;
			foreach (char c in s) {
				if(c == 'B') {
					bCnt++;
				} else {
					rCnt++;
				}
			}
			if(rCnt > bCnt) {
				Console.WriteLine("Yes");
			} else {
				Console.WriteLine("No");
			}
			return;
		}
	}
}
