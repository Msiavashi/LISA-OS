you need to install nasm first :  sudo apt-get install nasm

for running the operating system you can simply write the floppy.img on a disk and run it on your computer but i suggest you to run it on a virtual machine like virtual box or vmware . to do thos you need to give them the floppy.img and run it .

To make the floppy.img :

in the ./src directory run make clean command and then run make command you can make the files ( if any changes made ) this way .

to update the floppy.img ( To make the changes happen when you run the os ) simply run : ./update_image.sh .

Important Notices :

1_ you should write your program in startmain.c . this is were your program begins to run . your main function ( as the main in C ) .

2_ To Add any library to the OS you need to add the name of the library with a ".o" format like "stdlib.o" in front of the "SOURCES=" in the /src/MakeFile and save it .


---- File System ----
If you want to include a file in your file system then run the make_initrd program in terminal and give it command-line arguemnts as follows:
./make_initrd [file address (in your computer)] [file name in Rack OS file system]
By continuing this pattern you can give as many files as you wish. [Read make_initrd.c source file for more information]


Regards,
Mohammad
