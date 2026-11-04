// name: FUN_1001da5d0
// address: 1001da5d0

undefined8 FUN_1001da5d0(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b7545(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    FUN_1001e9de0();
    if (*(long *)(param_1 + 0x1d8) != 0) {
      FUN_100172980(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10),*(long *)(param_1 + 0x1d8),
                    *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118);
      FUN_10017060f(*(undefined8 *)(param_1 + 0x1d8));
      *(undefined8 *)(param_1 + 0x1d8) = 0;
    }
    FUN_10017060f(*(undefined8 *)(param_1 + 0x1e0));
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    FUN_10017060f(*(undefined8 *)(param_1 + 0x1e8));
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    FUN_10017060f(*(undefined8 *)(param_1 + 0x1f0));
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    FUN_10017060f(*(undefined8 *)(param_1 + 0x1f8));
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    FUN_1001db798(param_1);
    FUN_1001e9eb9(param_1);
    FUN_1001e9d75(param_1);
    FUN_1001c64c1(param_1);
  }
  return uVar2;
}

