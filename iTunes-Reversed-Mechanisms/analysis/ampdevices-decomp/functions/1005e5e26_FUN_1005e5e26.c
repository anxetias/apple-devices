// name: FUN_1005e5e26
// address: 1005e5e26

void FUN_1005e5e26(long *param_1,uint param_2)

{
  byte *pbVar1;
  long lVar2;
  undefined1 uVar3;
  
  param_2 = param_2 | *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x10) != param_2) {
    *(uint *)(param_1 + 0x10) = param_2;
    if (param_1[1] != 0) {
      pbVar1 = (byte *)(param_1[1] + 0x1bb1);
      *pbVar1 = *pbVar1 | 0x20;
      (**(code **)(*param_1 + 0x80))(param_1);
      lVar2 = param_1[1];
      uVar3 = FUN_1005e4b52(param_1);
      FUN_100316867(lVar2,uVar3,1);
      return;
    }
  }
  return;
}

