// name: FUN_10017e137
// address: 10017e137

undefined8 FUN_10017e137(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_100189f00();
  if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010017e16a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)*puVar2)(param_1,param_2,param_3);
    return uVar3;
  }
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    FUN_100686210(uVar3);
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

