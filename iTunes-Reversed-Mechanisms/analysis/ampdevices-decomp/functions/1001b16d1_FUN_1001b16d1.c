// name: FUN_1001b16d1
// address: 1001b16d1

undefined8 FUN_1001b16d1(int param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10069feae(uVar2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    FUN_1001782e9(0,0);
  }
  FUN_1001e9de0(&DAT_1008c5200);
  lVar3 = FUN_1001b06f8(param_1);
  if (lVar3 == 0) {
    FUN_1001e9eb9(&DAT_1008c5200);
    uVar2 = 0xffffffe4;
  }
  else {
    *(undefined1 *)(lVar3 + 0x5c) = 1;
    DAT_1008c52c8 = DAT_1008c52c8 + 1;
    FUN_1001e9eb9(&DAT_1008c5200);
    FUN_1001b176b();
    uVar2 = 0;
  }
  return uVar2;
}

