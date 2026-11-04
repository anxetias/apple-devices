// name: FUN_1001e9de0
// address: 1001e9de0

int FUN_1001e9de0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6c6f636b)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c237f(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x1c;
  }
  else {
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 2));
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006c2313(iVar2,uVar3);
      }
    }
  }
  return iVar2;
}

