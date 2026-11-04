// name: FUN_10016013b
// address: 10016013b

undefined4 FUN_10016013b(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffce;
  if (*param_1 == 0x62756666) {
    *(undefined1 *)(param_1 + 1) = 1;
    uVar1 = 0;
    if (*(char *)((long)param_1 + 5) == '\0') {
      uVar1 = FUN_1001602ae(param_1);
    }
    FUN_1001d5da8(*(undefined8 *)(param_1 + 2));
    if (*(long *)(param_1 + 4) != 0) {
      FUN_1001d7cd8();
    }
    if (*(long *)(param_1 + 0xc) != 0) {
      FUN_1001c64c1();
    }
    FUN_1001c62d9(param_1,0x48);
  }
  return uVar1;
}

