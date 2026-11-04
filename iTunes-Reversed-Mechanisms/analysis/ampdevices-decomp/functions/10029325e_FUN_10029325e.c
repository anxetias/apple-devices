// name: FUN_10029325e
// address: 10029325e

int FUN_10029325e(long param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined4 local_50 [2];
  undefined1 local_48;
  undefined8 local_44;
  undefined8 local_38;
  
  iVar1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 2);
  *(undefined1 *)(param_2 + 8) = 0;
  if (((uint)param_2[4] >> 0xc & 1) == 0) {
    plVar6 = (long *)(param_1 + 0x18);
    do {
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) goto LAB_1002932dd;
      cVar3 = FUN_1003b6f88(*(undefined4 *)(plVar6 + 2),(long)plVar6 + 0x14,iVar1,uVar2);
    } while (cVar3 == '\0');
    lVar5 = plVar6[0x192];
    if (lVar5 != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
      *(long *)(param_2 + 6) = lVar5;
      *(undefined1 *)(param_2 + 8) = *(undefined1 *)(plVar6 + 0x193);
      *(undefined8 *)(param_2 + 9) = *(undefined8 *)((long)plVar6 + 0xc9c);
      return 0;
    }
  }
LAB_1002932dd:
  if ((((iVar1 == 0x44574e4c) || (iVar1 == 0x4d46494c)) || (iVar4 = -0x32, iVar1 == 0x46494c45)) &&
     (iVar4 = FUN_1002934ca(iVar1,uVar2,0), iVar4 == 0)) {
    iVar4 = FUN_1005d38c7(0,0,param_2 + 6);
    if (iVar4 == 0) {
      FUN_1001c62d9(local_50,0x20);
      lVar5 = FUN_1003ae1f8();
      if (lVar5 == 0) {
        iVar4 = -0x6c;
      }
      else {
        local_50[0] = 0x61727477;
        local_48 = 1;
        local_44 = 0xffff0000;
        local_38 = *(undefined8 *)(param_2 + 6);
        iVar4 = FUN_10029650a(iVar1,uVar2,lVar5,lVar5 + 0x1660,0,local_50,0,0,0,0,0,0);
        if (iVar4 == 0) {
          *(undefined1 *)(param_2 + 8) = local_48;
          *(undefined8 *)(param_2 + 9) = local_44;
        }
        FUN_1003ae783(lVar5 + 0x4ca8);
        FUN_1001c64c1(lVar5);
      }
    }
  }
  return iVar4;
}

