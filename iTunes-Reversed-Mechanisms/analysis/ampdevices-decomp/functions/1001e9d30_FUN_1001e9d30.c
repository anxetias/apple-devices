// name: FUN_1001e9d30
// address: 1001e9d30

int FUN_1001e9d30(pthread_mutex_t *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = _pthread_mutex_init(param_1,(pthread_mutexattr_t *)0x0);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c2231(iVar2,uVar3);
    }
  }
  return iVar2;
}

