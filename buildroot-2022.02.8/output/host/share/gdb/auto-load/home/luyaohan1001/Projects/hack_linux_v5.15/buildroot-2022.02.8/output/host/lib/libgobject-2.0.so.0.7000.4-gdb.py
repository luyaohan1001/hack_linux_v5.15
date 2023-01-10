import sys
import gdb

# Update module path.
dir_ = '/home/luyaohan1001/Projects/hack_linux_v5.15/buildroot-2022.02.8/output/host/share/glib-2.0/gdb'
if not dir_ in sys.path:
    sys.path.insert(0, dir_)

from gobject_gdb import register
register (gdb.current_objfile ())
