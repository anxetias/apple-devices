// name: FUN_1001e9e65
// address: 1001e9e65

int FUN_1001e9e65(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x6c6f636b)) {
    iVar2 = _pthread_mutex_trylock((pthread_mutex_t *)(param_1 + 2));
    return iVar2;
  }
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    FUN_1006c23f5(uVar3);
  }
  FUN_1001782e9(0,0);
  return -0x1c;
}

