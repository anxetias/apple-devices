// name: FUN_1002c5198
// address: 1002c5198

ulong FUN_1002c5198(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,char param_7)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong local_80;
  int local_6c;
  long local_68;
  uint local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  uint local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_5c = 0;
  uVar3 = FUN_1002c4ca2();
  uVar5 = (ulong)uVar3;
  if (uVar3 == 0) {
    if (local_6c == 2) {
LAB_1002c5226:
      if (param_7 == '\0') {
        uVar5 = FUN_1001d3f2d(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68),param_4,0,param_5,
                              param_6,local_80,local_68);
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
          return uVar5;
        }
        goto LAB_1002c531e;
      }
      uVar3 = FUN_1002c4bbc(param_1,local_80);
      if (uVar3 == 0) {
        uVar3 = FUN_1001e7237(local_68,local_80,*(undefined8 *)(param_1 + 0x60),
                              local_80 & 0xffffffff,&local_5c);
        uVar5 = (ulong)uVar3;
        lVar1 = *(long *)(param_1 + 0x60);
        local_58 = (undefined4)lVar1;
        uStack_54 = (undefined4)((ulong)lVar1 >> 0x20);
        if (((uVar3 == 0) && (lVar1 != 0)) && (local_5c != 0)) goto LAB_1002c5366;
      }
      else {
        uVar5 = (ulong)uVar3;
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x400;
          local_4a = uVar3;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
    else {
      if (local_6c != 1) {
        uVar5 = 0xffffff32;
        if (local_6c != 0) goto LAB_1002c51e2;
        goto LAB_1002c5226;
      }
      local_58 = (undefined4)local_68;
      uStack_54 = (undefined4)((ulong)local_68 >> 0x20);
      uVar5 = local_80 >> 1;
      local_5c = (uint)uVar5;
      if (local_68 == 0 || local_5c == 0) {
LAB_1002c53ae:
        uVar5 = 0;
      }
      else {
        if (param_7 != '\0') {
LAB_1002c5366:
          FUN_1001e3f7b(&local_58,&local_5c);
          uVar5 = (ulong)local_5c;
          if (local_5c == 0) goto LAB_1002c53ae;
          local_68 = CONCAT44(uStack_54,local_58);
        }
        uVar3 = FUN_1001d4003(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68),param_4,0,param_5,
                              param_6,uVar5 & 0xffffffff,local_68);
        uVar5 = (ulong)uVar3;
      }
    }
  }
LAB_1002c51e2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
LAB_1002c531e:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

