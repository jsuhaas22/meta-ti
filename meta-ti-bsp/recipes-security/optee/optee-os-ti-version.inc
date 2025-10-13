PV = "4.7.0+git"
SRCREV = "53247bce154237d242c69741922a589a63e8cb99"
SRC_URI = "git://github.com/jsuhaas22/optee_os.git;branch=addr-changed;protocol=https"
SRC_URI:remove = " \
    file://0001-checkconf.mk-do-not-use-full-path-to-generate-guard-.patch \
    file://0001-arm64.h-fix-compile-error-with-Clang.patch \
    file://0002-libutils-zlib-fix-Clang-warnings.patch \
"
