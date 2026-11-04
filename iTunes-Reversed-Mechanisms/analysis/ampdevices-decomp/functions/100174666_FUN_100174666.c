// name: FUN_100174666
// address: 100174666

undefined8 FUN_100174666(long param_1,undefined1 param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 != 0 && param_3 != 0) {
    uVar2 = _CFURLGetFileSystemRepresentation(param_1,param_2);
    return uVar2;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_1006804be(uVar2);
  }
  FUN_1001782e9(0,0);
  return 0;
}

