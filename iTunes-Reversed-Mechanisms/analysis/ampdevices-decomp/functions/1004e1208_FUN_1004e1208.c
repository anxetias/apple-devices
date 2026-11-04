// name: FUN_1004e1208
// address: 1004e1208

undefined8 FUN_1004e1208(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1004e0c3f(0,0);
  uVar5 = DAT_1008c4d90;
  if (lVar2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "libraryTrackData != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
      return 0;
    }
  }
  else {
    uVar3 = FUN_100309008(lVar2);
    uVar4 = FUN_1004e116d();
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
      uVar5 = FUN_1001736b8(uVar5,0,&cf__016llX,uVar4 ^ uVar3);
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

