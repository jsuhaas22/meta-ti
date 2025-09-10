PV = "4.7.0+git"
SRCREV = "86846f4fdf14f25b50fd64a87888ca9fe85a9e2b"

SRC_URI:remove = " \
    file://0001-checkconf.mk-do-not-use-full-path-to-generate-guard-.patch \
    file://0001-arm64.h-fix-compile-error-with-Clang.patch \
    file://0002-libutils-zlib-fix-Clang-warnings.patch \
"
