WORKFLOW_MACHINE_NAME ??= ""

ZYNQ_MACHINE_CONF = "${@bb.utils.contains('WRL_ZYNQ_BOOTBIN_TARGET', 'zc702', 'zynq-zc702-sdt-full.conf', 'zc706-zynq7.conf', d)}"

MACHINE_CONF = "${@'${WORKFLOW_MACHINE_NAME}.conf' if d.getVar("WORKFLOW_MACHINE_NAME") != "" else '${ZYNQ_MACHINE_CONF}'}"

require conf/machine/${MACHINE_CONF}
