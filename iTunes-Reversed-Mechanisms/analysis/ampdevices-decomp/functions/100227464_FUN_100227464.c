// name: FUN_100227464
// address: 100227464

int FUN_100227464(undefined4 param_1,undefined8 param_2,undefined4 *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 local_aa8;
  undefined4 uStack_aa4;
  undefined4 uStack_aa0;
  undefined4 uStack_a9c;
  undefined8 local_a90;
  undefined4 local_a88;
  char *local_a84;
  undefined2 local_a7c;
  int local_a7a;
  undefined4 local_a68;
  char *local_a64;
  undefined2 local_a5c;
  int local_a5a;
  undefined1 local_648 [512];
  undefined1 local_448 [1056];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_a90 = 0;
  plVar3 = *(long **)(param_3 + 2);
  local_aa8 = *param_3;
  uStack_aa4 = param_3[1];
  uStack_aa0 = param_3[2];
  uStack_a9c = param_3[3];
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
  }
  FUN_1001b7a44(local_448);
  iVar5 = FUN_100227719(param_2,&local_aa8,local_448,&local_a90);
  FUN_1001b7a50(local_448);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (iVar5 == 0) {
    iVar5 = FUN_10018e9e7(local_448);
    if (iVar5 != -0x80) {
      if (iVar5 == 0) {
        iVar5 = FUN_100184b45(local_448,"iPodDocumentationTemp",local_648);
        if (iVar5 == -0x80) goto LAB_10022750e;
        if (iVar5 == 0) {
          iVar5 = FUN_1001660b3(local_a90,local_448,local_648,&local_a68,0);
          if (iVar5 == -0x80) goto LAB_10022750e;
          if (iVar5 == 0) {
            iVar5 = FUN_100226460(param_1,&local_a68);
            FUN_100182d4d(&local_a68);
            goto LAB_10022750e;
          }
          uVar6 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar6,0x10);
          if (cVar4 == '\0') goto LAB_10022750e;
          puVar7 = &local_a88;
          local_a88 = 0x8220202;
          local_a84 = "Assertion failure";
          local_a7c = 0x400;
          local_a7a = iVar5;
        }
        else {
          uVar6 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar6,0x10);
          if (cVar4 == '\0') goto LAB_10022750e;
          puVar7 = &local_a68;
          local_a68 = 0x8220202;
          local_a64 = "Assertion failure";
          local_a5c = 0x400;
          local_a5a = iVar5;
        }
      }
      else {
        uVar6 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar6,0x10);
        if (cVar4 == '\0') goto LAB_10022750e;
        puVar7 = &local_a68;
        local_a68 = 0x8220202;
        local_a64 = "Assertion failure";
        local_a5c = 0x400;
        local_a5a = iVar5;
      }
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",puVar7,0x12);
    }
  }
LAB_10022750e:
  FUN_10017060f(local_a90);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

