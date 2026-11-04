// name: FUN_1001db478
// address: 1001db478

void FUN_1001db478(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 in_RAX;
  long lVar4;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulong)in_RAX >> 0x20);
  if ((*(char *)(param_1 + 0x952) != '\0') && (*(long *)(param_1 + 0x9b0) == 0)) {
    lVar4 = FUN_1001ead5c(param_1 + 0x998);
    if ((lVar4 == 0) &&
       ((*(char *)(param_1 + 0x950) == '\0' && (*(char *)(param_1 + 0x9d0) == '\0')))) {
      lVar4 = FUN_1001ead5c(param_1 + 0x9b8);
      if (((lVar4 == 0) || (*(int *)(lVar4 + 0x10) == 0x46696c6c)) &&
         (lVar4 = *(long *)(param_1 + 0x988), lVar4 != 0)) {
        FUN_1001c2502(param_1 + 0x988,lVar4);
        lVar1 = lVar4 + 0x80;
        FUN_1001c62d9(lVar1,0x98);
        uVar3 = *(undefined8 *)(lVar4 + 8);
        *(undefined8 *)(lVar4 + 0x10) = uVar3;
        *(undefined8 *)(lVar4 + 0x18) = 0;
        iVar2 = *(int *)(param_1 + 0x98);
        if (iVar2 == 4) {
          *(code **)(lVar4 + 0x90) = FUN_1001db62a;
          *(long *)(lVar4 + 0x98) = lVar4;
          *(long *)(param_1 + 0x9b0) = lVar4;
          FUN_1001dadc9(param_1 + 0x4c0,uVar3,*(undefined8 *)(lVar4 + 0x140),0,lVar1);
          return;
        }
        if (iVar2 == 2) {
          *(code **)(lVar4 + 0x90) = FUN_1001db5f7;
          *(long *)(lVar4 + 0x98) = lVar4;
          *(long *)(param_1 + 0x9b0) = lVar4;
          FUN_1001dacb7(param_1 + 0x4c0,uVar3,*(undefined8 *)(lVar4 + 0x140),0,lVar1);
          return;
        }
        if (iVar2 == 1) {
          *(long *)(param_1 + 0x9b0) = lVar4;
          FUN_100187ef9(*(undefined8 *)(param_1 + 0x4c0),*(undefined8 *)(lVar4 + 0x140),uVar3,lVar1,
                        FUN_1001d4b5f,lVar4 + 0x20,CONCAT44(uVar5,1));
        }
      }
    }
  }
  return;
}

