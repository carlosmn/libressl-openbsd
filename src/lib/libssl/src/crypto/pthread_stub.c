#ifndef __APPLE__

#include <pthread.h>

#define WEAK_ALIAS(fun, alias) extern fun __attribute__((__weak__, __alias__(#alias)))

static int
_CRYPTO_zero_stub()
{
	return 0;
}

WEAK_ALIAS(int _pthread_rwlock_init(pthread_rwlock_t *restrict rwlock, const pthread_rwlockattr_t *restrict attr), _CRYPTO_zero_stub);

#endif
