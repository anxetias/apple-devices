// name: FUN_100250c66
// address: 100250c66

undefined8 FUN_100250c66(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_68 [2];
  long local_58;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = *(long *)(param_1 + 0x40);
  if ((lVar5 == 0) && (lVar5 = *(long *)(param_1 + 0x70), lVar5 == 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      local_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x47e4;
      uStack_38 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0x65f;
    if (*(char *)(param_1 + 0x8b) == '\0') goto LAB_100250e0f;
LAB_100250ddb:
    *(undefined1 *)(param_1 + 0x88) = 1;
LAB_100250de3:
    local_48 = 0;
    FUN_1001c62d9(&local_40,8);
    FUN_100249f2c(param_2,&local_48);
    FUN_100249fca(&local_48);
  }
  else {
    lVar2 = FUN_100166c1b(lVar5,&cf_CFBundleIdentifier);
    if (lVar2 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        local_40 = 1;
        uStack_3c = 0x822;
        uStack_3a = 0x480b;
        uStack_38 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_100250ddb;
    }
    cVar1 = FUN_100169da8(lVar2,&cf_com_apple_Unknown);
    if (cVar1 != '\0') goto LAB_100250ddb;
    *(undefined1 *)(param_1 + 0x88) = 2;
    uVar3 = 0x680;
    if (*(char *)(param_1 + 0x8b) != '\0') goto LAB_100250e0f;
    local_48 = 0;
    uStack_44 = 0;
    FUN_10025110a(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
                  *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x68),
                  *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                  *(undefined8 *)(param_1 + 0x60),0,0,0,&local_48);
    local_58 = CONCAT44(uStack_44,local_48);
    if (local_58 != 0) {
      uVar3 = FUN_1001737f8(lVar2);
      cVar1 = FUN_100173c2a(lVar2,&cf__,0,uVar3,4,local_68);
      if (cVar1 == '\0') {
LAB_100250f29:
        local_50 = 0;
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          local_40 = 1;
          uStack_3c = 0x822;
          uStack_3a = 0x483f;
          uStack_38 = 0x1007b;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        if (local_50 != 0) goto LAB_100250f60;
LAB_100250f6d:
        FUN_10014d890(&local_50);
        goto LAB_100250f76;
      }
      lVar6 = local_68[0] + 1;
      local_68[0] = lVar6;
      lVar4 = FUN_1001737f8(lVar2);
      if (lVar4 <= lVar6) goto LAB_100250f29;
      local_50 = FUN_10016a030(DAT_1008c4d90,lVar2,local_68[0]);
      if (local_50 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          local_40 = 1;
          uStack_3c = 0x822;
          uStack_3a = 0x4d8e;
          uStack_38 = 0x1007b;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_100250f29;
      }
LAB_100250f60:
      cVar1 = FUN_100169eb1(local_50,local_58);
      if (cVar1 != '\0') goto LAB_100250f6d;
      FUN_10014d890(&local_50);
      FUN_10014d890(&local_58);
      goto LAB_100250de3;
    }
LAB_100250f76:
    uVar3 = FUN_100166c1b(lVar5,&cf_CFBundleVersion);
    local_48 = 0x73766d64;
    uVar3 = FUN_1001705fc(uVar3);
    local_40 = (undefined4)uVar3;
    uStack_3c = (undefined2)((ulong)uVar3 >> 0x20);
    uStack_3a = (undefined2)((ulong)uVar3 >> 0x30);
    FUN_100249f2c(param_2);
    FUN_100249fca(&local_48);
    FUN_10014d890(&local_58);
  }
  uVar3 = 0;
LAB_100250e0f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

