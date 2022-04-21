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
			string[] n = Console.ReadLine().Split(' ');
			double h = double.Parse(n[0]) * 0.01;
			double b = double.Parse(n[1]);
			double w = h * h * b;
			Console.WriteLine(w);
			return;
		}
	}
}
