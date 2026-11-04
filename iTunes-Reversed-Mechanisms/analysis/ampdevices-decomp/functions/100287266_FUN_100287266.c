// name: FUN_100287266
// address: 100287266

undefined8 FUN_100287266(long param_1,undefined8 param_2,long param_3,char param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_78 [3];
  long local_60;
  
  uVar3 = 0xffffffce;
  if (((param_1 != 0) && (param_3 != 0)) && (param_5 != 0)) {
    FUN_1001d223d(param_1,local_78);
    if (param_4 != '\0') {
      if ((local_78[0] == 0x2dae2dae2dae2dae) &&
         (local_78[0] = *(long *)(param_3 + 0x10), local_78[0] == 0)) {
        FUN_100286dea(param_3);
        local_78[0] = *(long *)(param_3 + 0x10);
      }
      if (local_60 == 0x2dae2dae2dae2dae) {
        if (*(long *)(param_3 + 0x10) == 0) {
          FUN_100286dea(param_3);
        }
        local_60 = *(long *)(param_3 + 0x18);
      }
    }
    uVar1 = *(uint *)(param_1 + 4);
    uVar2 = uVar1 & 0xfffffcff | 0x100;
    if ((uVar1 >> 9 & 1) == 0) {
      uVar2 = uVar1;
    }
    uVar3 = FUN_1001d235e(local_78);
    uVar4 = FUN_1001d23b7(local_78);
    uVar3 = FUN_1001d12d8(uVar2,param_2,uVar3,uVar4,param_5);
  }
  return uVar3;
}

