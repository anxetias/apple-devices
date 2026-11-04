// name: FUN_1001ea1df
// address: 1001ea1df

int FUN_1001ea1df(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x636f6e64)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006c2955(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x1c;
  }
  else {
    iVar2 = _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 2));
    iVar3 = _pthread_cond_destroy((pthread_cond_t *)(param_1 + 0x12));
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006c28e9(iVar3,uVar4);
      }
    }
    if (iVar3 == 0) {
      iVar3 = iVar2;
    }
    if (iVar2 != 0) {
      iVar3 = iVar2;
    }
    FUN_1001c62d9(param_1,0x78);
  }
  return iVar3;
}

