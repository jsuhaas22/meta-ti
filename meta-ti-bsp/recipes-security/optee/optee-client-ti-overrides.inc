EXTRA_OEMAKE:append:am62xx = " RPMB_EMU=1"
EXTRA_OEMAKE:append:am62px = " RPMB_EMU=1"
EXTRA_OEMAKE:append:am62ax = " RPMB_EMU=1"
EXTRA_OEMAKE:append:am62dx = " RPMB_EMU=1"

do_install:append:am62ax:am62dx:am62px:am62xx() {
   install -d ${D}${libdir}

   install -m 0644 ${B}/libckteec/libckteec.so.0.1.0 ${D}${libdir}/
   ln -v -sf libckteec.so.0.1.0 ${D}${libdir}/libckteec.so.0.1
   ln -v -sf libckteec.so.0.1 ${D}${libdir}/libckteec.so.0
   ln -v -sf libckteec.so.0 ${D}${libdir}/libckteec.so
}
