// name: FUN_1005746c6
// address: 1005746c6

undefined4 FUN_1005746c6(long *param_1,undefined8 *param_2)

{
  uint in_EAX;
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uStack_18;
  
  uStack_18 = (ulong)in_EAX;
  uVar1 = 0;
  if ((param_2 != (undefined8 *)0x0) && (*(int *)(param_2 + 2) != 0)) {
    uVar2 = (**(code **)(*param_1 + 0x70))(param_1,*param_2);
    FUN_1002b8303(uVar2,(long)&uStack_18 + 4);
    uVar1 = uStack_18._4_4_;
  }
  return uVar1;
}

