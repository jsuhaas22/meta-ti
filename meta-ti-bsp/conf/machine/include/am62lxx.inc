require conf/machine/include/k3.inc
SOC_FAMILY:append = ":am62lxx"

MACHINE_FEATURES += "screen"
MACHINE_FEATURES:remove = "optee-ftpm"

TFA_BOARD = "am62l"
TFA_K3_SYSTEM_SUSPEND = "1"

OPTEEMACHINE = "k3-am62lx"
