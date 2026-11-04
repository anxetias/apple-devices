// name: FUN_1004d0224
// address: 1004d0224

void FUN_1004d0224(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)FUN_1004cf9b5();
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)FUN_1005e386a(plVar1);
    (**(code **)(*plVar1 + 0xb8))(plVar1);
    (**(code **)(*plVar1 + 0xa0))(plVar1);
    plVar1 = plVar2;
  }
  *(undefined8 *)(param_1 + 0x1ba0) = 0;
  *(undefined8 *)(param_1 + 0x1ba8) = 0;
  if (*(long **)(param_1 + 0x1b98) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1b98) + 0xa0))();
    *(undefined8 *)(param_1 + 0x1b98) = 0;
  }
  if (*(long **)(param_1 + 0x1b90) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1b90) + 0xa0))();
    *(undefined8 *)(param_1 + 0x1b90) = 0;
  }
  FUN_100279190(param_1 + 0x2650);
  return;
}

