// name: FUN_1003f6044
// address: 1003f6044

int FUN_1003f6044(long param_1,long param_2,undefined8 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined8 param_7)

{
  long lVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int local_64;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = 0;
  if (param_4 == 0) {
    iVar4 = 0;
    goto LAB_1003f61f2;
  }
  if ((*(byte *)(param_1 + 0x10001b) & 8) == 0) {
    iVar4 = FUN_1001de499(param_3,param_4,&local_60);
    lVar1 = local_60;
    if (iVar4 != -0x80) {
      if (iVar4 == 0) {
        if (local_60 == 0) {
          iVar4 = 0;
        }
        else {
          uVar5 = FUN_1001dfe99(local_60);
          FUN_100466330(lVar1,uVar5,0,&local_64);
          iVar4 = 0;
          if ((local_64 * 2 != 0 && local_60 != 0) &&
             (iVar4 = FUN_1003f3360(param_1,local_60,local_64 * 2,param_5,1,param_6,param_7),
             iVar4 != -0x80)) {
            iVar2 = 0;
            if (iVar4 == 0) goto LAB_1003f6184;
            uVar6 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar6,0x10);
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = iVar4;
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
        }
      }
      else {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = iVar4;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
  }
  else {
    iVar4 = FUN_1003f32d1(param_1,param_3,param_4,param_5,1,param_6,param_7,&local_58);
    if ((iVar4 == 0) && (iVar2 = iVar4, (char)local_58 != '\0')) {
LAB_1003f6184:
      iVar4 = iVar2;
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
    }
  }
  FUN_1001c64c1(local_60);
LAB_1003f61f2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

