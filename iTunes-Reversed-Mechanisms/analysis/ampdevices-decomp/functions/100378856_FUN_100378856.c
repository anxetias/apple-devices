// name: FUN_100378856
// address: 100378856

undefined4 FUN_100378856(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100378790();
  if (*(long **)(param_2 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x20) + 0x30))();
  }
  return uVar1;
}

