// name: FUN_1003627d4
// address: 1003627d4

undefined8 FUN_1003627d4(long param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  char cVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  undefined1 local_a0 [16];
  ulong local_90;
  undefined1 local_88 [16];
  undefined4 local_78;
  char *local_74;
  undefined2 local_6c;
  uint local_6a;
  undefined2 uStack_66;
  ushort uStack_64;
  short sStack_62;
  undefined1 local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_a0);
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar12 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar12,0x10);
    if (cVar8 != '\0') {
      pcVar10 = "TrackInfoIsValid(dbTrackInfo)";
LAB_1003632a4:
      local_6c = 0x822;
      local_74 = "Assertion failure";
      local_78 = 0x8220202;
      local_6a = (uint)pcVar10;
      uStack_66 = (undefined2)((ulong)pcVar10 >> 0x20);
      uStack_64 = 0;
      __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
  }
  else {
    if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
      FUN_1001c62d9(local_58,0x20);
      local_90 = *(ulong *)(param_1 + 0x28);
      lVar5 = *(long *)(param_1 + 0x40);
      lVar6 = *(long *)(param_2 + 0x28);
      lVar7 = *(long *)(param_2 + 0x40);
      FUN_100476ac1(&local_78,param_1);
      FUN_1001b80b2(local_a0,&local_78);
      FUN_1001b7a50(&local_78);
      if (*(int *)(param_2 + 0x148) != 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar12 = DAT_1008c75b8;
        cVar8 = _os_log_type_enabled(DAT_1008c75b8,2);
        if (cVar8 != '\0') {
          local_74 = (char *)FUN_1001b83ae(local_a0);
          local_6a = *(uint *)(param_2 + 0x148);
          local_78 = 0x8220202;
          local_6c = 0x400;
          __os_log_impl(0x100000000,uVar12,2,
                        "sync>  updating play count of library track \"%{public}s\" by %u",&local_78
                        ,0x12);
        }
        *(ulong *)(param_1 + 0x144) =
             CONCAT44(*(int *)(param_2 + 0x148) +
                      (int)((ulong)*(undefined8 *)(param_1 + 0x144) >> 0x20),
                      *(int *)(param_2 + 0x148) + (int)*(undefined8 *)(param_1 + 0x144));
        FUN_1005389ba(local_58,0x16);
        if ((*(byte *)(param_1 + 0xc5) & 0x20) == 0) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar12 = DAT_1008c75b8;
          cVar8 = _os_log_type_enabled(DAT_1008c75b8,2);
          if (cVar8 != '\0') {
            local_74 = (char *)FUN_1001b83ae(local_a0);
            local_78 = 0x8220102;
            __os_log_impl(0x100000000,uVar12,2,
                          "sync>  setting has been played flag of library track \"%{public}s\"",
                          &local_78,0xc);
          }
          *(byte *)(param_1 + 0xc5) = *(byte *)(param_1 + 0xc5) | 0x20;
          FUN_10036343a(param_1,4,1);
          FUN_1005389ba(local_58,0x5f);
        }
        if (*(uint *)(param_1 + 0x14c) < *(uint *)(param_2 + 0x14c)) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar12 = DAT_1008c75b8;
          cVar8 = _os_log_type_enabled(DAT_1008c75b8,2);
          if (cVar8 != '\0') {
            pcVar10 = (char *)FUN_1001b83ae(local_a0);
            FUN_100363868(local_88,*(undefined4 *)(param_2 + 0x14c));
            uVar11 = FUN_1001b83ae(local_88);
            local_78 = 0x8220202;
            local_6c = 0x822;
            local_6a = (uint)uVar11;
            uStack_66 = (undefined2)((ulong)uVar11 >> 0x20);
            uStack_64 = (ushort)((ulong)uVar11 >> 0x30);
            local_74 = pcVar10;
            __os_log_impl(0x100000000,uVar12,2,
                          "sync>  setting play date of library track \"%{public}s\" to %{public}s",
                          &local_78,0x16);
            FUN_1001b7a50(local_88);
          }
          *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
          FUN_1005389ba(local_58,0x17);
        }
        FUN_10036343a(param_1,1,*(undefined4 *)(param_2 + 0x148));
      }
      if (*(int *)(param_2 + 0x154) != 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar12 = DAT_1008c75b8;
        cVar8 = _os_log_type_enabled(DAT_1008c75b8,2);
        if (cVar8 != '\0') {
          local_74 = (char *)FUN_1001b83ae(local_a0);
          local_6a = *(uint *)(param_2 + 0x154);
          local_78 = 0x8220202;
          local_6c = 0x400;
          __os_log_impl(0x100000000,uVar12,2,
                        "sync>  updating skip count of library track \"%{public}s\" by %u",&local_78
                        ,0x12);
        }
        *(ulong *)(param_1 + 0x150) =
             CONCAT44(*(int *)(param_2 + 0x154) +
                      (int)((ulong)*(undefined8 *)(param_1 + 0x150) >> 0x20),
                      *(int *)(param_2 + 0x154) + (int)*(undefined8 *)(param_1 + 0x150));
        FUN_1005389ba(local_58,0x44);
        if (*(uint *)(param_1 + 0x158) < *(uint *)(param_2 + 0x158)) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar12 = DAT_1008c75b8;
          cVar8 = _os_log_type_enabled(DAT_1008c75b8,2);
          if (cVar8 != '\0') {
            pcVar10 = (char *)FUN_1001b83ae(local_a0);
            FUN_100363868(local_88,*(undefined4 *)(param_2 + 0x158));
            uVar11 = FUN_1001b83ae(local_88);
            local_78 = 0x8220202;
            local_6c = 0x822;
            local_6a = (uint)uVar11;
            uStack_66 = (undefined2)((ulong)uVar11 >> 0x20);
            uStack_64 = (ushort)((ulong)uVar11 >> 0x30);
            local_74 = pcVar10;
            __os_log_impl(0x100000000,uVar12,2,
                          "sync>  setting skip date of library track \"%{public}s\" to %{public}s",
                          &local_78,0x16);
            FUN_1001b7a50(local_88);
          }
          *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
          FUN_1005389ba(local_58,0x45);
        }
        FUN_10036343a(param_1,2,*(undefined4 *)(param_2 + 0x154));
      }
      if (((-1 < *(char *)(param_2 + 0x12e)) &&
          (cVar8 = *(char *)(param_2 + 300), *(char *)(param_2 + 0x12e) != cVar8)) &&
         (cVar1 = *(char *)(param_1 + 300), cVar1 != cVar8)) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar12 = DAT_1008c75b8;
        cVar9 = _os_log_type_enabled(DAT_1008c75b8,2);
        if (cVar9 != '\0') {
          local_74 = (char *)FUN_1001b83ae(local_a0);
          local_78 = 0x8220302;
          local_6c = 0x400;
          uStack_66 = 0x400;
          uStack_64 = (ushort)cVar1;
          sStack_62 = (short)(cVar1 >> 7);
          local_6a = (int)cVar8;
          __os_log_impl(0x100000000,uVar12,2,
                        "sync>  setting rating of library track \"%{public}s\" to %u, was %u",
                        &local_78,0x18);
        }
        FUN_100320aca(param_1,(int)cVar8,0);
        *(char *)(param_1 + 0x12e) = cVar8;
        *(char *)(param_2 + 0x12e) = cVar8;
        FUN_1005389ba(local_58,0x19);
      }
      bVar2 = *(byte *)(param_2 + 0x134);
      if ((bVar2 != *(byte *)(param_1 + 0x134)) && (bVar2 != *(byte *)(param_2 + 0x135))) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar12 = DAT_1008c75b8;
        cVar8 = _os_log_type_enabled(DAT_1008c75b8,2);
        if (cVar8 != '\0') {
          local_74 = (char *)FUN_1001b83ae(local_a0);
          local_78 = 0x8220302;
          local_6c = 0x400;
          local_6a = (uint)bVar2;
          uStack_66 = 0x400;
          uStack_64 = (ushort)*(byte *)(param_2 + 0x135);
          sStack_62 = 0;
          __os_log_impl(0x100000000,uVar12,2,
                        "sync>  setting liked state of library track \"%{public}s\" to %u, was %u",
                        &local_78,0x18);
        }
        *(byte *)(param_1 + 0x134) = bVar2;
        *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
        *(byte *)(param_1 + 0x135) = bVar2;
        *(byte *)(param_2 + 0x135) = bVar2;
        FUN_1005389ba(local_58,0x9a);
        FUN_1005389ba(local_58,0xb7);
      }
      bVar2 = *(byte *)(lVar6 + 0xe6);
      if ((bVar2 != *(byte *)(local_90 + 0xe6)) && (bVar2 != *(byte *)(lVar6 + 0xe7))) {
        uVar3 = *(undefined4 *)(lVar6 + 0x84);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar12 = DAT_1008c75b8;
        cVar8 = _os_log_type_enabled(DAT_1008c75b8,2);
        if (cVar8 != '\0') {
          FUN_1003a0c1e(local_88,local_90,0);
          local_74 = (char *)FUN_1001b83ae(local_88);
          local_78 = 0x8220302;
          local_6c = 0x400;
          uStack_66 = 0x400;
          uStack_64 = (ushort)*(byte *)(lVar6 + 0xe7);
          sStack_62 = 0;
          local_6a = (uint)bVar2;
          __os_log_impl(0x100000000,uVar12,2,
                        "sync>  setting liked state of library album \"%{public}s\" to %u, was %u",
                        &local_78,0x18);
          FUN_1001b7a50(local_88);
        }
        FUN_1003a2e74(local_90,bVar2,uVar3);
        *(byte *)(local_90 + 0xe7) = bVar2;
        *(byte *)(lVar6 + 0xe7) = bVar2;
        FUN_1005389ba(local_58,0x9c);
      }
      bVar2 = *(byte *)(lVar7 + 0x88);
      if ((bVar2 != *(byte *)(lVar5 + 0x88)) && (bVar2 != *(byte *)(lVar7 + 0x89))) {
        local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)(lVar7 + 0xa4));
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar12 = DAT_1008c75b8;
        cVar8 = _os_log_type_enabled(DAT_1008c75b8,2);
        if (cVar8 != '\0') {
          FUN_1005e46c0(local_88,lVar5,0);
          local_74 = (char *)FUN_1001b83ae(local_88);
          local_78 = 0x8220302;
          local_6c = 0x400;
          uStack_66 = 0x400;
          uStack_64 = (ushort)*(byte *)(lVar7 + 0x89);
          sStack_62 = 0;
          local_6a = (uint)bVar2;
          __os_log_impl(0x100000000,uVar12,2,
                        "sync>  setting liked state of library artist \"%{public}s\" to %u, was %u",
                        &local_78,0x18);
          FUN_1001b7a50(local_88);
        }
        FUN_1005e650c(lVar5,bVar2,local_90 & 0xffffffff);
        *(byte *)(lVar5 + 0x89) = bVar2;
        *(byte *)(lVar7 + 0x89) = bVar2;
      }
      uVar13 = *(uint *)(*(long *)(param_2 + 0x80) + 0xc);
      uVar14 = *(uint *)(*(long *)(param_1 + 0x80) + 0xc);
      if (uVar13 == uVar14) {
        uVar12 = 0;
      }
      else {
        uVar4 = *(uint *)(*(long *)(param_2 + 0x80) + 0x10);
        if (uVar13 == uVar4) {
          bVar15 = (*(byte *)(param_1 + 0xc5) & 0x20) == 0;
        }
        else {
          if (uVar14 != uVar4) {
            bVar15 = true;
            if ((*(byte *)(param_1 + 0xc5) & 0x20) == 0) goto LAB_100363110;
            if (uVar13 <= uVar14) {
              uVar13 = uVar14;
            }
          }
          bVar15 = false;
          uVar14 = uVar13;
        }
LAB_100363110:
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar12 = DAT_1008c75b8;
        cVar8 = _os_log_type_enabled(DAT_1008c75b8,2);
        if (cVar8 != '\0') {
          local_74 = (char *)FUN_1001b83ae(local_a0);
          local_78 = 0x8220202;
          local_6c = 0x400;
          local_6a = uVar14;
          __os_log_impl(0x100000000,uVar12,2,
                        "sync>  setting bookmark time of library track \"%{public}s\" to %u",
                        &local_78,0x12);
        }
        FUN_10047f6a5(param_1,uVar14,0,1,0);
        FUN_10047f6a5(param_2,uVar14,0,1,0);
        FUN_100473a90(param_2);
        *(uint *)(*(long *)(param_2 + 0x80) + 0x10) = uVar14;
        uVar12 = 1;
        if (!bVar15) {
          if ((*(byte *)(param_1 + 0xc5) & 0x20) == 0) {
            FUN_1005389ba(local_58,0x5f);
          }
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar11 = DAT_1008c75b8;
          cVar8 = _os_log_type_enabled(DAT_1008c75b8,2);
          if (cVar8 != '\0') {
            local_74 = (char *)FUN_1001b83ae(local_a0);
            local_78 = 0x8220102;
            __os_log_impl(0x100000000,uVar11,2,
                          "sync>  setting has been played flag of library track \"%{public}s\"",
                          &local_78,0xc);
          }
          FUN_10047fa76(param_1,1,1,1,0);
        }
      }
      cVar8 = FUN_100539270(local_58);
      if (cVar8 != '\0') {
        uVar12 = 1;
        FUN_1004755ef(param_1,0,local_58);
      }
      goto LAB_1003630a8;
    }
    uVar12 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar12,0x10);
    if (cVar8 != '\0') {
      pcVar10 = "TrackInfoIsValid(iPodTrackInfo)";
      goto LAB_1003632a4;
    }
  }
  uVar12 = 0;
  FUN_1001782e9(0,0);
LAB_1003630a8:
  FUN_1001b7a50(local_a0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar12;
}

