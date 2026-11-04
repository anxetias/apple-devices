// name: FUN_1003a2686
// address: 1003a2686

void FUN_1003a2686(long param_1,uint param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  param_2 = param_2 | *(uint *)(param_1 + 0xf4);
  if (*(uint *)(param_1 + 0xf4) != param_2) {
    *(uint *)(param_1 + 0xf4) = param_2;
    if (*(long *)(param_1 + 0x48) != 0) {
      pbVar1 = (byte *)(*(long *)(param_1 + 0x48) + 0x1bb1);
      *pbVar1 = *pbVar1 | 8;
      FUN_10039ffa2(param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      uVar3 = FUN_1003a2088(param_1);
      FUN_100316867(uVar2,uVar3,1);
      return;
    }
  }
  return;
}

