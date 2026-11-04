// name: FUN_100650243
// address: 100650243

void FUN_100650243(long param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_10065028b(*(undefined8 *)(param_1 + 0x20));
  cVar1 = FUN_1004f4494(param_2,uVar2);
  FUN_100595344(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100650289. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),(int)cVar1,0);
  return;
}

