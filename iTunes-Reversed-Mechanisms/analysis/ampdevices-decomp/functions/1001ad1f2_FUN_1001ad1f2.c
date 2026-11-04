// name: FUN_1001ad1f2
// address: 1001ad1f2

undefined4 FUN_1001ad1f2(ulong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10069f422(uVar3);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    uVar5 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (DAT_10089faf8 == '\0') {
      FUN_10069f3b5();
    }
    if (DAT_10089fb00 != -1) {
      FUN_10069f40a();
    }
    uVar5 = 0;
    if (DAT_10089fae8 != (undefined8 *)0x0) {
      puVar2 = &DAT_10089fae8;
      puVar4 = DAT_10089fae8;
      do {
        if ((ulong)puVar4[4] >= param_1) {
          puVar2 = puVar4;
        }
        puVar4 = (undefined8 *)puVar4[(ulong)puVar4[4] < param_1];
      } while (puVar4 != (undefined8 *)0x0);
      uVar5 = 0;
      if (((undefined8 **)puVar2 != &DAT_10089fae8) && ((ulong)puVar2[4] <= param_1)) {
        uVar5 = *(undefined4 *)(puVar2 + 5);
      }
    }
  }
  return uVar5;
}

