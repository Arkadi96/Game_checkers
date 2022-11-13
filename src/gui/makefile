# The source files under the project.
cpp_files := \
	main_window.cpp \

# The header files under the project, which are supposed to be used by other
# projects.
public_headers := \
	main_window.hpp \

# Building QT project.
# TODO: Add detailed comments.
qt_headers := \
	main_window.hpp \

moc_flags :=

qt_ui_files :=

uic_flags :=

# The compiler flags can be updated/overwritten for the project.
#
# Example:
# compiler_flags += -s -Wno-long-long -fno-strict-aliasing
# compiler_flags := $(filter-out -Wshadow -Wconversion, $(compiler_flags))
#
# Note: It is not recommended to overwrite the value (don't use := operator).
#
compiler_flags += -isystem/usr/include/x86_64-linux-gnu/qt5/QtWidgets -isystem/usr/include/x86_64-linux-gnu/qt5/QtGui -isystem/usr/include/x86_64-linux-gnu/qt5/QtCore -isystem/usr/include/x86_64-linux-gnu/qt5

# The linker flags can be updated/overwritten for the project
#
# Example:
# linker_flags += -i
#
# Note: It is not recommended to overwrite the value (don't use := operator).
#
linker_flags += -lstdc++

# The libraries which should be linked to the current project. The link type is
# specified as a global parameter, except the libraries, which are built as a
# either shared or static library. For those libraries the appropriate linking
# type is selected, e.g. if current project is being linked to lib_project,
# which is static library, then current project will be always linked to
# lib_project statically, despite global link type is shared or static.
#
# Example:
# libs := project1 tcl gtkmm-2.4
#
# Note: Specifying the library version is not supported.
#
libs := \
	controller \
	Qt5Widgets \
	Qt5Core \
	Qt5Gui \
	Qt5PrintSupport \

# Library version
#
# Note: If the library version is not specified, then the program_version is
# taken for this library.
#
lib_version :=

# For each project either executable file or a library can be generated.
#
# To generate the executable file the exe.mk should be included, which is
# located in mkf directory.
#
# Two types of libraries can be generated for each project:
#       dynamic (shared objects) and static (archives).
#
# To generate the shared object the dynamic.mk should be included here.
# To generate the archive the static.mk file should be included here.
# To generate either (shared object or archive) depending on the global link
# type the lib.mk should be included.
#
# Note that the generated library will be located in local $lib_dir directory
# (by default $(project_root)/lib/).
#

include $(mkf_path)/lib.mk
