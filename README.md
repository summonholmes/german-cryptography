# German Cryptography

Guten Tag!  Here is a process for performing several cryptographic algorithms on the German language, including the umlaut and eszett characters.  

The process utilizes some additional operations to substitute these foreign characters since ASCII is the default character set.  In ASCII, these foreign chracters do not fall within the 65-90 or 97-122 decimal range.  Unlike the English alphabet, the alphabet size is 30, which primarily affects the modulo arithmetic of the English versions.

The algorithms work by substituting the German characters with the additional ASCII characters at the ends of these English ASCII ranges, performing encryption, then substituting the German characters back in place.  For decryption, the German characters are subsituted with the end range ascii characters again, decryption is performed, then the German characters are again substituted back in place.

The multiple implementations contain many notable differences, due to the inherent properties of these languages.  For instance, many of the Python functions are reduced to 1-2 lines using list comprehension methods; R code is vectorized; julia combines R and Python approaches; and C/C++ utilizes passing by reference via pointers, forcing a more complex approach due to UTF-8 incompatibility.

The 'nachtlied.txt' excerpt from Thus Spoke Zarathustra by Friedrich Nietzsche is included, so that the algorithms may be readily tested.  The provided scripts of interest are those that are titled with the cipher name, which provide examples of full encryption/decryption routines.  

[To be added/incomplete: C, C++, Javascript, POSIX Shell]  

Dependencies 
===
MATLAB and/or Python 3+ and/or R
* Python 3 Requires numpy.  

Installation
===
**MATLAB**  
Drag the files to your MATLAB folder, or browse to the path after download or cloning.  Then select a cipher to run, such as Shift_German.m.

**Python 3+**  
Choose a cipher to run from the command line or IDE.  

Example:
```
$ python3 /path/to/python/Shift_German.py
```

**R**  
Choose a cipher to run from the command line or RStudio.  Note that in RStudio, you will have to change the source paths at the beginning of each file, or create a project in the 'R' directory.  

Example (RStudio):
```
  If preferred, change:
1 source('PreProcess_German.r')
  To:
1 source('/path/to/r/PreProcess_German.r')
```

Example (Command Line):
```
$ cd /path/to/r/
$ Rscript Shift_German.py
```

**Julia+**  
Choose a cipher to run from the command line or IDE.  

Example:
```
$ julia /path/to/julia/Shift_German.jl
```

Troubleshooting
===

Depending on your environment, the default scripts and functions may not work correctly.  The default 'nachtlied.txt' file is encoded via ISO-8859-1.  When running into trouble with umlauts and eszetts displaying incorrectly, which can break the entire process, do the following:

1. Replace 'nachtlied.txt' with 'nachtlied-utf-8.txt'.  This is most easily accomplished by renaming 'nachtlied-utf-8.txt' to 'nachtlied.txt', then replacing the exiting 'nachtlied.txt' file in the existing Python and Matlab directories.

2. For all the required Python scripts: Shift_German.py, Affine_German.py, Vigenere_German.py, Substitution_German.py, and Hill_German.py; find this line: 
```
f = open("nachtlied.txt", 'r', 'iso-8859-1')  
```
After completing 1., replace this line with:  
```
f = open("nachtlied.txt", 'r', 'utf-8')  
```
License
===

This project is licensed under the [GNU General Public License GPLv3](https://www.gnu.org/licenses/gpl-3.0.en.html).

