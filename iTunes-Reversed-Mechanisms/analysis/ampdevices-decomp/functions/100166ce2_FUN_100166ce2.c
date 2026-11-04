// name: FUN_100166ce2
// address: 100166ce2

char FUN_100166ce2(long param_1,long param_2,undefined2 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 in_RAX;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_28;
  
  if (param_3 == (undefined2 *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      FUN_1006740b8(uVar6);
    }
  }
  else {
    *param_3 = 0;
    if (param_1 == 0) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        FUN_100674042(uVar6);
      }
    }
    else {
      if (param_2 != 0) {
        local_28 = in_RAX;
        lVar3 = FUN_100171475();
        if (lVar3 != 0) {
          lVar4 = _CFGetTypeID(lVar3);
          lVar5 = _CFStringGetTypeID();
          if (lVar4 != lVar5) {
            cVar1 = FUN_100164e20(lVar3,&local_28);
            if (cVar1 == '\0') {
              return '\0';
            }
            FUN_1001e1b6d(local_28,param_3);
            return cVar1;
          }
          iVar2 = FUN_1001e115f(lVar3,param_3);
          if (iVar2 != -0x80) {
            if (iVar2 == 0) {
              return '\x01';
            }
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              FUN_100673f60(iVar2,uVar6);
            }
          }
        }
        return '\0';
      }
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        FUN_100673fcc(uVar6);
      }
    }
  }
  FUN_1001782e9(0,0);
  return '\0';
}

