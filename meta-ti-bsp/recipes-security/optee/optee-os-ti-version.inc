PV = "4.9.0+git"
SRCREV = "3322f1326f141ef3f41ac7a1c1e08ca23a869fd4"
SRC_URI:remove = " \
    file://0001-checkconf.mk-do-not-use-full-path-to-generate-guard-.patch \
    file://0001-arm64.h-fix-compile-error-with-Clang.patch \
    file://0002-libutils-zlib-fix-Clang-warnings.patch \
"
