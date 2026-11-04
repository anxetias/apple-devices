// name: FUN_10052defe
// address: 10052defe

undefined8 FUN_10052defe(long param_1)

{
  if (*(long **)(param_1 + 0x558) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x558) + 0x118))();
  }
  return 0;
}

