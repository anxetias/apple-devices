// name: FUN_1004ab44e
// address: 1004ab44e

void FUN_1004ab44e(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_50;
  long local_48;
  long *local_40;
  long *local_38;
  
  local_40 = param_3;
  if (*(char *)(param_1 + 0x778) == '\0') {
    *param_2 = *(long *)(param_1 + 0x200);
    lVar3 = *(long *)(param_1 + 0x208);
  }
  else {
    local_38 = param_2;
    lVar1 = FUN_1004aa784();
    if (lVar1 == 0) {
      lVar4 = -1;
      lVar3 = -1;
    }
    else {
      lVar3 = -1;
      lVar4 = -1;
      do {
        FUN_1004ab44e(lVar1,&local_50,&local_48);
        lVar2 = lVar4;
        if (lVar4 == -1) {
          lVar2 = 0;
        }
        if (local_50 != -1) {
          lVar4 = lVar2 + local_50;
        }
        lVar2 = lVar3;
        if (lVar3 == -1) {
          lVar2 = 0;
        }
        if (local_48 != -1) {
          lVar3 = lVar2 + local_48;
        }
        lVar1 = FUN_1004ab52d(lVar1);
      } while (lVar1 != 0);
    }
    *local_38 = lVar4;
  }
  *local_40 = lVar3;
  return;
}

