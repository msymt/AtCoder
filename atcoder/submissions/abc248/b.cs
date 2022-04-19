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
using System.Text;

namespace AtCoder {
	class Program {
		static void Main() {
			string[] s = Console.ReadLine().Split(' ');
			long a = long.Parse(s[0]);
			long b = long.Parse(s[1]);
			long k = long.Parse(s[2]);
			int count = 0;
			while(a < b) {
				a = a * k;
				count++;
			}
			Console.WriteLine(count);
			return;
		}
	}
}
