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
			StringBuilder sb = new StringBuilder();
			sb.Append("1");
			for(int i = 1; i < n; i++) {
				sb.Append("0");
			}
			sb.Append("7");
			Console.WriteLine(sb.ToString());
			return;
		}
	}
}