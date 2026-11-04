// name: initialize
// address: 10045129a

/* Function Stack Size: 0x10 bytes */

void MediaLibraryObserver::initialize(ID param_1,SEL param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008be678 == 0) {
    DAT_1008be678 = _objc_alloc_init();
    if (DAT_1008be678 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "sMediaLibraryObserverInstance != nullptr";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
    }
    FUN_1001c0fbe(FUN_10045136a,0,0,0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

