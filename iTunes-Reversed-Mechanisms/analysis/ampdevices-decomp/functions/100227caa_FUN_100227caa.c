// name: FUN_100227caa
// address: 100227caa

int FUN_100227caa(undefined8 param_1,undefined4 *param_2,undefined8 param_3,void *param_4,
                 int param_5,undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined8 local_688;
  undefined8 local_680;
  undefined4 local_678;
  char *local_674;
  undefined2 local_66c;
  int local_66a;
  undefined4 local_658;
  char *local_654;
  undefined2 local_64c;
  int local_64a;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_680 = 0;
  if (param_5 == 0 && param_4 == (void *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = 
      "(optionalDestinationFolderSpec != nullptr) || (optionalDestinationDistinguishedFolderSelector != 0)"
      ;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x32;
    goto LAB_100227d8c;
  }
  plVar3 = *(long **)(param_2 + 2);
  local_698 = *param_2;
  uStack_694 = param_2[1];
  uStack_690 = param_2[2];
  uStack_68c = param_2[3];
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
  }
  local_688 = param_6;
  iVar5 = FUN_100227719(param_1,&local_698,param_3,&local_680);
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
    if (param_5 == 0) {
      _memcpy(&local_458,param_4,0x420);
LAB_100227e52:
      uVar6 = local_688;
      iVar5 = FUN_100220c77(param_1,&local_658);
      if (iVar5 != -0x80) {
        if (iVar5 == 0) {
          iVar5 = FUN_1001660b3(local_680,&local_458,&local_658,uVar6,0);
          if ((iVar5 != -0x80) && (iVar5 != 0)) {
            uVar6 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar6,0x10);
            if (cVar4 != '\0') {
              puVar7 = &local_678;
              local_678 = 0x8220202;
              local_674 = "Assertion failure";
              local_66c = 0x400;
              local_66a = iVar5;
              goto LAB_100227f47;
            }
          }
        }
        else {
          uVar6 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar6,0x10);
          if (cVar4 != '\0') {
            puVar7 = &local_678;
            local_678 = 0x8220202;
            local_674 = "Assertion failure";
            local_66c = 0x400;
            local_66a = iVar5;
LAB_100227f47:
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",puVar7,0x12);
          }
        }
      }
    }
    else {
      iVar5 = FUN_1003870d4(param_5,3,&local_458);
      if (iVar5 != -0x80) {
        if (iVar5 == 0) goto LAB_100227e52;
        uVar6 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar6,0x10);
        if (cVar4 == '\0') goto LAB_100227d53;
        puVar7 = &local_658;
        local_658 = 0x8220202;
        local_654 = "Assertion failure";
        local_64c = 0x400;
        local_64a = iVar5;
        goto LAB_100227f47;
      }
    }
  }
LAB_100227d53:
  FUN_10017060f(local_680);
LAB_100227d8c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

