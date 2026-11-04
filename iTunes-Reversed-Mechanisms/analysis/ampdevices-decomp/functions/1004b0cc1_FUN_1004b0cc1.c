// name: FUN_1004b0cc1
// address: 1004b0cc1

void FUN_1004b0cc1(int *param_1)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inQueue != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    uVar5 = 0;
  }
  else {
    if (*param_1 == 0x646c2051) {
      *(undefined1 *)(param_1 + 0x51) = 1;
      if (*(long *)(param_1 + 0x2c) == 0) {
LAB_1004b0d1e:
        if ((*(char *)((long)param_1 + 0x79) != '\0') && ((char)param_1[0x1e] != '\0')) {
          piVar1 = param_1 + 6;
          while( true ) {
            iVar4 = FUN_1001e9de0(piVar1);
            if (iVar4 != 0) break;
            lVar2 = *(long *)(param_1 + 0x1a);
            cVar3 = FUN_1004aa626(lVar2);
            if (cVar3 == '\0') {
              if (lVar2 != 0) {
                uVar5 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar5,0x10);
                if (cVar3 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "item == __null";
                  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              FUN_1001e9eb9(piVar1);
              if (param_1[0x18] != 0) {
                uVar5 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar5,0x10);
                if (cVar3 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "inQueue->numItems == 0";
                  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              param_1[0x18] = 0;
              goto LAB_1004b0ef9;
            }
            FUN_1001c2d56(param_1 + 0x1a,lVar2);
            param_1[0x18] = param_1[0x18] + -1;
            *(undefined8 *)(lVar2 + 0x20) = 0;
            *(undefined8 *)(lVar2 + 0x28) = 0;
            FUN_1001e9eb9(piVar1);
            if (*(char *)((long)param_1 + 0x17) != '\0') {
              FUN_1001c6987(param_1 + 0x20,0x646d6972,lVar2,0,0);
            }
            FUN_1004aa496(lVar2);
          }
          if (iVar4 != -0x80) {
            uVar5 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar5,0x10);
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
        }
      }
      else {
        FUN_1001eca8b(*(long *)(param_1 + 0x2c),0);
        if (*param_1 == 0x646c2051) goto LAB_1004b0d1e;
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "inQueue->magic == \'dl Q\'";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,1);
      }
LAB_1004b0ef9:
      if ((char)param_1[0x1e] != '\0') {
        FUN_1001e9d75(param_1 + 6);
        *(undefined1 *)(param_1 + 0x1e) = 0;
      }
      if ((char)param_1[0x56] != '\0') {
        FUN_1001e9d75(param_1 + 0x32);
      }
      if ((char)param_1[0x2a] != '\0') {
        FUN_1001c672e(param_1 + 0x20);
      }
      operator_delete(param_1);
      goto LAB_1004b0f3e;
    }
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inQueue->magic == \'dl Q\'";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    uVar5 = 1;
  }
  FUN_1001782e9(0,uVar5);
LAB_1004b0f3e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

