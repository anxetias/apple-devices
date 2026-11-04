// name: FUN_1002fa9ac
// address: 1002fa9ac

undefined8 FUN_1002fa9ac(long param_1,ulong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  uint *puVar5;
  undefined8 local_258;
  uint local_250;
  undefined1 local_249;
  uint local_248;
  char *local_244;
  undefined2 local_23c;
  uint local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_249 = 0;
  if (DAT_1008c76a0 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      puVar5 = &local_248;
      local_248 = 0x8220202;
      local_244 = "Assertion failure";
      local_23c = 0x822;
      pcVar4 = "gAppContext != __null";
LAB_1002fac0a:
      *(char **)((long)puVar5 + 0xe) = pcVar4;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",puVar5,0x16);
    }
  }
  else if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      puVar5 = &local_248;
      local_248 = 0x8220202;
      local_244 = "Assertion failure";
      local_23c = 0x822;
      pcVar4 = "sortFieldInfo != __null";
      goto LAB_1002fac0a;
    }
  }
  else {
    pcVar4 = *(char **)(param_1 + 0x30);
    if (pcVar4 != (char *)0x0) {
      if (*pcVar4 < '\0') {
LAB_1002faa0e:
        if (*pcVar4 == '\0' || (param_2 & 2) == 0) {
LAB_1002fab05:
          local_248 = local_248 & 0xffff0000;
          if (*(long *)(param_1 + 0x48) == 0) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              puVar5 = &local_48;
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x822;
              pcVar4 = "sortFieldInfo->sortStringCachePtr != __null";
              goto LAB_1002fac0a;
            }
            goto LAB_1002fac2f;
          }
          cVar1 = FUN_1001ee056();
          if (cVar1 == '\0') {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x822;
              local_3a = "JRIsCurrentThreadCooperative()";
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
            FUN_1001782e9(0,0);
          }
          FUN_1001dccc7(*(undefined8 *)(param_1 + 0x38));
          iVar2 = FUN_1001de13c(*(undefined8 *)(param_1 + 0x38),**(undefined4 **)(param_1 + 0x40),
                                &local_258,&local_250);
          if (iVar2 != -0x80) {
            if (iVar2 == 0) {
              local_250 = local_250 >> 1;
              puVar5 = &local_248;
              cVar1 = FUN_1002fad40(local_258,local_250,puVar5,&local_249);
              FUN_1001dcd18(*(undefined8 *)(param_1 + 0x38));
              if (cVar1 == '\0') {
                local_249 = 0x80;
                puVar5 = (uint *)0x0;
              }
              FUN_1002fae31(param_1,puVar5,local_249);
              uVar3 = 1;
              if (*(undefined1 **)(param_1 + 0x28) != (undefined1 *)0x0) {
                **(undefined1 **)(param_1 + 0x28) = 0;
              }
              goto LAB_1002fac3a;
            }
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x400;
              local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
            }
          }
        }
      }
      else {
        if (*(int *)(param_1 + 0x50) == 0) {
          *pcVar4 = '\0';
          goto LAB_1002fab05;
        }
        if ((param_2 & 1) != 0) goto LAB_1002faa0e;
      }
      uVar3 = 0;
      goto LAB_1002fac3a;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      puVar5 = &local_248;
      local_248 = 0x8220202;
      local_244 = "Assertion failure";
      local_23c = 0x822;
      pcVar4 = "sortFieldInfo->sortStatusPtr != __null";
      goto LAB_1002fac0a;
    }
  }
LAB_1002fac2f:
  uVar3 = 0;
  FUN_1001782e9(0,0);
LAB_1002fac3a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

