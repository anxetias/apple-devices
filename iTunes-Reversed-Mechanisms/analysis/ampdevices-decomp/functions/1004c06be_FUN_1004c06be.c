// name: FUN_1004c06be
// address: 1004c06be

undefined4 FUN_1004c06be(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_1003c2e5c();
  if (((char)uVar2 != '\0') && (plVar1 = *(long **)(param_1 + 0x550), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x110))(plVar1,*(undefined4 *)(param_1 + 0x1c),param_1 + 0x20);
  }
  return uVar2;
}

