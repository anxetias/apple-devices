// name: FUN_100180a78
// address: 100180a78

int FUN_100180a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char local_6a8 [80];
  undefined1 local_658 [1056];
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_10017d406(param_3,0,local_6a8,local_238);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      if (local_6a8[0] == '\0') {
        iVar2 = FUN_10017d5ba(param_3,local_658);
        if (iVar2 != -0x80) {
          if (iVar2 == 0) {
            iVar2 = FUN_100180478(param_1,param_2,local_658,local_238,param_3,param_4 | 1);
          }
          else {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              FUN_100688496(iVar2,uVar3);
            }
          }
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_100688420(uVar3);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0x516;
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_100688502(iVar2,uVar3);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

