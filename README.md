# Joerg Schilling, RIP

It is with great sadness that [I need to report that Schilling has 
passed away](https://minnie.tuhs.org/pipermail/tuhs/2021-October/024523.html).
I dedicate this repo to his memory.

I had a positive interaction with him in his final three to four
months. I was in contact with Mr. Schilling to report a bug (fixed
in this repo) with CDR tools. Even though he was (looking back) dying,
he was very prompt in replying to me and discussing the bug with me over
email. Prayers for his family.

# What this is

This is a fork of `genisoimage` which I have made which has
the following:

* It compiles without `cmake`
* It generates Y2028 (not a typo: I mean 28 with a two) 
  compliant `.iso` image files
* It fixes a [long standing bug](https://bugs.debian.org/cgi-bin/bugreport.cgi?bug=505381)
  where four sectors (8 Kib) are wasted in image files.  Note that the
  Schilling version of the code still has this bug; since we do not
  know *why* those extra four sectors were added, I will keep the code
  because there is *probably* some obscure CD-ROM driver out there which
  needs those sectors to be blank.
* This fork is based on the pure-GPL `genisoimage` version of the code.

In more detail, there is a bug in `genisoimage` where it
will, starting in 2028, make files with incorrect timestamps (the time
zone will be invalid and incorrect).

While `mkisofs` used to have this bug, Schilling fixed the bug while 
he was still with us.

This fork fixes the issue in the pure GPL branch of `genisoimage`.

# Compiling and running

The code compiles and runs without issue in Ubuntu 20.04 and Cygwin.  
Simply enter the `src` directory and type in `make`.

# Bug report filed upstream

Upstream for `genisoimage`:

* https://packages.debian.org/search?keywords=genisoimage
* https://bugs.debian.org/cgi-bin/pkgreport.cgi?package=genisoimage

Relevant bugs:

* https://bugs.debian.org/cgi-bin/bugreport.cgi?bug=990468
* https://bugs.debian.org/cgi-bin/bugreport.cgi?bug=505381

Upstream for `mkisofs` (again, Schilling made his own fix):

* http://schilytools.sourceforge.net/
* https://codeberg.org/schilytools/schilytools/

# The CDDL license controversey

There was an issue, in the history of `mkisofs`, where it started to use
files with the Common Development and Distribution License (CDDL) license.
While it has not been brought to court, some lawyers, include the
Free Software Foundation’s legal counsel, feel the CDDL may be incompatible
with the GNU General Public License (GPL).

Because of this, the Debian code based forked `mkisofs` and uses an
older version of the codebase with the name `genisoimage`.  

This older version is the most common version of the code.  The original
long-term maintainer of `mkisofs`, the late Joerg Schilling, made an updated 
version (with the CDDL license issue) at http://schilytools.sourceforge.net/

This repo is a fork of `genisoimage` and uses no CDDL licensed code.

# Note

This file was created by Sam Trenholme
