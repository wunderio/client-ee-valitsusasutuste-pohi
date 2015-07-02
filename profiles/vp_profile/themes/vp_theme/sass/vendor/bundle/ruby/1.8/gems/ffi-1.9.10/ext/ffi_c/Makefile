
SHELL = /bin/sh

#### Start of system configuration section. ####

srcdir = .
topdir = /usr/lib64/ruby/1.8/x86_64-linux
hdrdir = $(topdir)
VPATH = $(srcdir):$(topdir):$(hdrdir)
prefix = $(DESTDIR)/usr
exec_prefix = $(DESTDIR)/usr
oldincludedir = $(DESTDIR)/usr/include
mandir = $(DESTDIR)/usr/share/man
pdfdir = $(docdir)
htmldir = $(docdir)
sitelibdir = $(sitedir)/$(ruby_version)
dvidir = $(docdir)
bindir = $(DESTDIR)/usr/bin
localstatedir = $(DESTDIR)/var
docdir = $(datarootdir)/doc/$(PACKAGE)
includedir = $(DESTDIR)/usr/include
rubylibdir = $(vendordir)/$(ruby_version)
libexecdir = $(DESTDIR)/usr/libexec
datarootdir = $(prefix)/share
libdir = $(DESTDIR)/usr/lib64
sharedstatedir = $(DESTDIR)/var/lib
sysconfdir = $(DESTDIR)/etc
vendordir = $(DESTDIR)/usr/lib/ruby
sitearchdir = $(libdir)/ruby/site_ruby/$(ruby_version)/$(sitearch)
vendorlibdir = $(vendordir)/$(ruby_version)
vendorarchdir = $(libdir)/ruby/$(ruby_version)/$(sitearch)
psdir = $(docdir)
localedir = $(datarootdir)/locale
archdir = $(libdir)/ruby/$(ruby_version)/$(sitearch)
sitedir = $(DESTDIR)/usr/lib/ruby/site_ruby
datadir = $(DESTDIR)/usr/share
sbindir = $(DESTDIR)/usr/sbin
infodir = $(DESTDIR)/usr/share/info

CC = gcc
LIBRUBY = $(LIBRUBY_SO)
LIBRUBY_A = lib$(RUBY_SO_NAME)-static.a
LIBRUBYARG_SHARED = -l$(RUBY_SO_NAME)
LIBRUBYARG_STATIC = -l$(RUBY_SO_NAME)-static

RUBY_EXTCONF_H = extconf.h
CFLAGS   =  -fPIC -O2 -g -pipe -Wall -Wp,-D_FORTIFY_SOURCE=2 -fexceptions -fstack-protector --param=ssp-buffer-size=4 -m64 -mtune=generic -fno-strict-aliasing  -fPIC $(cflags) 
INCFLAGS = -I. -I. -I/usr/lib64/ruby/1.8/x86_64-linux -I.
DEFS     = 
CPPFLAGS = -DRUBY_EXTCONF_H=\"$(RUBY_EXTCONF_H)\"   
CXXFLAGS = $(CFLAGS) 
ldflags  = -L.  -rdynamic -Wl,-export-dynamic
dldflags = 
archflag = 
DLDFLAGS = $(ldflags) $(dldflags) $(archflag)
LDSHARED = $(CC) -shared
AR = ar
EXEEXT = 

RUBY_INSTALL_NAME = ruby
RUBY_SO_NAME = ruby
arch = x86_64-linux
sitearch = x86_64-linux
ruby_version = 1.8
ruby = /usr/bin/ruby
RUBY = $(ruby)
RM = rm -f
MAKEDIRS = mkdir -p
INSTALL = /usr/bin/install -c
INSTALL_PROG = $(INSTALL) -m 0755
INSTALL_DATA = $(INSTALL) -m 644
COPY = cp

#### End of system configuration section. ####

preload = 

libpath = . $(libdir)
LIBPATH =  -L. -L$(libdir)
DEFFILE = 

