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
			string s = Console.ReadLine();
			string ans = "CODEFESTIVAL2016";
			int count = 0;
			for(int i = 0; i < s.Length; i++)
			{
				if(s[i] != ans[i]) count++;
			}
			Console.WriteLine(count);
			return;
		}
	}
}
