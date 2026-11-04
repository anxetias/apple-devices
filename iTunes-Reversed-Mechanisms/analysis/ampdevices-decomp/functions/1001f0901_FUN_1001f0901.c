// name: FUN_1001f0901
// address: 1001f0901

undefined8 FUN_1001f0901(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0x80) = 0;
    uVar1 = FUN_1001f0322(param_1,param_1 + 0xb0,param_1 + 0x138,0,0,0,0,0,0);
    *(ulong *)(param_1 + 0x90) = (ulong)((int)uVar1 == 0);
    return uVar1;
  }
  return 0xffffff9a;
}

