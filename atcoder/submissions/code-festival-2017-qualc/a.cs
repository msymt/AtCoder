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
			Boolean AExist = false;
			foreach(char c in n) {
				if(c == 'A') {
					AExist = true;
				} else if(AExist && c == 'C') {
					Console.WriteLine("Yes");
					return;
				} else {
					AExist = false;
				}
			}
			Console.WriteLine("No");
			return;
		}
	}
}
