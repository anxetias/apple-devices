// name: FUN_1002fae31
// address: 1002fae31

int FUN_1002fae31(long param_1,undefined8 param_2,byte param_3)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_3a = "sortFieldInfo != __null";
LAB_1002fafce:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else if (*(long *)(param_1 + 0x48) == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_3a = "sortFieldInfo->sortStringCachePtr != __null";
      goto LAB_1002fafce;
    }
  }
  else if (*(long *)(param_1 + 0x30) == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_3a = "sortFieldInfo->sortStatusPtr != __null";
      goto LAB_1002fafce;
    }
  }
  else {
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
      iVar3 = (**(code **)(param_1 + 0x18))(param_1);
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          iVar3 = *(int *)(param_1 + 0x50);
          pbVar1 = *(byte **)(param_1 + 0x30);
          if ((char)param_3 < '\0' || iVar3 != 0) {
            if (pbVar1 == (byte *)0x0) {
              uVar4 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              if (cVar2 != '\0') {
                local_48 = 0x8220202;
                local_44 = "Assertion failure";
                local_3c = 0x822;
                local_3a = "sortFieldInfo->sortStatusPtr != __null";
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            else {
              if (*pbVar1 != param_3) {
                *pbVar1 = param_3;
              }
              if ((iVar3 == 0) && ((param_3 & 0x7f) != 0)) {
                *pbVar1 = 0;
              }
            }
          }
          else {
            *pbVar1 = 0;
            FUN_1002fa9ac(param_1,0);
          }
          iVar3 = 0;
          if (*(undefined1 **)(param_1 + 0x28) != (undefined1 *)0x0) {
            **(undefined1 **)(param_1 + 0x28) = 0;
          }
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x400;
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
        }
      }
      goto LAB_1002fb002;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_3a = "sortFieldInfo->setSortStringProcPtr != __null";
      goto LAB_1002fafce;
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_1002fb002:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

