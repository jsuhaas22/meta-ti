OPTEE_TI_VERSION = ""
OPTEE_TI_VERSION:ti-soc = "${BPN}-ti-version.inc"

require ${OPTEE_TI_VERSION}

do_install:append() {
    install -d ${D}${libdir}
    bbplain "LS_OUTPUT"
    ls -al ${B}/*

    install -m 0644 ${B}/libckteec/libckteec.so.0.1.0 ${D}${libdir}/

    bbplain ">>>> SYMLINKing"
    ln -v -sf libckteec.so.0.1.0 ${D}${libdir}/libckteec.so.0.1
    ln -v -sf libckteec.so.0.1 ${D}${libdir}/libckteec.so.0
    ln -v -sf libckteec.so.0.1.0 ${D}${libdir}/libckteec.so
    bbplain ">>> DONE SYMLINKING"
}

FILES:${PN} += " ${libdir}/libckteec.so ${libdir}/libckteec.so.0 ${libdir}/libckteec.so.0.1 ${libdir}/libckteec.so.0.1.0"
FILES:${PN}-dev += " ${libdir}/libckteec.so"
