# classical-cryptography-german

Guten Tag!  Here is a process for performing the classical cryptographic algorithms on the German language, including the umlaut and eszett characters.  

The process utilizes some additional operations to substitute these characters since ASCII is the default character set.  In ASCII, these foreign chracters do not fall within the 65-90 or 97-122 decimal range.  

The algorithms work by substituting the German characters with the actual ASCII characters to the ends of these English ASCII ranges temporarily, performing the algorithm, then substituting the German characters back in place.  

The MATLAB and Python implementations contain many similarities and differences, due to the inherent properties of the languages.

The 'nachtlied.txt' excerpt from Thus Spoke Zarathustra by Friedrich Nietzsche is included, so that the algorithms may be readily tested.  

Dependencies
===
MATLAB and/or Python 3+

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

