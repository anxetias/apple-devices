// name: FUN_1002e10e7
// address: 1002e10e7

/* WARNING: Removing unreachable block (ram,0x0001002e1139) */
/* WARNING: Removing unreachable block (ram,0x0001002e1158) */
/* WARNING: Removing unreachable block (ram,0x0001002e1171) */

undefined1 FUN_1002e10e7(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1001798b8(2,&DAT_100741c50,0x126);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_2a = "hash.hashSize == sizeof(sIPodProductionRSAPublicKeySHA1Digest)";
        local_2c = 0x822;
        local_34 = "Assertion failure";
        local_38 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
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
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

