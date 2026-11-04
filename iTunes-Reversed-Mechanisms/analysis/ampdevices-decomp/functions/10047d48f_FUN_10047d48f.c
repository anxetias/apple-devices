// name: FUN_10047d48f
// address: 10047d48f

undefined8 FUN_10047d48f(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = FUN_1001b83f0(param_2);
  if (uVar2 < 0x401) {
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
      uVar3 = FUN_10047d390(param_1,PTR_cf_podcast_sync_url_100844b38,param_2,1);
      return uVar3;
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "url.GetUTF8Length() <= 1024";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
      return 0xffffffce;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

