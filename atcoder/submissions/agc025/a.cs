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
			int ans = 0;
			if(n % 10 == 0) {
				ans = 10;
			} else {
				while(n > 0) {
					ans += n % 10;
					n /= 10;
				}
			}
			Console.WriteLine(ans);
		}
	}
}
