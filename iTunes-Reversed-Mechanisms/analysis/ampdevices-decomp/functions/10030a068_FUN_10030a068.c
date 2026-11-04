// name: FUN_10030a068
// address: 10030a068

long FUN_10030a068(long *param_1,uint param_2,ulong param_3,long param_4,undefined8 param_5,
                  uint param_6,undefined4 param_7,undefined4 param_8)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined4 local_778;
  undefined8 local_770;
  undefined4 local_768;
  undefined8 local_760;
  undefined1 local_758;
  long *local_750;
  undefined1 *local_748;
  uint local_740;
  uint local_73c;
  undefined4 local_738;
  char *local_734;
  undefined2 local_72c;
  int local_72a;
  undefined4 local_718;
  char *local_714;
  undefined2 local_70c;
  char *local_70a;
  undefined4 local_6ec;
  undefined1 local_6e8 [1080];
  undefined1 local_2b0 [64];
  long local_270;
  uint local_268;
  long local_260;
  uint local_258;
  byte local_138;
  undefined1 local_137 [255];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_770 = 0;
  local_768 = 0;
  local_760 = 0;
  local_758 = 0;
  local_788 = 0;
  uStack_780 = 0;
  local_778 = 0;
  if (param_4 == 0) {
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      local_70a = "url != nullptr";
LAB_10030a3da:
      local_70c = 0x822;
      local_714 = "Assertion failure";
      local_718 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_718,0x16);
    }
  }
  else {
    if (param_3 < 0x401) {
      local_740 = param_2;
      local_73c = param_6;
      if (((param_6 & 8) == 0) && ((param_1[0x376] & 2U) == 0)) {
        local_6ec = (int)param_3;
        FUN_1001c631b(param_4,local_6e8,param_3);
        lVar4 = FUN_100301c98(param_1,0x48545450,&local_718);
        if (lVar4 != 0) goto LAB_10030a431;
      }
      local_750 = param_1;
      cVar2 = FUN_1001b8428(param_5);
      if (cVar2 == '\0') {
        local_748 = (undefined1 *)FUN_1001b83ae(param_5);
        uVar6 = FUN_1001b83f0(param_5);
        uVar5 = 0xff;
        if (uVar6 < 0xff) {
          uVar5 = uVar6;
        }
      }
      else {
        FUN_1001c631b(param_4,&local_718,param_3);
        *(undefined1 *)((long)&local_718 + param_3) = 0;
        FUN_1001a3e13(&local_718,local_2b0);
        uVar5 = (ulong)local_258;
        if ((uVar5 == 0) && (uVar5 = param_3, local_260 = param_4, (ulong)local_268 != 0)) {
          uVar5 = (ulong)local_268;
          local_260 = local_270;
        }
        uVar6 = 0xff;
        if (uVar5 < 0xff) {
          uVar6 = uVar5;
        }
        FUN_1001c631b(local_260,local_137,uVar6);
        local_138 = (byte)uVar6;
        local_748 = local_137;
        FUN_1001e123b(&local_138);
        uVar5 = (ulong)local_138;
      }
      local_768 = param_8;
      if ((local_73c >> 0x13 & 1) != 0) {
        local_758 = 1;
      }
      lVar7 = FUN_100472d20(local_750,local_740 & 0xff,&local_788);
      if (lVar7 != 0) {
        *(undefined4 *)(lVar7 + 0xd4) = param_7;
        lVar4 = *(long *)(lVar7 + 0x58);
        *(undefined1 *)(lVar4 + 0x44) = 1;
        FUN_1001e5811(local_748,uVar5);
        iVar3 = FUN_100471097(lVar7,&local_718,1);
        plVar1 = local_750;
        if (iVar3 != -0x80) {
          if (iVar3 == 0) {
            iVar3 = FUN_1002b4ba4(lVar4,param_4,param_3 & 0xffffffff);
            if (iVar3 == -0x80) goto LAB_10030a425;
            if (iVar3 == 0) {
              if ((local_73c >> 10 & 1) != 0) {
                *(byte *)(lVar7 + 0xc2) = *(byte *)(lVar7 + 0xc2) | 8;
              }
              (**(code **)(*plVar1 + 0x10))(plVar1,0x61747269,lVar7,0,0);
              goto LAB_10030a431;
            }
            uVar8 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar8,0x10);
          }
          else {
            uVar8 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar8,0x10);
          }
          if (cVar2 != '\0') {
            local_72c = 0x400;
            local_734 = "Assertion failure";
            local_738 = 0x8220202;
            local_72a = iVar3;
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_738,0x12);
          }
          if (iVar3 == 0) goto LAB_10030a431;
        }
LAB_10030a425:
        FUN_1004737f5(*(undefined8 *)(lVar4 + 8));
      }
      lVar4 = 0;
      goto LAB_10030a431;
    }
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      local_70a = "length <= 1024";
      goto LAB_10030a3da;
    }
  }
  lVar4 = 0;
  FUN_1001782e9(0,0);
LAB_10030a431:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

