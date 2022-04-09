using System.Collections.ObjectModel;
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
			var xmp = new Dictionary<int, int>();
			var ymp = new Dictionary<int, int>();
			int xCurrentCount, yCurrentCount;
			for(var i = 0; i < 3; i++) {
				var s = Console.ReadLine();
				int x = int.Parse(s.Split()[0]);
				int y = int.Parse(s.Split()[1]);
				xmp.TryGetValue(x, out xCurrentCount);
				xmp[x] = xCurrentCount + 1;
				ymp.TryGetValue(y, out yCurrentCount);
				ymp[y] = yCurrentCount + 1;
			}
			var xMin = xmp.OrderBy(x => x.Value).First().Key;
			var yMin = ymp.OrderBy(y => y.Value).First().Key;
			Console.WriteLine(xMin + " " + yMin);
		}
	}
}
