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
			string n = Console.ReadLine();
			int idx = n.LastIndexOf("FESTIVAL");
			string ans = "";
			for(int i = 0; i < idx; i++) {
				ans += n[i];
			}
			Console.WriteLine(ans);
		}
	}
}
