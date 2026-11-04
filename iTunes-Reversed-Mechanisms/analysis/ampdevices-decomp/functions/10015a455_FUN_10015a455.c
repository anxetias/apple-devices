// name: FUN_10015a455
// address: 10015a455

undefined8 FUN_10015a455(undefined4 param_1,long param_2,undefined1 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_4 == (undefined4 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10066aaa1(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    FUN_1001c62d9(param_4,0x30);
    *param_4 = 0x61726179;
    param_4[1] = param_1;
    *(long *)(param_4 + 6) = param_2;
    *(undefined1 *)(param_4 + 10) = param_3;
    *(undefined1 *)((long)param_4 + 0x29) = 1;
    uVar2 = 0;
    if (param_2 == 0) {
      *(undefined1 *)(param_4 + 10) = 0;
    }
  }
  return uVar2;
}

