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
			string[] input = Console.ReadLine().Split(' ');
			int N = int.Parse(input[0]);
			input = Console.ReadLine().Split(' ');
			int[] a = new int[N];
			for (int i = 0; i < N; i++) {
				a[i] = int.Parse(input[i]);
			}
			float sum = 0;
			for(int i = 0; i < N; i++) {
				sum += a[i];
			}
			float ave = sum / N;
			float minDisVal = float.MaxValue;
			int minIdx = 0;
			for(int i = 0; i < N; i++) {
				float dis = Math.Abs(ave - a[i]);
				if (dis < minDisVal) {
					minDisVal = dis;
					minIdx = i;
				}
			}
			Console.WriteLine(minIdx);
			return;
		}
	}
}
