// name: FUN_10017cf3c
// address: 10017cf3c

undefined8 FUN_10017cf3c(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x66726566)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068501c(uVar2);
    }
  }
  else {
    if (*(code **)(param_1 + 0x114) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010017cf61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(param_1 + 0x114))();
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100684fa6(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

