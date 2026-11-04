// name: FUN_100165bd7
// address: 100165bd7

undefined8 FUN_100165bd7(undefined8 param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    uVar3 = FUN_1001704bb();
    if (DAT_10088ffb8 == '\0') {
      iVar2 = ___cxa_guard_acquire(&DAT_10088ffb8);
      if (iVar2 != 0) {
        DAT_10088ffb0 =
             _CFAllocatorCreate(*(undefined8 *)PTR__kCFAllocatorDefault_10082e018,&DAT_10088f550);
        ___cxa_guard_release(&DAT_10088ffb8);
      }
    }
    uVar3 = _CFDataCreateWithBytesNoCopy(uVar3,param_2,param_3,DAT_10088ffb0);
    return uVar3;
  }
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    FUN_100673370(uVar3);
  }
  FUN_1001782e9(0,0);
  return 0;
}

