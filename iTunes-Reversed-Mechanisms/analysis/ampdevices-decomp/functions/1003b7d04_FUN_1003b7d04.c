// name: FUN_1003b7d04
// address: 1003b7d04

void FUN_1003b7d04(undefined8 param_1,ulong param_2)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong local_18;
  uint local_c;
  
  if (param_2 >> 0x20 == 0) {
    uVar2 = (uint)param_2;
    local_c = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    puVar1 = (ulong *)&local_c;
    uVar3 = 4;
  }
  else {
    local_18 = param_2 >> 0x38 | (param_2 & 0xff000000000000) >> 0x28 |
               (param_2 & 0xff0000000000) >> 0x18 | (param_2 & 0xff00000000) >> 8 |
               (param_2 & 0xff000000) << 8 | (param_2 & 0xff0000) << 0x18 |
               (param_2 & 0xff00) << 0x28 | param_2 << 0x38;
    puVar1 = &local_18;
    uVar3 = 8;
  }
  FUN_1001cacbc(param_1,1,0x15,puVar1,uVar3);
  return;
}

