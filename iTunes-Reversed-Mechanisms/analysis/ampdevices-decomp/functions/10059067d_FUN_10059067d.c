// name: FUN_10059067d
// address: 10059067d

ulong FUN_10059067d(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(short *)(param_2 + 0x38) < 0) {
    param_4 = 0;
  }
  else {
    iVar1 = FUN_1001e21dd();
    if ((iVar1 == 0) && (iVar1 = *(int *)(param_2 + 0x30), iVar1 == 0)) {
      param_4 = 0;
    }
    else {
      iVar3 = 0x4d503420;
      piVar2 = &DAT_100759494;
      do {
        param_4 = CONCAT71((int7)(param_4 >> 8),iVar1 == iVar3);
        if (iVar1 == iVar3) break;
        iVar3 = *piVar2;
        piVar2 = piVar2 + 1;
      } while (iVar3 != 0);
    }
  }
  return param_4 & 0xffffffff;
}

