// name: FUN_10015a7f4
// address: 10015a7f4

undefined8 FUN_10015a7f4(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x61726179)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10066afb3(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    if (*(long *)(param_1 + 4) != 0) {
      FUN_1001c6209();
    }
    FUN_1001c62d9(param_1,0x30);
    uVar2 = 0;
  }
  return uVar2;
}

