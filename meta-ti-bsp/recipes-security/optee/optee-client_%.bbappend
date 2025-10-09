OPTEE_TI_VERSION = ""
OPTEE_TI_VERSION:ti-soc = "${BPN}-ti-version.inc"

require ${OPTEE_TI_VERSION}

do_install:append() {
    install -d ${D}${libdir}
    bbplain "LS_OUTPUT"
    ls -al ${B}/*


    cp -Pp ${B}/libckteec/libckteec.so* ${D}${libdir}/
}

FILES:${PN} += "${libdir}/libckteec.so ${libdir}/libckteec.so.0 ${libdir}/libckteec.so.0.1 ${libdir}/libckteec.so.0.1.0"