// name: FUN_100189e5b
// address: 100189e5b

undefined8 FUN_100189e5b(int *param_1,undefined4 *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10068f657(uVar3);
    }
  }
  else {
    *param_2 = 0;
    if (((param_1 != (int *)0x0) && (*(long *)(param_1 + 4) != 0)) &&
       ((*param_1 == 0x41464350 || (*param_1 == 0x504f5358)))) {
      lVar2 = FUN_10017dfe0();
      if (lVar2 != 0) {
        *param_2 = *(undefined4 *)(lVar2 + 0x14);
        return 0;
      }
      return 0xffffffdd;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10068f5e1(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

