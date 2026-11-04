// name: FUN_1001ea0b9
// address: 1001ea0b9

int FUN_1001ea0b9(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == (int *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c2873(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    if (*param_1 == 0x636f6e64) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3);
      if (cVar1 != '\0') {
        FUN_1006c2725(uVar3);
      }
      FUN_1001782e9(0);
    }
    iVar2 = -0x32;
    if (((ulong)param_1 & 3) == 0) {
      iVar2 = FUN_1001e9d30((pthread_mutex_t *)(param_1 + 2));
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          iVar2 = _pthread_cond_init((pthread_cond_t *)(param_1 + 0x12),(pthread_condattr_t *)0x0);
          if (iVar2 != -0x80) {
            if (iVar2 == 0) {
              *param_1 = 0x636f6e64;
              return 0;
            }
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              FUN_1006c279b(iVar2,uVar3);
            }
          }
          _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 2));
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_1006c2807(iVar2,uVar3);
          }
        }
      }
    }
  }
  return iVar2;
}

