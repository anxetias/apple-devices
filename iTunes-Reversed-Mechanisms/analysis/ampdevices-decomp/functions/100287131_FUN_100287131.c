// name: FUN_100287131
// address: 100287131

undefined8 FUN_100287131(long param_1,ushort *param_2,ulong param_3,long param_4)

{
  undefined8 uVar1;
  ushort *puVar2;
  uint uVar3;
  ushort local_a;
  
  uVar1 = 0xffffffce;
  if (param_1 != 0 && param_4 != 0) {
    if (param_2 == (ushort *)0x0) {
      param_2 = &local_a;
    }
    else {
      uVar3 = (uint)param_3;
      while (uVar3 != 0) {
        if (0x1f < *param_2) goto LAB_100287170;
        param_2 = param_2 + 1;
        uVar3 = (int)param_3 - 1;
        param_3 = (ulong)uVar3;
      }
      param_3 = 0;
    }
LAB_100287170:
    puVar2 = *(ushort **)(param_1 + 0x18);
    uVar3 = *(uint *)(param_1 + 0x20) >> 1;
    if (1 < *(uint *)(param_1 + 0x20)) {
      do {
        if (0x1f < *puVar2) goto LAB_100287194;
        puVar2 = puVar2 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      uVar3 = 0;
    }
LAB_100287194:
    uVar1 = FUN_1001d0daf(*(undefined4 *)(param_1 + 4),param_2,param_3,puVar2,uVar3,0,0,param_4);
  }
  return uVar1;
}

