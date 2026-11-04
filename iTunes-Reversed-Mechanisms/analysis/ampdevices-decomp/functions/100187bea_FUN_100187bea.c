// name: FUN_100187bea
// address: 100187bea

undefined8 FUN_100187bea(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x44697249)) {
                    /* WARNING: Could not recover jumptable at 0x000100187c02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(long *)(param_1 + 6) + 0x128))();
    return uVar2;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_10068d315(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

