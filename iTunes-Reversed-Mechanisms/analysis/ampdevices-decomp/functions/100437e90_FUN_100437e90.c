// name: FUN_100437e90
// address: 100437e90

int FUN_100437e90(long param_1,long param_2,byte *param_3,long param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **local_98;
  long local_90;
  byte *local_88;
  long local_80;
  undefined ***local_78;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 8) != 0x616c6269) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "inAlbumInfo->mMagic == kAlbumInfoMagic";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100438010;
    }
    if (*(long *)(param_2 + 0x48) != 0) {
      iVar2 = 0;
      if ((*(char *)(param_1 + 0x14cda) == '\0') || (*(char *)(param_1 + 0x6abf) == '\0'))
      goto LAB_10043803b;
      cVar1 = FUN_1002bec16(param_2,*(undefined1 *)(param_1 + 0x365),
                            *(undefined1 *)(param_1 + 0x39b));
      if (cVar1 != '\0') {
        FUN_100439e7e(param_1,param_4);
        cVar1 = FUN_1002be216(*(undefined8 *)(param_1 + 0x15308),*(undefined8 *)(param_2 + 0x20));
        if (cVar1 == '\0') {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar3 = DAT_1008c75b8;
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar1 != '\0') {
            FUN_1003a0c1e(&local_58,param_2,0);
            local_64 = FUN_1001b83ae(&local_58);
            local_68 = 0x8220102;
            __os_log_impl(0x100000000,uVar3,1,"sync> adding \"%{public}s\" to selected music albums"
                          ,&local_68,0xc);
            FUN_1001b7a50(&local_58);
          }
          FUN_1002c0f3a(*(undefined8 *)(param_1 + 0x15308),*(undefined8 *)(param_2 + 0x20));
          if (param_4 != 0) {
            *(byte *)(param_4 + 1) = *(byte *)(param_4 + 1) | 0x10;
          }
          iVar2 = 0;
          if (param_3 != (byte *)0x0) {
            *param_3 = *param_3 | 0x20;
          }
        }
        goto LAB_10043803b;
      }
      local_98 = &PTR_FUN_100858ea0;
      local_90 = param_1;
      local_88 = param_3;
      local_80 = param_4;
      local_78 = &local_98;
      iVar2 = FUN_1003a0178(param_2,1,&local_98);
      if (local_78 == &local_98) {
        lVar4 = 0x20;
LAB_100438157:
        (**(code **)((long)*local_78 + lVar4))();
      }
      else {
        lVar4 = 0x28;
        if (local_78 != (undefined ***)0x0) goto LAB_100438157;
      }
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      goto LAB_10043803b;
    }
  }
LAB_100438010:
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    local_58 = 0x8220202;
    local_54 = "Assertion failure";
    local_4c = 0x822;
    local_4a = "AlbumInfoIsValid(albumInfo)";
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_10043803b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

