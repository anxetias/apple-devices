// name: FUN_100183b4f
// address: 100183b4f

ulong FUN_100183b4f(undefined8 param_1)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_100189f00();
  if (lVar3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_10068a94b(uVar5);
    }
    FUN_1001782e9(0,0);
    bVar2 = 0xce;
  }
  else {
    if (*(code **)(lVar3 + 0x48) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100183b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(lVar3 + 0x48))(param_1);
      return uVar4;
    }
    bVar2 = 0;
  }
  return (ulong)bVar2;
}

