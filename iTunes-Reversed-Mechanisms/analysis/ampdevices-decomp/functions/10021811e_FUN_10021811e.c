// name: FUN_10021811e
// address: 10021811e

void FUN_10021811e(long param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_1001b7a50(param_1 + 0x1d0);
  FUN_1001b7a50(param_1 + 0x1c0);
  plVar1 = *(long **)(param_1 + 0x1b0);
  if (plVar1 == (long *)(param_1 + 400)) {
    lVar2 = 0x20;
LAB_100218163:
    (**(code **)(*plVar1 + lVar2))();
  }
  else {
    lVar2 = 0x28;
    if (plVar1 != (long *)0x0) goto LAB_100218163;
  }
  plVar1 = *(long **)(param_1 + 0x170);
  if (plVar1 == (long *)(param_1 + 0x150)) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_100218193;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_100218193:
  FUN_1001b7a50(param_1 + 0x120);
  FUN_1001b7a50(param_1 + 0xf8);
  FUN_1001b7a50(param_1 + 0xe8);
  FUN_1001b7a50(param_1 + 0xd8);
  FUN_1001b7a50(param_1 + 200);
  FUN_1001b7a50(param_1 + 0xb8);
  FUN_1001b7a50(param_1 + 0xa8);
  FUN_1001b7a50(param_1 + 0x98);
  FUN_1001b7a50(param_1 + 0x88);
  FUN_1001b7a50(param_1 + 0x78);
  FUN_1001b7a50(param_1 + 0x68);
  FUN_1001b7a50(param_1 + 0x58);
  FUN_1001b7a50(param_1 + 0x48);
  FUN_1001b7a50(param_1 + 0x38);
  FUN_1001b7a50(param_1 + 0x28);
  FUN_1001b7a50(param_1 + 0x18);
  FUN_1001b7a50(param_1 + 8);
  return;
}

