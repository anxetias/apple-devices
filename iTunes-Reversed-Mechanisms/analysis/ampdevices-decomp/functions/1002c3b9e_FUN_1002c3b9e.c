// name: FUN_1002c3b9e
// address: 1002c3b9e

void FUN_1002c3b9e(long *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  long local_70 [6];
  long local_40;
  ushort local_32;
  
  *param_1 = 0;
  iVar2 = FUN_10023ea92(param_2,&local_32);
  if ((iVar2 == 0) && (local_32 != 0)) {
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 1;
      iVar2 = FUN_10023f756(param_2,uVar3,0x4f69646c,local_70);
      if (((iVar2 == 0) && (local_70[0] == 8)) &&
         (iVar2 = FUN_10023ebfe(param_2,uVar3,0x4f69646c,param_1,local_70), iVar2 == 0)) {
        piVar1 = (int *)*param_1;
        if (piVar1 == (int *)0x0) {
          return;
        }
        if (*piVar1 != 0x4f4c5354) {
          return;
        }
        if (piVar1[1] == 0) {
          return;
        }
        piVar1[1] = piVar1[1] + 1;
        return;
      }
    } while (uVar3 < local_32);
    if (local_32 != 0) {
      uVar3 = 0;
      do {
        uVar3 = uVar3 + 1;
        iVar2 = FUN_10023f756(param_2,uVar3,0x4f737063,&local_40);
        if (((iVar2 == 0) && (local_40 == 0x2c)) &&
           (iVar2 = FUN_10023ebfe(param_2,uVar3,0x4f737063,local_70,&local_40), iVar2 == 0)) {
          if (*param_1 == 0) {
            FUN_100594c77(local_70,param_1);
          }
          else {
            FUN_100594f1e(*param_1,local_70,0,0);
          }
        }
      } while (uVar3 < local_32);
    }
  }
  return;
}

