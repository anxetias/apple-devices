// name: FUN_10035c024
// address: 10035c024

undefined4 FUN_10035c024(long param_1,undefined8 param_2,int param_3,long param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long local_70;
  long local_68;
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar6 = (long)param_3;
  iVar2 = FUN_100188151(*(undefined8 *)(param_1 + 0x28),param_4,param_2,lVar6,0,&local_70);
  if ((iVar2 == -0x27) &&
     (iVar2 = FUN_10017ce92(*(undefined8 *)(param_1 + 0x28),&local_60), iVar2 == 0)) {
    uVar8 = (int)param_4 - (int)local_60;
    if (*(long *)(param_1 + 8) == 0) {
      local_68 = 0;
    }
    else {
      local_68 = ___dynamic_cast(*(long *)(param_1 + 8),&PTR_DAT_100852a70,&PTR_DAT_100854a48,0);
    }
    if (uVar8 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x822;
        local_4a = "numZeros > 0";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    iVar2 = FUN_1002dd26a(local_68);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        for (; uVar8 != 0; uVar8 = uVar8 - (int)uVar7) {
          uVar7 = (ulong)uVar8;
          if (*(ulong *)(local_68 + 0x1a0) < (ulong)uVar8) {
            uVar7 = *(ulong *)(local_68 + 0x1a0);
          }
          iVar2 = FUN_100188151(*(undefined8 *)(param_1 + 0x28),local_60,
                                *(undefined8 *)(local_68 + 0x198),uVar7,0,&local_58);
          if (iVar2 != 0) goto LAB_10035c08c;
          if (CONCAT44(uStack_54,local_58) != uVar7) {
            iVar2 = -0x24;
            goto LAB_10035c08c;
          }
          local_60 = uVar7 + local_60;
        }
        if (local_60 != param_4) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            local_4c = 0x822;
            local_4a = "eof == inPos";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        iVar2 = FUN_100188151(*(undefined8 *)(param_1 + 0x28),param_4,param_2,lVar6,0,&local_70);
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
  }
LAB_10035c08c:
  uVar5 = 0xd;
  if (local_70 == lVar6) {
    uVar5 = 0;
  }
  uVar3 = 0x30a;
  if (iVar2 == 0) {
    uVar3 = uVar5;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

