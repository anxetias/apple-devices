// name: FUN_100187c42
// address: 100187c42

undefined4 FUN_100187c42(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x44697249)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10068d38b(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    uVar2 = (**(code **)(*(long *)(param_1 + 6) + 0x130))(param_1);
    *param_1 = 0;
    FUN_1001c64c1(param_1);
  }
  return uVar2;
}

