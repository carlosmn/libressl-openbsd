#ifndef __APPLE__

#include <pthread.h>

#define WEAK_ALIAS(fun, alias) extern fun __attribute__((__weak__, __alias__(#alias)))

static int
_CRYPTO_zero_stub()
{
	return 0;
}

WEAK_ALIAS(int pthread_mutex_lock(pthread_mutex_t *), _CRYPTO_zero_stub);
WEAK_ALIAS(int pthread_mutex_unlock(pthread_mutex_t *), _CRYPTO_zero_stub);

#endif
