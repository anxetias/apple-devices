// name: FUN_10036fcd3
// address: 10036fcd3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10036fcd3(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4,long param_5,
             long *param_6)

{
  long *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  size_t sVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_98;
  undefined4 local_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined2 uStack_86;
  undefined2 uStack_84;
  long *local_78;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_6 != (long *)0x0) {
    *param_6 = 0;
  }
  lVar5 = FUN_1001c629e(0x6c0,&DAT_100711c6e);
  if (lVar5 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_98._0_4_ = 0x8220202;
      local_98._4_4_ = 0x7a0a90;
      local_90 = 1;
      uStack_8c = 0x822;
      uStack_8a = 0x589d;
      uStack_88 = 0x7c;
      uStack_86 = 1;
      uStack_84 = 0;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = 0xffffff94;
  }
  else {
    *(undefined4 *)(lVar5 + 8) = 1;
    uVar3 = FUN_100181913();
    *(undefined4 *)(lVar5 + 0x430) = uVar3;
    iVar4 = _AMDeviceGetInterfaceType(param_1);
    lVar9 = lVar5 + 0x638;
    if (iVar4 == 2) {
      lVar9 = lVar5 + 0x670;
    }
    FUN_1003706be(lVar9,param_1,param_2,param_3);
    uVar6 = _AMDeviceCopyDeviceIdentifier(param_1);
    *(undefined8 *)(lVar5 + 0x6a8) = uVar6;
    uVar6 = FUN_1001705fc(param_5);
    *(undefined8 *)(lVar5 + 0x6b0) = uVar6;
    *(undefined4 *)(lVar5 + 0x6b8) = 0;
    if (param_4 == (char *)0x0) {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_98._0_4_ = 0x8220202;
        local_98._4_4_ = 0x7a0a90;
        local_90 = 1;
        uStack_8c = 0x822;
        uStack_8a = 0xee9;
        uStack_88 = 0x7a;
        uStack_86 = 1;
        uStack_84 = 0;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      uVar3 = *(undefined4 *)(lVar5 + 0x430);
      sVar7 = _strlen(param_4);
      if (sVar7 < 0x200) {
        *(undefined4 *)(lVar5 + 0x10) = 0x41464350;
        *(undefined2 *)(lVar5 + 0x14) = 0;
        if (DAT_1008bde88 == (code *)0x0) {
          DAT_1008bde88 = FUN_100370cf0;
          _DAT_1008bde90 = FUN_1003714a1;
          _DAT_1008bde98 = FUN_1003714b1;
          _DAT_1008bdea0 = FUN_10037161a;
          _DAT_1008bdea8 = FUN_100371b28;
          _DAT_1008bdeb0 = FUN_100371c51;
          _DAT_1008bdeb8 = FUN_100371c5b;
          _DAT_1008bdec0 = FUN_100371d56;
          _DAT_1008bdec8 = FUN_100371e91;
          _DAT_1008bded0 = FUN_1003722b6;
          _DAT_1008bded8 = FUN_1003722c3;
          _DAT_1008bdee0 = FUN_10037236d;
          _DAT_1008bdee8 = FUN_10037237b;
          _DAT_1008bdef0 = FUN_100372383;
          _DAT_1008bdef8 = FUN_100372a46;
          _DAT_1008bdf00 = FUN_100372c92;
          _DAT_1008bdf08 = FUN_100372c9c;
          _DAT_1008bdf10 = FUN_10037331f;
          _DAT_1008bdf18 = 0;
          _DAT_1008bdf20 = FUN_1003738ee;
          _DAT_1008bdf28 = FUN_1003738f9;
          _DAT_1008bdf30 = FUN_100373904;
          _DAT_1008bdf38 = FUN_1003739ba;
          _DAT_1008bdf40 = FUN_1003739c5;
          _DAT_1008bdf48 = FUN_100373b81;
          _DAT_1008bdf50 = FUN_100373c32;
          _DAT_1008bdf58 = FUN_100373c3a;
          _DAT_1008bdf60 = FUN_100373d13;
          _DAT_1008bdf68 = FUN_100373d20;
          _DAT_1008bdf70 = 0;
          _DAT_1008bdf78 = FUN_10037427c;
          _DAT_1008bdf80 = FUN_1003748cc;
          _DAT_1008bdf88 = FUN_1003749ce;
          _DAT_1008bdf90 = FUN_10037512c;
          _DAT_1008bdf98 = FUN_10036e801;
          _DAT_1008bdfa0 = FUN_10036f236;
          _DAT_1008bdfa8 = FUN_100375553;
          _DAT_1008bdfb0 = FUN_100375976;
          _DAT_1008bdfb8 = FUN_100375d29;
          _DAT_1008bdfc0 = FUN_100375e1e;
        }
        *(code ***)(lVar5 + 0x20) = &DAT_1008bde88;
        *(undefined4 *)(lVar5 + 0x18) = 2;
        *(undefined4 *)(lVar5 + 0x28) = uVar3;
        FUN_1001dfbb3(param_4,lVar5 + 0x2c,0x200);
      }
      else {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_98._0_4_ = 0x8220202;
          local_98._4_4_ = 0x7a0a90;
          local_90 = 1;
          uStack_8c = 0x822;
          uStack_8a = 0x5d09;
          uStack_88 = 0x7c;
          uStack_86 = 1;
          uStack_84 = 0;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
    FUN_1001e9de0(&DAT_1008bddd0);
    FUN_1001c2470(&DAT_1008bde80,lVar5);
    if (param_6 != (long *)0x0) {
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      *param_6 = lVar5;
    }
    FUN_1001e9eb9(&DAT_1008bddd0);
    uVar6 = 0;
    if (param_5 == 0) {
      iVar4 = FUN_1005bc4ab(param_1,lVar5 + 0x434);
      if ((iVar4 != -0x80) && (iVar4 != 0)) {
        uVar8 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar8,0x10);
        if (cVar2 != '\0') {
          local_98._0_4_ = 0x8220202;
          local_98._4_4_ = 0x7a0a90;
          local_90 = 1;
          uStack_8c = 0x400;
          uStack_8a = (undefined2)iVar4;
          uStack_88 = (undefined2)((uint)iVar4 >> 0x10);
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_98,0x12);
        }
      }
      cVar2 = FUN_1001edfc7();
      if (cVar2 == '\0') {
        local_98._0_4_ = 0x852528;
        local_98._4_4_ = 1;
        local_90 = 0x370c02;
        uStack_8c = 1;
        uStack_8a = 0;
        uStack_88 = (undefined2)*(undefined4 *)(lVar5 + 0x430);
        uStack_86 = (undefined2)((uint)*(undefined4 *)(lVar5 + 0x430) >> 0x10);
        local_68 = 0;
        uStack_60 = 0;
        uStack_59 = 0;
        uStack_58 = 0;
        uStack_56 = 0;
        local_50 = 0;
        uStack_48 = 0;
        local_40 = (long *)0x0;
        uStack_57 = 1;
        local_78 = &local_98;
        FUN_10017869a(&local_98);
        if (local_40 != (long *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          lVar5 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar5 == 0) {
            (**(code **)(*local_40 + 0x10))(local_40);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_78 == &local_98) {
          lVar5 = 0x20;
        }
        else {
          lVar5 = 0x28;
          if (local_78 == (long *)0x0) goto LAB_10037021d;
        }
        (**(code **)(*local_78 + lVar5))();
        uVar6 = 0;
      }
      else {
        FUN_100181b5d(lVar5 + 0x10,*(undefined4 *)(lVar5 + 0x430),1,1,0);
        uVar6 = 0;
      }
    }
  }
LAB_10037021d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

