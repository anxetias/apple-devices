// name: FUN_1003ed7fa
// address: 1003ed7fa

bool FUN_1003ed7fa(long param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)(param_1 + 0x10);
  if (uVar1 < 0x1e) {
    if (uVar1 == 4) {
      uVar2 = 0;
    }
    else if (uVar1 == 0xb) {
      uVar2 = 3;
    }
    else {
LAB_1003ed829:
      uVar2 = 1;
    }
  }
  else if (uVar1 == 0x1e) {
    uVar2 = 5;
  }
  else {
    if (uVar1 != 0x20) goto LAB_1003ed829;
    uVar2 = 2;
  }
  uVar1 = *(ushort *)(param_2 + 0x10);
  if (uVar1 < 0x1e) {
    if (uVar1 == 4) {
      uVar3 = 0;
      goto LAB_1003ed874;
    }
    if (uVar1 == 0xb) {
      uVar3 = 3;
      goto LAB_1003ed874;
    }
  }
  else {
    if (uVar1 == 0x1e) {
      uVar3 = 5;
      goto LAB_1003ed874;
    }
    if (uVar1 == 0x20) {
      uVar3 = 2;
      goto LAB_1003ed874;
    }
  }
  uVar3 = 1;
LAB_1003ed874:
  return uVar2 < uVar3;
}

