// name: FUN_100255c63
// address: 100255c63

undefined8
FUN_100255c63(undefined4 param_1,undefined8 param_2,char param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,
             undefined4 *param_9,long param_10,long param_11)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_9 == (undefined4 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x490d;
      uStack_48 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (param_10 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x109c;
      uStack_48 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_5c = param_6;
    cVar1 = FUN_100247c62();
    if (cVar1 != '\0') {
      *param_9 = param_1;
      param_9[1] = param_4;
      FUN_1001b8172(param_9 + 2,param_2);
      if (param_3 == '\0') {
        param_9[6] = param_8[1];
        param_9[7] = param_8[2];
        if (*(char *)((long)param_8 + 0x6e) == '\0') {
          local_58 = 0x73766970;
          local_50 = *param_8;
          FUN_100249f2c(param_10);
          FUN_100249fca(&local_58);
        }
        else {
          lVar2 = FUN_100172473(DAT_1008c4d90,(long)param_8 + 0x6e,0x600);
          if (lVar2 == 0) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              local_50 = 1;
              uStack_4c = 0x822;
              uStack_4a = 0xb6bf;
              uStack_48 = 0x1007a;
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            goto LAB_100256040;
          }
          local_58 = 0x73766d64;
          uVar3 = FUN_1001705fc(lVar2);
          local_50 = (undefined4)uVar3;
          uStack_4c = (undefined2)((ulong)uVar3 >> 0x20);
          uStack_4a = (undefined2)((ulong)uVar3 >> 0x30);
          FUN_100249f2c(param_10,&local_58);
          FUN_100249fca(&local_58);
          FUN_10017060f(lVar2);
        }
        uVar3 = 0;
        if (param_11 != 0) {
          cVar1 = FUN_1001e2b4f((long)param_8 + 0xe,&local_60);
          if (cVar1 != '\0') {
            local_58 = 0x73766970;
            local_50 = local_60;
            FUN_100249f2c(param_11);
            FUN_100249fee(&local_58);
            uVar3 = 0;
          }
        }
      }
      else {
        FUN_1001dfbb3((long)param_8 + 0xae,param_9 + 10,0x20);
        param_9[8] = param_8[0x34];
        param_9[9] = param_8[0x37];
        *(undefined8 *)(param_9 + 0x14) = *(undefined8 *)(param_8 + 0x38);
        *(undefined8 *)(param_9 + 0x16) = param_5;
        param_9[0x18] = local_5c;
        param_9[0x19] = param_7;
        lVar2 = FUN_100172473(DAT_1008c4d90,(long)param_8 + 0x6e,0x600);
        if (lVar2 == 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            local_50 = 1;
            uStack_4c = 0x822;
            uStack_4a = 0x4933;
            uStack_48 = 0x1007b;
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          local_58 = 0x73766d64;
          uVar3 = FUN_1001705fc(lVar2);
          local_50 = (undefined4)uVar3;
          uStack_4c = (undefined2)((ulong)uVar3 >> 0x20);
          uStack_4a = (undefined2)((ulong)uVar3 >> 0x30);
          FUN_100249f2c(param_10,&local_58);
          FUN_100249fca(&local_58);
          FUN_10017060f(lVar2);
          uVar3 = 0;
          if (param_11 == 0) goto LAB_100255e61;
          lVar2 = FUN_100172473(DAT_1008c4d90,(long)param_8 + 0xe,0x600);
          if (lVar2 != 0) {
            local_58 = 0x73766d64;
            uVar4 = FUN_1001705fc(lVar2);
            local_50 = (undefined4)uVar4;
            uStack_4c = (undefined2)((ulong)uVar4 >> 0x20);
            uStack_4a = (undefined2)((ulong)uVar4 >> 0x30);
            FUN_100249f2c(param_11);
            FUN_100249fee(&local_58);
            FUN_10017060f(lVar2);
            goto LAB_100255e61;
          }
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            local_50 = 1;
            uStack_4c = 0x822;
            uStack_4a = 0x4933;
            uStack_48 = 0x1007b;
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
LAB_100256040:
        uVar3 = 0xffffff94;
      }
      goto LAB_100255e61;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x15fa;
      uStack_48 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar3 = 0xffffffce;
LAB_100255e61:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

