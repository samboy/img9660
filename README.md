# What this is

This is a fork of `mkisofs`/`genisoimage` which I have made which has
the following goals:

* Compile without `cmake`
* Generate Y2028 compliant `.iso` image files

In more detail, there is a bug in `mkisofs` and `getisoimage` where it
will, starting in 2028, make files with incorrect timestamps (the time
zone will be invalid and incorrect).

This fork exists to fix the issue.

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
