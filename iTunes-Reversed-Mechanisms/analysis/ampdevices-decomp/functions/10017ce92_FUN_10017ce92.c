// name: FUN_10017ce92
// address: 10017ce92

undefined8 FUN_10017ce92(int *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x66726566)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100684f30(uVar2);
    }
  }
  else if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100684eba(uVar2);
    }
  }
  else {
    if (*(code **)(param_1 + 0x112) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010017cebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(param_1 + 0x112))();
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100684e44(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

