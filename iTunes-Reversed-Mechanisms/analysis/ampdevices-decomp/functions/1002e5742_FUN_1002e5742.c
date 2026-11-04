// name: FUN_1002e5742
// address: 1002e5742

long FUN_1002e5742(long param_1,long param_2,byte param_3,undefined8 *param_4,undefined8 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long local_88 [4];
  long *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 8) != 0x616c6269) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7ab58c;
        uStack_50 = 1;
        local_4c = 0x822;
        local_4a = "inAlbumInfo->mMagic == kAlbumInfoMagic";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1002e5824;
    }
    if (*(long *)(param_2 + 0x48) != 0) {
      FUN_1001aa318(param_1);
      local_58 = 0;
      uStack_54 = 0;
      if ((*(byte *)(param_2 + 0xfa) & 4) == 0) {
        FUN_1001a8c4a(param_1,param_2 + 200);
        lVar3 = FUN_1001ab132(param_1);
        if (lVar3 != 0) {
          lVar3 = *(long *)(param_2 + 0xd0);
          local_58 = (undefined4)lVar3;
          uStack_54 = (undefined4)((ulong)lVar3 >> 0x20);
          if ((lVar3 == 0 & param_3) == 1) {
            FUN_1001a7bd2(param_1,0);
          }
          else if (param_4 != (undefined8 *)0x0) {
            FUN_1003a48ca(param_2,param_4);
          }
        }
      }
      lVar3 = FUN_1001ab132(param_1);
      if (lVar3 == 0) {
        local_68 = (long *)0x0;
        local_68 = operator_new(0x28);
        *local_68 = (long)&PTR_FUN_100853158;
        local_68[1] = param_1;
        local_68[2] = (long)&local_58;
        *(byte *)(local_68 + 3) = param_3;
        local_68[4] = (long)param_4;
        FUN_1003a0178(param_2,1,local_88);
        if (local_68 == local_88) {
          lVar3 = 0x20;
        }
        else {
          lVar3 = 0x28;
          if (local_68 == (long *)0x0) goto LAB_1002e5936;
        }
        (**(code **)(*local_68 + lVar3))();
      }
LAB_1002e5936:
      lVar3 = FUN_1001ab132(param_1);
      if (lVar3 == 0) {
        if (param_4 != (undefined8 *)0x0) {
          param_4[8] = 0;
          param_4[9] = 0;
          param_4[6] = 0;
          param_4[7] = 0;
          param_4[4] = 0;
          param_4[5] = 0;
          param_4[2] = 0;
          param_4[3] = 0;
          *param_4 = 0;
          param_4[1] = 0;
        }
        local_58 = 0;
        uStack_54 = 0;
      }
      if (param_5 != (undefined8 *)0x0) {
        *param_5 = CONCAT44(uStack_54,local_58);
      }
      goto LAB_1002e5977;
    }
  }
LAB_1002e5824:
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    local_58 = 0x8220202;
    uStack_54 = 0x7a0a90;
    uStack_50 = 1;
    local_4c = 0x822;
    local_4a = "AlbumInfoIsValid( inAlbumInfo )";
    __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
  }
  FUN_1001782e9(0,1);
  FUN_1001aa318(param_1);
LAB_1002e5977:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

