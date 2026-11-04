// name: FUN_10062521a
// address: 10062521a

int FUN_10062521a(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_2 + 0x20) == 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inCallbackFunction != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,
                          "**ERROR**: SocialProfileLookup::Setup() failed! status:%d",&local_58,0x16
                         );
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x32;
  }
  else {
    plVar7 = (long *)(param_1 + 0x58);
    do {
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        iVar5 = 0;
        break;
      }
      local_68 = *(undefined4 *)(plVar7 + 3);
      uStack_64 = *(undefined4 *)((long)plVar7 + 0x1c);
      uStack_60 = *(undefined4 *)(plVar7 + 4);
      uStack_5c = *(undefined4 *)((long)plVar7 + 0x24);
      if (plVar7[4] != 0) {
        LOCK();
        plVar1 = (long *)(plVar7[4] + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      plVar1 = *(long **)(param_2 + 0x20);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10016bf14();
      }
      iVar5 = (**(code **)(*plVar1 + 0x30))(plVar1,&local_68);
      plVar1 = (long *)CONCAT44(uStack_5c,uStack_60);
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar2 = plVar1 + 1;
        lVar3 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          std::__shared_weak_count::__release_weak();
        }
      }
    } while (iVar5 == 0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

