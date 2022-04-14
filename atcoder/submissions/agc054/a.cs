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
			int ans = -1;
			if(s[0] != s[n - 1]) ans = 1;
			else {
				for(int i = 1; i < n - 1; i++) {
					if(s[0] != s[i] && s[0] != s[i + 1]) {
						ans = 2;
						break;
					}
				}
			}
			Console.WriteLine(ans);
			return;
		}
	}
}
