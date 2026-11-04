// name: FUN_10044d294
// address: 10044d294

void FUN_10044d294(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x198) != 0) {
    (*(code *)PTR__objc_msgSend_10082c770)
              (*(long *)(param_1 + 0x198),PTR_s_releaseDelegate_10088d198);
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  if (*(long *)(param_1 + 400) != 0) {
    cVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (*(long *)(param_1 + 400),PTR_s_mediaDomainsOpened_10088d1a0);
    if (cVar4 != '\0') {
      uVar5 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar5,0x10);
      if (cVar4 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "mLibraryClient.mediaDomainsOpened == __objc_no";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
    }
    (*(code *)PTR__objc_msgSend_10082c770)
              (*(undefined8 *)(param_1 + 400),PTR_s_invalidate_10088c4e8);
    *(undefined8 *)(param_1 + 400) = 0;
  }
  if (*(long *)(param_1 + 0xf0) != 0) {
    plVar3 = *(long **)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
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
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

