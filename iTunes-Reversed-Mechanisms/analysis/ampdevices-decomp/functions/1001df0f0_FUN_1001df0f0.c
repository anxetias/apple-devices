// name: FUN_1001df0f0
// address: 1001df0f0

void FUN_1001df0f0(byte *param_1,byte *param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  if ((param_1 != (byte *)0x0 && param_2 != (byte *)0x0) && (*param_1 != 0)) {
    uVar1 = (uint)*param_1 + (uint)*param_2;
    if (0xfe < uVar1) {
      uVar1 = 0xff;
    }
    for (pbVar2 = param_2 + (ulong)*param_2 + 1; pbVar2 <= param_2 + uVar1; pbVar2 = pbVar2 + 1) {
      param_1 = param_1 + 1;
      *pbVar2 = *param_1;
    }
    *param_2 = (byte)uVar1;
  }
  return;
}

