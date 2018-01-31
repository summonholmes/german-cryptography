# classical-cryptography-german

Guten Tag!  Here is a process for performing several classical cryptographic algorithms on the German language, including the umlaut and eszett characters.  

The process utilizes some additional operations to substitute these foreign characters since ASCII is the default character set.  In ASCII, these foreign chracters do not fall within the 65-90 or 97-122 decimal range.  

The algorithms work by substituting the German characters with the additional ASCII characters at the ends of these English ASCII ranges, performing encryption, then substituting the German characters back in place.  For decryption, the German characters are subsituted with the end range ascii characters again, decryption is performed, then the German characters are again substituted back in place.

The MATLAB and Python implementations contain many notable differences, due to the inherent properties of these languages.

The 'nachtlied.txt' excerpt from Thus Spoke Zarathustra by Friedrich Nietzsche is included, so that the algorithms may be readily tested.  The provided scripts of interest are those that are titled with the cipher name, which provide examples of full encryption/decryption routines.

Dependencies
===
MATLAB and/or Python 3+
* Python 3 Requires numpy.  

Installation
===
*MATLAB*  
Drag the files to your MATLAB folder, or browse to the path after download or cloning.  Then select a cipher to run, such as Shift_German.

*Python 3+*  
Choose a cipher to run from the command line or IDE.  

Example:
```
$ /path/to/python/Shift_German.py
```
 
License
===

This project is licensed under the [GNU General Public License GPLv3](https://www.gnu.org/licenses/gpl-3.0.en.html).

