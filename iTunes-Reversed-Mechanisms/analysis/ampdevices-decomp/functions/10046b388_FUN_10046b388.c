// name: FUN_10046b388
// address: 10046b388

int FUN_10046b388(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = FUN_10025b8e3();
  cVar1 = _os_signpost_enabled(uVar3);
  if (cVar1 != '\0') {
    local_38 = local_38 & 0xffff0000;
    __os_signpost_emit_with_name_impl
              (0x100000000,uVar3,1,0xeeeeb0b5b2b2eeee,"db_load","",&local_38,2);
  }
  iVar2 = FUN_1004cca8a(DAT_1008bf920,0);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      lVar4 = FUN_1003070df();
      iVar2 = 0;
      if (lVar4 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x822;
          local_2a = "trackData != nullptr";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0x6c;
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x400;
        local_2a = (char *)CONCAT44(local_2a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

