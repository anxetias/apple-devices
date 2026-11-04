// name: FUN_1004002e0
// address: 1004002e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1004002e0(long param_1,undefined1 (*param_2) [16])

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1003f16c4(param_1,param_2,0x18);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      iVar3 = *(int *)*param_2;
      if (*(char *)(param_1 + 0x100127) != '\0') {
        auVar5._4_4_ = *(undefined4 *)(*param_2 + 4);
        auVar5._0_4_ = iVar3;
        auVar5._8_8_ = *(undefined8 *)(*param_2 + 8);
        auVar5 = pshufb(auVar5,_DAT_100718a70);
        *param_2 = auVar5;
        iVar3 = auVar5._0_4_;
      }
      iVar2 = 0;
      if (iVar3 != 0x646f686d) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "dbObject->magic == kDDBObjectHeaderMagic";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0xd0;
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

