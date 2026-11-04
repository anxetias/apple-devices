// name: FUN_1001c8d4b
// address: 1001c8d4b

undefined4 FUN_1001c8d4b(int *param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6d657461)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006aafe8(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    uVar2 = 0;
    if ((param_2 != '\0') && (*(long *)(param_1 + 2) != 0)) {
      uVar2 = FUN_10015ccc4(*(long *)(param_1 + 2),1);
    }
    FUN_1001c64c1(param_1);
  }
  return uVar2;
}

