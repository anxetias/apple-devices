// name: FUN_100585f87
// address: 100585f87

int FUN_100585f87(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short local_78 [16];
  undefined4 local_58 [2];
  char local_50;
  undefined8 local_40;
  
  iVar2 = FUN_1001cf3f5();
  if (iVar2 == 0) {
    iVar2 = FUN_1001d0b82(param_1);
    iVar4 = 0;
    if (iVar2 != 0) {
      do {
        iVar3 = FUN_1001cf495(param_1,iVar4,local_58);
        if (iVar3 == 0) {
          if (local_50 == '\0') {
            FUN_10031c728(local_58[0],local_78);
            if (local_78[0] == 8) goto LAB_100586009;
          }
          else {
            cVar1 = FUN_100585f87(local_40);
            if (cVar1 != '\0') {
LAB_100586009:
              iVar4 = 1;
              goto LAB_10058600c;
            }
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar2 != iVar4);
      iVar4 = 0;
    }
LAB_10058600c:
    FUN_1001cf778(param_1);
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}

