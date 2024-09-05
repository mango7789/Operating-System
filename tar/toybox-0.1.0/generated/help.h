#define help_toybox "usage: toybox [command] [arguments...]\n\nWith no arguments, shows available commands.  First argument is\nname of a command to run, followed by any arguments to that command.\n"
#define help_toybox_free "When a program exits, the operating system will clean up after it\n(free memory, close files, etc).  To save size, toybox usually relies\non this behavior.  If you're running toybox under a debugger or\nwithout a real OS (ala newlib+libgloss), enable this to make toybox\nclean up after itself.\n"
#define help_toybox_debug "Enable extra checks for debugging purposes.\n"
#define help_basename "usage: basename path [suffix]\n\nPrint the part of path after the last slash, optionally minus suffix.\n"
#define help_bzcat "usage: bzcat [filename...]\n\nDecompress listed files to stdout.  Use stdin if no files listed.\n"
#define help_cat "usage: cat [-u] [file...]\nCopy (concatenate) files to stdout.  If no files listed, copy from stdin.\nFilename \"-\" is a synonym for stdin.\n\n-u    Copy one byte at a time (slow).\n"
#define help_catv "usage: catv [-evt] [filename...]\n\nDisplay nonprinting characters as escape sequences.  Use M-x for\nhigh ascii characters (>127), and ^x for other nonprinting chars.\n\n-e    Mark each newline with $\n-t    Show tabs as ^I\n-v    Don't use ^x or M-x escapes.\n"
#define help_chroot "usage: chroot NEWPATH [commandline...]\n\nRun command within a new root directory.  If no command, run /bin/sh.\n"
#define help_chvt "usage: chvt N\n\nChange to virtual terminal number N.  (This only works in text mode.)\n\nVirtual terminals are the Linux VGA text mode displays, ordinarily\nswitched between via alt-F1, alt-F2, etc.  Use ctrl-alt-F1 to switch\nfrom X to a virtual terminal, and alt-F6 (or F7, or F8) to get back.\n"
#define help_cksum "usage: cksum [-FL] [file...]\n\nFor each file, output crc32 checksum value, length and name of file.\nIf no files listed, copy from stdin.  Filename \"-\" is a synonym for stdin.\n\n-L    Little endian (defaults to big endian)\n-P    Pre-inversion\n-I    Skip post-inversion\n-N    No length\n"
#define help_count "usage: count\n\nCopy stdin to stdout, displaying simple progress indicator to stderr.\n"
#define help_cp "usage: cp -fiprdal SOURCE... DEST\n\nCopy files from SOURCE to DEST.  If more than one SOURCE, DEST must\nbe a directory.\n\n-f      force copy by deleting destination file\n-i      interactive, prompt before overwriting existing DEST\n-p      preserve timestamps, ownership, and permissions\n-r      recurse into subdirectories (DEST must be a directory)\n-d      don't dereference symlinks\n-a      same as -dpr\n-l      hard link instead of copying\n-v      verbose\n"
#define help_df "usage: df [-t type] [FILESYSTEM ...]\n\nThe \"disk free\" command, df shows total/used/available disk space for\neach filesystem listed on the command line, or all currently mounted\nfilesystems.\n\n-t type\nDisplay only filesystems of this type.\n"
#define help_df_pedantic "usage: df [-Pk]\n\n-P    The SUSv3 \"Pedantic\" option\n\nProvides a slightly less useful output format dictated by\nthe Single Unix Specification version 3, and sets the\nunits to 512 bytes instead of the default 1024 bytes.\n\n-k    Sets units back to 1024 bytes (the default without -P)\n"
#define help_dirname "usage: dirname path\n\nPrint the part of path up to the last slash.\n"
#define help_dmesg "usage: dmesg [-n level] [-s bufsize] | -c\n\nPrint or control the kernel ring buffer.\n\n-n    Set kernel logging level (1-9).\n-s    Size of buffer to read (in bytes), default 16384.\n-c    Clear the ring buffer after printing.\n"
#define help_echo "usage: echo [-ne] [args...]\n\nWrite each argument to stdout, with one space between each, followed\nby a newline.\n\n-n    No trailing newline.\n-e    Process the following escape sequences:\n\\\\      backslash\n\\a      alert (beep/flash)\n\\b      backspace\n\\c      Stop output here (avoids trailing newline)\n\\f      form feed\n\\n      newline\n\\r      carriage return\n\\t      horizontal tab\n\\v      vertical tab\n"
#define help_false "Return nonzero.\n"
#define help_hello "A hello world program.  You don't need this.\n\nMostly used as an example/skeleton file for adding new commands,\noccasionally nice to test kernel booting via \"init=/bin/hello\".\n"
#define help_help "usage: help [command]\n\nShow usage information for toybox commands.\n"
#define help_help_long "Show more than one line of help information per command.\n"
#define help_mdev "usage: mdev [-s]\n\nCreate devices in /dev using information from /sys.\n\n-s    Scan all entries in /sys to populate /dev.\n"
#define help_mdev_conf "The mdev config file (/etc/mdev.conf) contains lines that look like:\nhd[a-z][0-9]* 0:3 660\n\nEach line must contain three whitespace separated fields.  The first\nfield is a regular expression matching one or more device names, and\nthe second and third fields are uid:gid and file permissions for\nmatching devies.\n"
#define help_mke2fs "usage: mke2fs [-Fnq] [-b ###] [-N|i ###] [-m ###] device\n\nCreate an ext2 filesystem on a block device or filesystem image.\n\n-F         Force to run on a mounted device\n-n         Don't write to device\n-q         Quiet (no output)\n-b size    Block size (1024, 2048, or 4096)\n-N inodes  Allocate this many inodes\n-i bytes   Allocate one inode for every XXX bytes of device\n-m percent Reserve this percent of filesystem space for root user\n"
#define help_mke2fs_journal "usage: [-j] [-J size=###,device=XXX]\n\n-j         Create journal (ext3)\n-J         Journal options\nsize: Number of blocks (1024-102400)\ndevice: Specify an external journal\n"
#define help_mke2fs_gen "usage: gene2fs [options] device filename\n\nThe [options] are the same as mke2fs.\n"
#define help_mke2fs_label "usage: mke2fs [-L label] [-M path] [-o string]\n\n-L         Volume label\n-M         Path to mount point\n-o         Created by\n"
#define help_mke2fs_extended "usage: mke2fs [-E stride=###] [-O option[,option]]\n\n-E stride= Set RAID stripe size (in blocks)\n-O [opts]  Specify fewer ext2 option flags (for old kernels)\nAll of these are on by default (as appropriate)\nnone         Clear default options (all but journaling)\ndir_index    Use htree indexes for large directories\nfiletype     Store file type info in directory entry\nhas_journal  Set by -j\njournal_dev  Set by -J device=XXX\nsparse_super Don't allocate huge numbers of redundant superblocks\n"
#define help_mkfifo "usage: mkfifo [-m mode] name...\n\nMakes a named pipe at name.\n\n-m mode       The mode of the pipe(s) created by mkfifo. It defaults\nto 0644.  This number is in octal, optionally preceded\nby a leading zero.\n"
#define help_mkswap "usage: mkswap DEVICE\n\nFormat a Linux v1 swap device.\n"
#define help_netcat "usage: netcat [-wpq #] [-s addr] {IPADDR PORTNUM|-f FILENAME|-let} [-e COMMAND]\n\n-w    SECONDS timeout for connection\n-p    local port number\n-s    local ipv4 address\n-q    SECONDS quit this many seconds after EOF on stdin.\n-f    use FILENAME (ala /dev/ttyS0) instead of network\n\nUse \"stty 115200 -F /dev/ttyS0 && stty raw -echo -ctlecho\" with\nnetcat -f to connect to a serial port.\n\n"
#define help_netcat_listen "-t    allocate tty (must come before -l or -L)\n-l    listen for one incoming connection.\n-L    listen for multiple incoming connections (server mode).\n\nAny additional command line arguments after -l or -L are executed\nto handle each incoming connection.  If none, the connection is\nforwarded to stdin/stdout.\n\nFor a quick-and-dirty server, try something like:\nnetcat -s 127.0.0.1 -p 1234 -tL /bin/bash -l\n"
#define help_oneit "usage: oneit [-p] [-c /dev/tty0] command [...]\n\nA simple init program that runs a single supplied command line with a\ncontrolling tty (so CTRL-C can kill it).\n\n-p    Power off instead of rebooting when command exits.\n-c    Which console device to use.\n\nThe oneit command runs the supplied command line as a child process\n(because PID 1 has signals blocked), attached to /dev/tty0, in its\nown session.  Then oneit reaps zombies until the child exits, at\nwhich point it reboots (or with -p, powers off) the system.\n"
#define help_patch "usage: patch [-i file] [-p depth] [-Ru]\n\nApply a unified diff to one or more files.\n\n-i    Input file (defaults=stdin)\n-p    number of '/' to strip from start of file paths (default=all)\n-R    Reverse patch.\n-u    Ignored (only handles \"unified\" diffs)\n\nThis version of patch only handles unified diffs, and only modifies\na file when all all hunks to that file apply.  Patch prints failed\nhunks to stderr, and exits with nonzero status if any hunks fail.\n\nA file compared against /dev/null (or with a date <= the epoch) is\ncreated/deleted as appropriate.\n"
#define help_pwd "usage: pwd\n\nThe print working directory command prints the current directory.\n"
#define help_readlink "usage: readlink\n\nShow what a symbolic link points to.\n"
#define help_readlink_f "usage: readlink [-f]\n\n-f    Show full cannonical path, with no symlinks in it.  Returns\nnonzero if nothing could currently exist at this location.\n"
#define help_rmdir "usage: rmdir [-p] [dirname...]\nRemove one or more directories.\n\n-p    Remove path.\n"
#define help_sed "usage: sed [-irn] {command | [-e command]...} [FILE...]\n\nStream EDitor, transforms text by appling commands to each line\nof input.\n"
#define help_seq "usage: seq [first] [increment] last\n\nCount from first to last, by increment.  Omitted arguments default\nto 1.  Two arguments are used as first and last.  Arguments can be\nnegative or floating point.\n"
#define help_sha1sum "usage: sha1sum [file...]\n\nCalculate sha1 hash of files (or stdin).\n"
#define help_sleep "usage: sleep SECONDS\n\nWait a decimal integer number of seconds.\n"
#define help_sort "usage: sort [-run] [FILE...]\n\nSort all lines of text from input files (or stdin) to stdout.\n\n-r    reverse\n-u    unique lines only\n-n    numeric order (instead of alphabetical)\n"
#define help_sort_big "usage: sort [-bcdfgiMsz] [-k#[,#[x]] [-t X]] [-o FILE]\n\n-b    ignore leading blanks (or trailing blanks in second part of key)\n-c    check whether input is sorted\n-d    dictionary order (use alphanumeric and whitespace chars only)\n-f    force uppercase (case insensitive sort)\n-g    general numeric sort (double precision with nan and inf)\n-i    ignore nonprinting characters\n-M    month sort (jan, feb, etc).\n-s    skip fallback sort (only sort with keys)\n-z    zero (null) terminated input\n-k    sort by \"key\" (see below)\n-t    use a key separator other than whitespace\n-o    output to FILE instead of stdout\n\nThis version of sort requires floating point.\n\nSorting by key looks at a subset of the words on each line.  -k2\nuses the second word to the end of the line, -k2,2 looks at only\nthe second word, -k2,4 looks from the start of the second to the end\nof the fourth word.  Specifying multiple keys uses the later keys as\ntie breakers, in order.  A type specifier appended to a sort key\n(such as -2,2n) applies only to sorting that key.\n"
#define help_sync "usage: sync\n\nWrite pending cached data to disk (synchronize), blocking until done.\n"
#define help_tee "usage: tee [-ai] [file...]\n\nCopy stdin to each listed file, and also to stdout.\nFilename \"-\" is a synonym for stdout.\n\n-a        append to files.\n-i        ignore SIGINT.\n"
#define help_touch "usage: touch [-acm] [-r FILE] [-t MMDDhhmm] [-l bytes] FILE...\n\nChange file timestamps, ensure file existance and change file length.\n\n-a    Only change the access time.\n-c    Do not create the file if it doesn't exist.\n-l    Length to truncate (or sparsely extend) file to.\n-m    Only change the modification time.\n-r    Reference file to take timestamps from.\n-t    Time to change {a,m}time to.\n"
#define help_toysh "usage: sh [-c command] [script]\n\nThe toybox command shell.  Runs a shell script, or else reads input\ninteractively and responds to it.\n\n-c    command line to execute\n"
#define help_toysh_tty "Add terminal control to toysh.  This is necessary for interactive use,\nso the shell isn't killed by CTRL-C.\n"
#define help_toysh_profile "Read /etc/profile and ~/.profile when running interactively.\n\nAlso enables the built-in command \"source\".\n"
#define help_toysh_jobctl "Add job control to toysh.  This lets toysh handle CTRL-Z, and enables\nthe built-in commands \"fg\", \"bg\", and \"jobs\".\n\nWith pipe support, enable use of \"&\" to run background processes.\n"
#define help_toysh_flowctl "Add flow control to toysh.  This enables the if/then/else/fi,\nwhile/do/done, and for/do/done constructs.\n\nWith pipe support, this enables the ability to define functions\nusing the \"function name\" or \"name()\" syntax, plus curly brackets\n\"{ }\" to group commands.\n"
#define help_toysh_quotes "Add support for parsing \"\" and '' style quotes to the toysh command\nparser, with lets arguments have spaces in them.\n"
#define help_toysh_wildcards "Expand wildcards in argument names, ala \"ls -l *.t?z\" and\n\"rm subdir/{one,two,three}.txt\".\n"
#define help_toysh_procargs "Add support for executing arguments contianing $() and ``, using\nthe output of the command as the new argument value(s).\n\n(Bash calls this \"command substitution\".)\n"
#define help_toysh_envvars "Substitute environment variable values for $VARNAME or ${VARNAME},\nand enable the built-in command \"export\".\n"
#define help_toysh_locals "Support for local variables, fancy prompts ($PS1), the \"set\" command,\nand $?.\n"
#define help_toysh_arrays "Support for ${blah[blah]} style array variables.\n"
#define help_toysh_pipes "Support multiple commands on the same command line.  This includes\n| pipes, > >> < redirects, << here documents, || && conditional\nexecution, () subshells, ; sequential execution, and (with job\ncontrol) & background processes.\n"
#define help_toysh_builtins "Adds the commands exec, fg, bg, help, jobs, pwd, export, source, set,\nunset, read, alias.\n"
#define help_exit "usage: exit [status]\n\nExit shell.  If no return value supplied on command line, use value\nof most recent command, or 0 if none.\n"
#define help_cd "usage: cd [path]\n\nChange current directory.  With no arguments, go to $HOME.\n"
#define help_cd_p "usage: cd [-PL]\n\n-P    Physical path: resolve symlinks in path.\n-L    Cancel previous -P and restore default behavior.\n"
#define help_true "Return zero.\n"
#define help_tty "Print the filename of the terminal connected to standard input.\n\n-s    Don't print anything, only return an exit status.\n"
#define help_uname "usage: uname [-asnrvmpio]\n\nPrint system information.\n\n-s    System name\n-n    Network (domain) name\n-r    Release number\n-v    Version (build date)\n-m    Machine (hardware) name\n-a    All of the above\n"
#define help_which "usage: which [-a] filename ...\n\nSearch $PATH for executable files matching filename(s).\n\n-a    Show all matches\n"
#define help_yes "usage: yes [args...]\n\nRepeatedly output line until killed.  If no args, output 'y'.\n\n"