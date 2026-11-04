// name: FUN_10018a078
// address: 10018a078

undefined8 FUN_10018a078(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_100189f00();
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010018a094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(lVar2 + 0x28))(param_1);
    return uVar3;
  }
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    FUN_10068f921(uVar3);
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

