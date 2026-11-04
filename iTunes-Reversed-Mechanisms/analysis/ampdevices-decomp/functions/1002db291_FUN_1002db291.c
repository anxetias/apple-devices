// name: FUN_1002db291
// address: 1002db291

undefined1 FUN_1002db291(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined8 local_890;
  undefined4 local_884;
  undefined4 local_880;
  char local_879;
  undefined4 local_878;
  char *local_874;
  undefined2 local_86c;
  int local_86a;
  undefined1 local_858 [1024];
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_2 + 0x2ea) != '\0') {
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    local_48 = 0;
    local_890 = 0;
    uVar1 = *(uint *)(param_2 + 0x3b4);
    if (uVar1 == 0) {
      uVar2 = *(ulong *)(param_2 + 0x398);
      if (uVar2 == 0) {
        uVar7 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar7,0x10);
        if (cVar5 != '\0') {
          local_44a = "deviceInfo->guid != 0";
          goto LAB_1002db595;
        }
        goto LAB_1002db4b7;
      }
      local_58 = 8;
      uVar3 = (uint)(uVar2 >> 0x18);
      uVar1 = (uint)(uVar2 >> 8);
      uStack_54 = (uint)(byte)(uVar2 >> 0x38) | ((uint)(uVar2 >> 0x20) & 0xff0000) >> 8 |
                  uVar3 & 0xff0000 | uVar1 & 0xff000000;
      uStack_50 = uVar3 & 0xff | uVar1 & 0xff00 | (uint)(((uVar2 & 0xff00) << 0x28) >> 0x20) |
                  (uint)((uVar2 << 0x38) >> 0x20);
    }
    else {
      if (0x14 < uVar1) {
        uVar7 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar7,0x10);
        if (cVar5 != '\0') {
          local_44a = "deviceInfo->fairPlayGUIDLength <= sizeof(hwInfo.ID)";
LAB_1002db595:
          local_44c = 0x822;
          local_454 = "Assertion failure";
          local_458 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
        }
LAB_1002db4b7:
        uVar8 = 0;
        FUN_1001782e9(0,0);
        goto LAB_1002db4fb;
      }
      local_58 = uVar1;
      FUN_1001c631b(param_2 + 0x3a0,&uStack_54);
    }
    iVar6 = FUN_1000edc80(&local_58,&local_890);
    if (iVar6 != -0x80) {
      if (iVar6 != 0) {
        uVar7 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar7,0x10);
        if (cVar5 != '\0') {
          local_458 = 0x8220202;
          local_454 = "Assertion failure";
          local_44c = 0x400;
          local_44a = (char *)CONCAT44(local_44a._4_4_,iVar6);
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_458,0x12);
        }
        if (iVar6 != 0) goto LAB_1002db35e;
      }
      local_880 = 0;
      do {
        local_884 = 0x400;
        iVar6 = FUN_100054400(local_890,local_858,local_880,&local_458,&local_884,&local_879);
        if (iVar6 != 0) {
          iVar4 = local_86a;
          if (iVar6 == -0x80) goto LAB_1002db4e9;
          uVar7 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar7,0x10);
          iVar4 = local_86a;
          goto joined_r0x0001002db4e3;
        }
        if (local_879 == '\0') {
          uVar8 = 1;
          goto LAB_1002db4ef;
        }
        local_880 = 0x400;
        iVar6 = FUN_100268ed1(param_1,&local_458,local_884,local_858,&local_880);
      } while (iVar6 == 0);
      iVar4 = local_86a;
      if (iVar6 != -0x80) {
        uVar7 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar7,0x10);
        iVar4 = local_86a;
joined_r0x0001002db4e3:
        local_86a = iVar6;
        if (cVar5 != '\0') {
          local_86c = 0x400;
          local_874 = "Assertion failure";
          local_878 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_878,0x12);
          iVar4 = local_86a;
        }
      }
LAB_1002db4e9:
      local_86a = iVar4;
      uVar8 = 0;
LAB_1002db4ef:
      FUN_100061e40(local_890);
      goto LAB_1002db4fb;
    }
  }
LAB_1002db35e:
  uVar8 = 0;
LAB_1002db4fb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

