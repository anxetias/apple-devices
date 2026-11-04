// name: FUN_1004bfd78
// address: 1004bfd78

long FUN_1004bfd78(long param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_40;
  long local_38;
  
  local_38 = -1;
  cVar1 = FUN_1004aa626();
  if ((cVar1 == '\0') || (*(char *)(param_1 + 0x778) == '\0')) {
    if (*(long *)(param_1 + 0x160) == 0) {
      lVar5 = -1;
    }
    else {
      lVar5 = FUN_1001cebfc(*(long *)(param_1 + 0x160),&local_38);
    }
  }
  else {
    lVar2 = FUN_1004aa784(param_1);
    if (lVar2 == 0) {
      lVar5 = -1;
    }
    else {
      lVar4 = -1;
      lVar5 = -1;
      do {
        lVar3 = FUN_1004bfd78(lVar2,&local_40);
        cVar1 = FUN_1001ced4c(local_40,lVar3);
        if (cVar1 == '\0') {
          if (lVar4 == -1) {
            lVar4 = 0;
          }
          lVar4 = lVar4 + local_40;
          if (lVar5 == -1) {
            lVar5 = 0;
          }
          lVar5 = lVar5 + lVar3;
          local_38 = lVar4;
        }
        lVar2 = FUN_1004ab52d(lVar2);
      } while (lVar2 != 0);
    }
  }
  if (param_2 != (long *)0x0) {
    *param_2 = local_38;
  }
  return lVar5;
}

