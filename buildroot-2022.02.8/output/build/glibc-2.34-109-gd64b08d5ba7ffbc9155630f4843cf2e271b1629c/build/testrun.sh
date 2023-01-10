#!/bin/bash
builddir=`dirname "$0"`
GCONV_PATH="${builddir}/iconvdata"

usage () {
cat << EOF
Usage: $0 [OPTIONS] <program> [ARGUMENTS...]

  --tool=TOOL  Run with the specified TOOL. It can be strace, valgrind or
               container. The container will run within support/test-container.
EOF

  exit 1
}

toolname=default
while test $# -gt 0 ; do
  case "$1" in
    --tool=*)
      toolname="${1:7}"
      shift
      ;;
    --*)
      usage
      ;;
    *)
      break
      ;;
  esac
done

if test $# -eq 0 ; then
  usage
fi

case "$toolname" in
  default)
    exec   env GCONV_PATH="${builddir}"/iconvdata LOCPATH="${builddir}"/localedata LC_ALL=C  "${builddir}"/elf/ld-linux-x86-64.so.2 --library-path "${builddir}":"${builddir}"/math:"${builddir}"/elf:"${builddir}"/dlfcn:"${builddir}"/nss:"${builddir}"/nis:"${builddir}"/rt:"${builddir}"/resolv:"${builddir}"/mathvec:"${builddir}"/support:"${builddir}"/crypt:"${builddir}"/nptl ${1+"$@"}
    ;;
  strace)
    exec strace  -EGCONV_PATH=/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/iconvdata  -ELOCPATH=/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/localedata  -ELC_ALL=C  /home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/elf/ld-linux-x86-64.so.2 --library-path /home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/math:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/elf:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/dlfcn:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/nss:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/nis:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/rt:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/resolv:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/mathvec:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/support:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/crypt:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/nptl ${1+"$@"}
    ;;
  valgrind)
    exec env GCONV_PATH=/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/iconvdata LOCPATH=/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/localedata LC_ALL=C valgrind  /home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/elf/ld-linux-x86-64.so.2 --library-path /home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/math:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/elf:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/dlfcn:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/nss:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/nis:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/rt:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/resolv:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/mathvec:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/support:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/crypt:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/nptl ${1+"$@"}
    ;;
  container)
    exec env GCONV_PATH=/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/iconvdata LOCPATH=/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/localedata LC_ALL=C  /home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/elf/ld-linux-x86-64.so.2 --library-path /home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/math:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/elf:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/dlfcn:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/nss:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/nis:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/rt:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/resolv:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/mathvec:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/support:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/crypt:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/nptl /home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/support/test-container env GCONV_PATH=/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/iconvdata LOCPATH=/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/localedata LC_ALL=C  /home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/elf/ld-linux-x86-64.so.2 --library-path /home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/math:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/elf:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/dlfcn:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/nss:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/nis:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/rt:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/resolv:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/mathvec:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/support:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/crypt:/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/build/glibc-2.34-109-gd64b08d5ba7ffbc9155630f4843cf2e271b1629c/build/nptl ${1+"$@"}
    ;;
  *)
    usage
    ;;
esac
