# This code depends on make tool being used
DEPFILES=$(wildcard $(addsuffix .d, ${OBJECTFILES} ${TESTOBJECTFILES}))
DEPFILES=$(wildcard $(addsuffix .d, ${OBJECTFILES} ${TESTOBJECTFILES}))
ifneq (${DEPFILES},)
ifneq (${DEPFILES},)
include ${DEPFILES}
include ${DEPFILES}
endif
endif
