# What this is

This is a fork of `mkisofs`/`genisoimage` which I have made which has
the following:

* It compiles without `cmake`
* It generates Y2028 (not a typo: I mean 28 with a two) 
  compliant `.iso` image files

In more detail, there is a bug in `mkisofs` and `getisoimage` where it
will, starting in 2028, make files with incorrect timestamps (the time
zone will be invalid and incorrect).

This fork fixes the issue.

# Compiling and running

The code compiles and runs without issue in Ubuntu 20.04.  Simply
type in `make`.

There is an issue getting an access violation when I compile the code
with Cygwin.  The workaround is probably to use Windows Subsystem for 
Linux to compile this package in Windows (not tried yet).

# Bug report filed upstream

Upstream for `genisoimage`:

* https://packages.debian.org/search?keywords=genisoimage
* https://bugs.debian.org/cgi-bin/pkgreport.cgi?package=genisoimage

Bug filed:

* https://bugs.debian.org/cgi-bin/bugreport.cgi?bug=990468

Upstream for `mkisofs`:

* http://schilytools.sourceforge.net/

I have sent an email to the current `mkisofs` maintainer with the bug
report and my fix.

# The CDDL license controversey

There was an issue, in the history of `mkisofs`, where it started to use
files with the Common Development and Distribution License (CDDL) license.
While it has not been brought to court, some lawyers, include the
Free Software Foundation’s legal counsel, feel the CDDL may be incompatible
with the GNU General Public License (GPL).

Because of this, the Debian code based forked `mkisofs` and uses an
older version of the codebase with the name `genisoimage`.  

This older version is the most common version of the code.  The original
long-term maintainer of `mkisofs` has an updated version (with the CDDL
license issue) at http://schilytools.sourceforge.net/

# Note

This file was created by Sam Trenholme
