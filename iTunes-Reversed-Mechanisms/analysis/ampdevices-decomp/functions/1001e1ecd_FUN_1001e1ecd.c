// name: FUN_1001e1ecd
// address: 1001e1ecd

char * FUN_1001e1ecd(long param_1,long *param_2,long *param_3)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006bbc49(uVar2);
    }
    lVar5 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    for (lVar5 = 0; cVar1 = *(char *)(param_1 + lVar5), cVar1 != '\0'; lVar5 = lVar5 + 1) {
      if (cVar1 == '\n') {
        pcVar3 = (char *)(param_1 + lVar5 + 1);
        goto LAB_1001e1f46;
      }
      if (cVar1 == '\r') {
        pcVar4 = (char *)(param_1 + lVar5 + 1);
        pcVar3 = (char *)(param_1 + 2 + lVar5);
        if (*pcVar4 != '\n') {
          pcVar3 = pcVar4;
        }
        goto LAB_1001e1f46;
      }
    }
  }
  pcVar3 = (char *)0x0;
LAB_1001e1f46:
  if (param_2 != (long *)0x0) {
    *param_2 = param_1;
  }
  if (param_3 != (long *)0x0) {
    *param_3 = lVar5;
  }
  return pcVar3;
}

