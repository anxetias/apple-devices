// name: FUN_1002e2d60
// address: 1002e2d60

undefined8 FUN_1002e2d60(long param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(*param_2 + 0x5c) != 0) {
    lVar2 = FUN_1002e2e73();
    if (lVar2 != 0) {
      lVar3 = FUN_10048584d(*(undefined8 *)(lVar2 + 8),*(undefined8 *)(param_1 + 8),0);
      if (lVar3 == 0) {
        lVar2 = FUN_100489a1f(*(undefined8 *)(param_1 + 8),*(undefined8 *)(lVar2 + 8),0,0);
        if (lVar2 == 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_38 = 0x8220202;
            local_34 = "Assertion failure";
            local_2c = 0x822;
            local_2a = "libraryPlaylistItem != nullptr";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
          }
          FUN_1001782e9(0,0);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

