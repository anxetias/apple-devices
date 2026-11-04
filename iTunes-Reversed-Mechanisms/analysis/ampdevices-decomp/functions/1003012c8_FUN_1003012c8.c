// name: FUN_1003012c8
// address: 1003012c8

int FUN_1003012c8(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_78;
  char *local_74;
  undefined2 local_6c;
  int local_6a;
  undefined **local_58 [4];
  undefined ***local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_58[0] = &PTR_FUN_100853b70;
  local_38 = local_58;
  FUN_1003017c3(param_1,local_58);
  if (local_38 == local_58) {
    lVar3 = 0x20;
LAB_10030131a:
    (**(code **)((long)*local_38 + lVar3))();
  }
  else {
    lVar3 = 0x28;
    if (local_38 != (undefined ***)0x0) goto LAB_10030131a;
  }
  iVar2 = FUN_1001c572a(0x1f0,100,param_1 + 0x1bc0);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      iVar2 = FUN_1001c572a(0xf0,100,param_1 + 0x1bc8);
      if (iVar2 == -0x80) goto LAB_100301773;
      if (iVar2 == 0) {
        iVar2 = FUN_1001c572a(0x40,100,param_1 + 0x1bd0);
        if (iVar2 == -0x80) goto LAB_100301773;
        if (iVar2 == 0) {
          iVar2 = FUN_1001c572a(0xb8,100,param_1 + 0x1bd8);
          if (iVar2 == -0x80) goto LAB_100301773;
          if (iVar2 == 0) {
            iVar2 = FUN_1001c572a(0x3c,100,param_1 + 0x1be0);
            if (iVar2 == -0x80) goto LAB_100301773;
            if (iVar2 == 0) {
              iVar2 = FUN_1001c572a(0x240,100,param_1 + 0x1be8);
              if (iVar2 == -0x80) goto LAB_100301773;
              if (iVar2 == 0) {
                iVar2 = FUN_1001c572a(0x30,100,param_1 + 0x1bf0);
                if (iVar2 == -0x80) goto LAB_100301773;
                if (iVar2 == 0) {
                  iVar2 = FUN_1001c572a(0x20,100,param_1 + 0x1bf8);
                  if (iVar2 == -0x80) goto LAB_100301773;
                  if (iVar2 == 0) {
                    iVar2 = FUN_10015a455(0xcc8,0,0,param_1 + 0x2c20);
                    if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_100301773;
                    uVar4 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar4,0x10);
                  }
                  else {
                    uVar4 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar4,0x10);
                  }
                }
                else {
                  uVar4 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar4,0x10);
                }
              }
              else {
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
              }
            }
            else {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
            }
          }
          else {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
          }
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
    }
    if (cVar1 != '\0') {
      local_6c = 0x400;
      local_74 = "Assertion failure";
      local_78 = 0x8220202;
      local_6a = iVar2;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_78,0x12);
    }
  }
LAB_100301773:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

