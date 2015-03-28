#ifndef __APPLE__

#include <pthread.h>

#define WEAK_ALIAS(fun, alias) extern fun __attribute__((__weak__, __alias__(#alias)))

static int
_CRYPTO_zero_stub()
{
	return 0;
}

WEAK_ALIAS(int pthread_rwlock_init(pthread_rwlock_t *, const pthread_rwlockattr_t *), _CRYPTO_zero_stub);
WEAK_ALIAS(int pthread_rwlock_rdlock(pthread_rwlock_t *), _CRYPTO_zero_stub);
WEAK_ALIAS(int pthread_rwlock_wrlock(pthread_rwlock_t *), _CRYPTO_zero_stub);
WEAK_ALIAS(int pthread_rwlock_unlock(pthread_rwlock_t *), _CRYPTO_zero_stub);

#endif
