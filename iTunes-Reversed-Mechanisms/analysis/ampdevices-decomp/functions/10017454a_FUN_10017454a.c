// name: FUN_10017454a
// address: 10017454a

undefined8 FUN_10017454a(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    uVar2 = _CFURLCreateWithFileSystemPath();
    return uVar2;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_1006802e6(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0;
}

