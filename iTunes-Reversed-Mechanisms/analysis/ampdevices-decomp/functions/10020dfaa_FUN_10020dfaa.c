// name: FUN_10020dfaa
// address: 10020dfaa

void FUN_10020dfaa(long param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_1001b7a50(param_1 + 0x1a8);
  plVar1 = *(long **)(param_1 + 400);
  if (plVar1 == (long *)(param_1 + 0x170)) {
    lVar2 = 0x20;
LAB_10020dfe3:
    (**(code **)(*plVar1 + lVar2))();
  }
  else {
    lVar2 = 0x28;
    if (plVar1 != (long *)0x0) goto LAB_10020dfe3;
  }
  plVar1 = *(long **)(param_1 + 0x160);
  if (plVar1 == (long *)(param_1 + 0x140)) {
    lVar2 = 0x20;
LAB_10020e00d:
    (**(code **)(*plVar1 + lVar2))();
  }
  else {
    lVar2 = 0x28;
    if (plVar1 != (long *)0x0) goto LAB_10020e00d;
  }
  plVar1 = *(long **)(param_1 + 0x120);
  if (plVar1 == (long *)(param_1 + 0x100)) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_10020e03d;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10020e03d:
  FUN_1001b7a50(param_1 + 0xe8);
  FUN_1001b7a50(param_1 + 200);
  FUN_1001b7a50(param_1 + 0xb8);
  FUN_1001b7a50(param_1 + 0xa0);
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

