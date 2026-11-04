// name: FUN_1004eb707
// address: 1004eb707

uint FUN_1004eb707(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  char *pcVar11;
  bool bVar12;
  undefined1 local_88 [16];
  ulong local_78;
  long local_70;
  undefined4 local_68;
  uint local_64;
  undefined2 uStack_60;
  ushort uStack_5e;
  undefined2 uStack_5c;
  undefined8 local_5a;
  uint local_52;
  undefined2 local_4e;
  undefined8 local_4c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1004eb8a5:
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      local_68 = 0x8220202;
      local_64 = 0x7a0a90;
      uStack_60 = 1;
      uStack_5e = 0;
      uStack_5c = 0x822;
      local_5a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = 0;
    goto LAB_1004eb8f5;
  }
  if (*(int *)(param_1 + 8) != 0x64756c63) {
    local_70 = param_5;
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      local_68 = 0x8220202;
      local_64 = 0x7ab58c;
      uStack_60 = 1;
      uStack_5e = 0;
      uStack_5c = 0x822;
      local_5a = "handlerData->magic == kDulcimerHandlerDataMagic";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    cVar2 = FUN_1001782e9(0,1);
    param_5 = local_70;
    if (cVar2 == '\0') goto LAB_1004eb8a5;
  }
  if (((param_2 == 0) || (lVar1 = *(long *)(param_2 + 8), lVar1 == 0)) ||
     (*(long *)(lVar1 + 0x10) == 0)) {
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      local_68 = 0x8220202;
      local_64 = 0x7a0a90;
      uStack_60 = 1;
      uStack_5e = 0;
      uStack_5c = 0x822;
      local_5a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = 0;
    goto LAB_1004eb8f5;
  }
  uVar6 = 0;
  local_70 = param_2;
  if (*(long *)(lVar1 + 0x10) == *(long *)(param_1 + 0x30)) goto LAB_1004eb8f5;
  if ((*(char *)(param_1 + 0x3a2) != '\0') && (*(char *)(param_2 + 0x45) == '\n')) {
    local_78 = *(ulong *)(lVar1 + 0x180);
    uVar9 = FUN_100309008();
    uVar6 = 0;
    if (local_78 == uVar9) goto LAB_1004eb8f5;
  }
  uVar3 = FUN_1004744bf(lVar1,0);
  local_78 = CONCAT44(local_78._4_4_,uVar3);
  uVar9 = local_78;
  local_78._0_1_ = (char)uVar3;
  bVar12 = (char)local_78 < '\0';
  uVar6 = 0xc;
  local_78 = uVar9;
  if (bVar12) goto LAB_1004eb8f5;
  cVar2 = FUN_1002b630e(local_70);
  uVar6 = 0x2e;
  if (cVar2 != '\0') goto LAB_1004eb8f5;
  uVar6 = 0x2f;
  if (((*(int *)(local_70 + 0x3c) == 0x48545450) || (*(int *)(local_70 + 0x3c) == 0x53485244)) ||
     (uVar6 = 5, *(char *)(local_70 + 0x45) != '\0')) goto LAB_1004eb8f5;
  iVar4 = FUN_1004e9858(local_70,1);
  if (iVar4 == 0x3f3f3f3f) {
    if (*(char *)(local_70 + 0x44) == '\x01') {
      uVar6 = 0xc - ((*(byte *)(lVar1 + 0xc4) & 0x80) == 0);
    }
    goto LAB_1004eb8f5;
  }
  if ((*(int *)(local_70 + 0x3c) == 0x46494c45) || (*(int *)(local_70 + 0x3c) == 0x4d46494c)) {
    uVar3 = 0;
    uVar5 = FUN_1004ea578(param_1,param_5,*(undefined8 *)(local_70 + 0x80),iVar4,local_70,0,0);
    uVar6 = uVar5;
    if (3 < uVar5) goto LAB_1004eb8f5;
    cVar2 = FUN_100536061();
    if (cVar2 != '\0') {
      if (*(long *)(lVar1 + 0x10) == 0) {
        uVar8 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar8,0x10);
        if (cVar2 != '\0') {
          local_68 = 0x8220202;
          local_64 = 0x7a0a90;
          uStack_60 = 1;
          uStack_5e = 0;
          uStack_5c = 0x822;
          local_5a = "trackData != nullptr";
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else if (((*(int *)(*(long *)(lVar1 + 0x10) + 0x84) == 0x4433504d) &&
               (*(long *)(*(long *)(local_70 + 0x10) + 8) == 0)) &&
              (*(int *)(local_70 + 0x3c) == 0x46494c45)) {
        FUN_1003c3248(local_70,1,0,0,0,0);
      }
      if (((*(long *)(*(long *)(local_70 + 0x10) + 8) != 0) &&
          ((~*(uint *)(local_70 + 0x48) & 0x480) != 0)) &&
         (FUN_1003c3248(local_70,1,0,0,0,0), (~*(uint *)(local_70 + 0x48) & 0x480) != 0)) {
        uVar8 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar8,0x10);
        if (cVar2 != '\0') {
          local_68 = 0x8220202;
          local_64 = 0x7a0a90;
          uStack_60 = 1;
          uStack_5e = 0;
          uStack_5c = 0x822;
          local_5a = "trackInstance->drmVersionsValid && trackInstance->drmPlatformIDValid";
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
        }
        FUN_1001782e9(0,0);
      }
      lVar1 = *(long *)(local_70 + 0x10);
      uVar6 = FUN_1002d813d(param_1,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x28),
                            *(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x30),
                            *(undefined4 *)(lVar1 + 0x84),CONCAT44(uVar3,(undefined4)local_78),
                            param_4);
      if (uVar6 != 0) {
LAB_1004ebd52:
        uVar5 = uVar6;
        if (3 < uVar6) goto LAB_1004eb8f5;
      }
LAB_1004ebd5f:
      if (*(long *)(param_1 + 0x440) != 0) {
        if (uVar5 == 3) {
          uVar9 = *(ulong *)(*(long *)(local_70 + 0x10) + 0xa0);
          if (uVar9 == 0) {
            uVar8 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar8,0x10);
            if (cVar2 != '\0') {
              local_68 = 0x8220202;
              local_64 = 0x7a0a90;
              uStack_60 = 1;
              uStack_5e = 0;
              uStack_5c = 0x822;
              local_5a = "fileSize != 0";
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
            }
            FUN_1001782e9(0,0);
            uVar9 = 0;
          }
        }
        else if (uVar5 == 1) {
          uVar9 = FUN_1005dfe52(*(undefined4 *)(local_70 + 0x50),*(undefined4 *)(local_70 + 100),
                                (uint)*(ushort *)(param_1 + 0x14df6) * 1000,0);
        }
        else {
          uVar9 = *(ulong *)(local_70 + 0x68);
        }
        uVar6 = 0x19;
        if (*(ulong *)(param_1 + 0x440) <= uVar9) goto LAB_1004eb8f5;
      }
      uVar7 = FUN_1004eb10a(param_1,local_78 & 0xffffffff);
      uVar6 = uVar5;
      if (uVar7 != 0) {
        uVar6 = uVar7;
      }
      goto LAB_1004eb8f5;
    }
    if ((iVar4 != 0x41554458) && (iVar4 != 0x41554442)) goto LAB_1004ebd5f;
    uVar6 = FUN_1004ec20c(param_1,*(undefined8 *)(*(long *)(local_70 + 0x10) + 8),0,param_3);
    if (uVar6 == 6) {
      cVar2 = FUN_1002b14bd(local_70);
      if (cVar2 != '\0') {
        uVar6 = FUN_1004ec20c(param_1,*(undefined8 *)(*(long *)(local_70 + 0x10) + 8),1,param_3);
        goto LAB_1004ebbf1;
      }
    }
    else {
LAB_1004ebbf1:
      if (uVar6 != 6) goto LAB_1004ebd52;
    }
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar8 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    uVar6 = 6;
    if (cVar2 == '\0') goto LAB_1004eb8f5;
    FUN_100476ac1(local_88,lVar1);
    uVar10 = FUN_1001b83ae(local_88);
    local_5a = *(char **)(*(long *)(local_70 + 0x10) + 8);
    local_68 = 0x8220202;
    local_64 = (uint)uVar10;
    uStack_60 = (undefined2)((ulong)uVar10 >> 0x20);
    uStack_5e = (ushort)((ulong)uVar10 >> 0x30);
    uStack_5c = 0x800;
    pcVar11 = "sync> not authorized for Audible track \"%{public}s\", group id %llu";
    uVar10 = 0x16;
  }
  else {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar8 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    uVar6 = 0xb;
    if (cVar2 == '\0') goto LAB_1004eb8f5;
    uVar5 = *(uint *)(local_70 + 0x3c);
    FUN_100476ac1(local_88,*(undefined8 *)(local_70 + 8));
    local_4c = FUN_1001b83ae(local_88);
    local_52 = uVar5 & 0xff;
    uStack_5e = (ushort)(uVar5 >> 0x10) & 0xff;
    local_64 = uVar5 >> 0x18;
    local_68 = 0x4000502;
    uStack_60 = 0x400;
    uStack_5c = 0;
    local_5a = (char *)CONCAT26(0x400,CONCAT42(uVar5 >> 8,0x400) & 0xffffff);
    local_4e = 0x822;
    pcVar11 = "sync> unsupported track kind \'%c%c%c%c\' for track \"%{public}s\"";
    uVar10 = 0x24;
  }
  __os_log_impl(0x100000000,uVar8,1,pcVar11,&local_68,uVar10);
  FUN_1001b7a50(local_88);
LAB_1004eb8f5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

