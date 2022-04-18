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
		static int N = 10;
		static void Main() {
			string s = Console.ReadLine();
			int[] arr = new int[N];
			foreach (char i in s) {
				arr[(int)Char.GetNumericValue(i)]++;
			}
			for(int i = 0; i < N; i++) {
				if(arr[i] == 0) {
					Console.WriteLine(i);
					return;
				}
			}
			return;
		}
	}
}
