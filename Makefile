# Note: This file was created by Sam Trenholme

all: apple.o apple_driver.o boot-alpha.o boot-hppa.o boot-mips.o \
  boot-mipsel.o boot.o checksum.o desktop.o dvd_file.o \
  dvd_reader.o eltorito.o endian.o exclude.o files.o fnmatch.o \
  getopt.o getopt1.o hash.o ifo_read.o joliet.o jte.o \
  match.o md5.o multi.o name.o rock.o rsync.o \
  scsi.o sha1.o sha256.o sha512.o stream.o tree.o udf.o vms.o \
  volume.o write.o genisoimage

librols/movebytes.o:
	cd librols/ ; make ; cd ..

clean:
	rm -f *.o librols/*.o

apple.o: apple.c
	cc -c -I include/ -o apple.o apple.c

apple_driver.o: apple_driver.c
	cc -c -I include/ -o apple_driver.o apple_driver.c

boot-alpha.o: boot-alpha.c
	cc -c -I include/ -o boot-alpha.o boot-alpha.c

boot-hppa.o: boot-hppa.c
	cc -c -I include/ -o boot-hppa.o boot-hppa.c

boot-mips.o: boot-mips.c
	cc -c -I include/ -o boot-mips.o boot-mips.c

boot-mipsel.o: boot-mipsel.c
	cc -c -I include/ -o boot-mipsel.o boot-mipsel.c

boot.o: boot.c
	cc -c -I include/ -o boot.o boot.c

checksum.o: checksum.c
	cc -c -I include/ -o checksum.o checksum.c

desktop.o: desktop.c
	cc -c -I include/ -o desktop.o desktop.c

dvd_file.o: dvd_file.c
	cc -c -I include/ -o dvd_file.o dvd_file.c

dvd_reader.o: dvd_reader.c
	cc -c -I include/ -o dvd_reader.o dvd_reader.c

eltorito.o: eltorito.c
	cc -c -I include/ -o eltorito.o eltorito.c

endian.o: endian.c
	cc -c -I include/ -o endian.o endian.c

exclude.o: exclude.c
	cc -c -I include/ -o exclude.o exclude.c

files.o: files.c
	cc -c -I include/ -o files.o files.c

fnmatch.o: fnmatch.c
	cc -c -I include/ -o fnmatch.o fnmatch.c

genisoimage.o: genisoimage.c
	cc -c -I include/ -o genisoimage.o genisoimage.c

getopt.o: getopt.c
	cc -c -I include/ -o getopt.o getopt.c

getopt1.o: getopt1.c
	cc -c -I include/ -o getopt1.o getopt1.c

hash.o: hash.c
	cc -c -I include/ -o hash.o hash.c

ifo_read.o: ifo_read.c
	cc -c -I include/ -o ifo_read.o ifo_read.c

joliet.o: joliet.c
	cc -c -I include/ -o joliet.o joliet.c

jte.o: jte.c
	cc -c -I include/ -o jte.o jte.c

mac_label.o: mac_label.c
	cc -c -I include/ -o mac_label.o mac_label.c

match.o: match.c
	cc -c -I include/ -o match.o match.c

md5.o: md5.c
	cc -c -I include/ -o md5.o md5.c

multi.o: multi.c
	cc -c -I include/ -o multi.o multi.c

name.o: name.c
	cc -c -I include/ -o name.o name.c

rock.o: rock.c
	cc -c -I include/ -o rock.o rock.c

rsync.o: rsync.c
	cc -c -I include/ -o rsync.o rsync.c

scsi.o: scsi.c
	cc -c -I include/ -o scsi.o scsi.c

sha1.o: sha1.c
	cc -c -I include/ -o sha1.o sha1.c

sha256.o: sha256.c
	cc -c -I include/ -o sha256.o sha256.c

sha512.o: sha512.c
	cc -c -I include/ -o sha512.o sha512.c

stream.o: stream.c
	cc -c -I include/ -o stream.o stream.c

tree.o: tree.c
	cc -c -I include/ -o tree.o tree.c

udf.o: udf.c
	cc -c -I include/ -o udf.o udf.c

vms.o: vms.c
	cc -c -I include/ -o vms.o vms.c

volume.o: volume.c
	cc -c -I include/ -o volume.o volume.c

write.o: write.c
	cc -c -I include/ -o write.o write.c

genisoimage: librols/movebytes.o genisoimage.c 
	cc -I include/ -o 9660img genisoimage.c *.o librols/*.o
