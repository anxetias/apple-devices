// name: FUN_100587c3c
// address: 100587c3c

void FUN_100587c3c(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int local_58 [2];
  char local_50;
  undefined8 local_40;
  
  iVar1 = FUN_1001cf3f5(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_1001d0b82(param_2);
    if (iVar1 != 0) {
      iVar4 = 0;
      do {
        iVar2 = FUN_1001cf495(param_2,iVar4,local_58);
        if (iVar2 == 0) {
          if (local_50 == '\0') {
            if (local_58[0] == 0x28) {
              lVar3 = FUN_100587ce4(*(undefined8 *)(param_1 + 8),local_58);
              if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x298) & 1) != 0)) {
                FUN_100584358(lVar3,0);
              }
            }
          }
          else {
            FUN_100587c3c(param_1,local_40);
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
    FUN_1001cf778(param_2);
  }
  return;
}

