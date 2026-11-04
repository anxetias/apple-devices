// name: FUN_1005d96b5
// address: 1005d96b5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1005d96b5(undefined8 param_1,ulong *param_2,int *param_3,ulong *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  long local_60;
  uint local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = 8;
  iVar2 = FUN_1001d6a08(param_1,&local_60,param_2,0);
  if ((iVar2 != -0x80) && (iVar2 != -0x27)) {
    if (iVar2 == 0) {
      if (local_60 == 8) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = *param_2;
        auVar4 = pshufb(auVar4,_DAT_10070e4b0);
        *param_2 = auVar4._0_8_;
        *param_3 = 8;
        if ((ulong)(uint)*param_2 == 1) {
          local_58 = 0;
          uStack_54 = 0;
          local_60 = 8;
          iVar2 = FUN_1001d6a08(param_1,&local_60,&local_58,0);
          *param_3 = *param_3 + 8;
          *param_4 = (ulong)(uStack_54 >> 0x18) | ((ulong)uStack_54 & 0xff0000) >> 8 |
                     ((ulong)uStack_54 & 0xff00) << 8 | ((ulong)uStack_54 & 0xff) << 0x18 |
                     ((ulong)local_58 & 0xff000000) << 8 | ((ulong)local_58 & 0xff0000) << 0x18 |
                     ((ulong)local_58 & 0xff00) << 0x28 | CONCAT44(uStack_54,local_58) << 0x38;
        }
        else {
          *param_4 = (ulong)(uint)*param_2;
          iVar2 = 0;
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x822;
          local_4a = "count == sizeof(*outAtom)";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0x24;
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