CLEANFILES = mkmf.log
DISTCLEANFILES = 

extout = 
extout_prefix = 
target_prefix = 
LOCAL_LIBS = 
LIBS = $(LIBRUBYARG_SHARED)  -lpthread -lrt -ldl -lcrypt -lm   -lc
SRCS = LongDouble.c StructByReference.c MethodHandle.c Pointer.c LastError.c ffi.c StructByValue.c MemoryPointer.c ClosurePool.c Call.c StructLayout.c Types.c AbstractMemory.c Buffer.c ArrayType.c FunctionInfo.c Thread.c Platform.c MappedType.c DataConverter.c Type.c Function.c Struct.c Variadic.c DynamicLibrary.c
OBJS = LongDouble.o StructByReference.o MethodHandle.o Pointer.o LastError.o ffi.o StructByValue.o MemoryPointer.o ClosurePool.o Call.o StructLayout.o Types.o AbstractMemory.o Buffer.o ArrayType.o FunctionInfo.o Thread.o Platform.o MappedType.o DataConverter.o Type.o Function.o Struct.o Variadic.o DynamicLibrary.o
TARGET = ffi_c
DLLIB = $(TARGET).so
EXTSTATIC = 
STATIC_LIB = 

BINDIR        = $(bindir)
RUBYCOMMONDIR = $(sitedir)$(target_prefix)
RUBYLIBDIR = /home/devel/vap/profiles/vp_profile/themes/vp_theme/sass/vendor/bundle/ruby/1.8/gems/ffi-1.9.10/lib$(target_prefix)
RUBYARCHDIR = /home/devel/vap/profiles/vp_profile/themes/vp_theme/sass/vendor/bundle/ruby/1.8/gems/ffi-1.9.10/lib$(target_prefix)

TARGET_SO     = $(DLLIB)
CLEANLIBS     = $(TARGET).so $(TARGET).il? $(TARGET).tds $(TARGET).map
CLEANOBJS     = *.o *.a *.s[ol] *.pdb *.exp *.bak

all:		$(DLLIB)
static:		$(STATIC_LIB)

clean:
		@-$(RM) $(CLEANLIBS) $(CLEANOBJS) $(CLEANFILES)

distclean:	clean
		@-$(RM) Makefile $(RUBY_EXTCONF_H) conftest.* mkmf.log
		@-$(RM) core ruby$(EXEEXT) *~ $(DISTCLEANFILES)

realclean:	distclean
install: install-so install-rb

install-so: $(RUBYARCHDIR)
install-so: $(RUBYARCHDIR)/$(DLLIB)
$(RUBYARCHDIR)/$(DLLIB): $(DLLIB)
	$(INSTALL_PROG) $(DLLIB) $(RUBYARCHDIR)
install-rb: pre-install-rb install-rb-default
install-rb-default: pre-install-rb-default
pre-install-rb: Makefile
pre-install-rb-default: Makefile
$(RUBYARCHDIR):
	$(MAKEDIRS) $@

site-install: site-install-so site-install-rb
site-install-so: install-so
site-install-rb: install-rb

.SUFFIXES: .c .m .cc .cxx .cpp .C .o

.cc.o:
	$(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) -c $<

.cxx.o:
	$(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) -c $<

.cpp.o:
	$(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) -c $<

.C.o:
	$(CXX) $(INCFLAGS) $(CPPFLAGS) $(CXXFLAGS) -c $<

.c.o:
	$(CC) $(INCFLAGS) $(CPPFLAGS) $(CFLAGS) -c $<

$(DLLIB): $(OBJS) Makefile
	@-$(RM) $@
	$(LDSHARED) -o $@ $(OBJS) $(LIBPATH) $(DLDFLAGS) $(LOCAL_LIBS) $(LIBS)



$(OBJS): ruby.h defines.h $(RUBY_EXTCONF_H)
LIBFFI_HOST=--host=x86_64-redhat-linux-gnu
include ${srcdir}/libffi.mk
