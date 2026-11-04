// name: FUN_10055ef56
// address: 10055ef56

ulong FUN_10055ef56(long param_1,long param_2,int param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  int *piVar9;
  long lVar10;
  bool bVar11;
  bool bVar12;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "inAlbumInfo1 != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = 1;
    goto LAB_10055f30a;
  }
  if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "inAlbumInfo2 != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = 0xffffffff;
    goto LAB_10055f30a;
  }
  if (param_1 == param_2) {
    uVar6 = 0;
    goto LAB_10055f30a;
  }
  if (param_3 < 0x1b) {
    if (param_3 == 3) {
      local_58 = 0;
      uStack_54 = 0;
      local_68 = 0;
      local_5c = 0;
      local_60 = 0;
      if ((param_4 & 0x40) == 0) {
LAB_10055f27b:
        if ((*(int *)(param_1 + 0x10) == 2) && (*(int *)(param_2 + 0x10) == 2)) {
          uVar7 = 0;
          bVar11 = true;
          goto LAB_10055f2cf;
        }
        FUN_1003a1036(param_1,1,&local_58,&local_5c);
LAB_10055f2a3:
        piVar9 = (int *)&local_68;
        puVar8 = &local_60;
        lVar10 = param_2;
LAB_10055f2ae:
        FUN_1003a1036(lVar10,1,piVar9,puVar8);
      }
      else {
        cVar1 = FUN_10055f32e(param_1);
        bVar11 = true;
        if (cVar1 != '\0') {
          if ((*(byte *)(param_1 + 0xf8) & 2) == 0) {
            FUN_10055ea6a(param_1);
          }
          if (*(long *)(param_1 + 0x60) != 0) {
            FUN_100477006(*(long *)(param_1 + 0x60),&local_58,&local_5c);
            bVar11 = false;
          }
        }
        cVar1 = FUN_10055f32e(param_2);
        if (cVar1 == '\0') {
LAB_10055f276:
          if (bVar11) goto LAB_10055f27b;
          goto LAB_10055f2a3;
        }
        if ((*(byte *)(param_2 + 0xf8) & 2) == 0) {
          FUN_10055ea6a(param_2);
        }
        if (*(long *)(param_2 + 0x60) == 0) goto LAB_10055f276;
        FUN_100477006(*(long *)(param_2 + 0x60),&local_68,&local_60);
        if (bVar11) {
          piVar9 = &local_58;
          puVar8 = &local_5c;
          lVar10 = param_1;
          goto LAB_10055f2ae;
        }
      }
      uVar2 = FUN_1002dd449(CONCAT44(uStack_54,local_58),local_5c,local_68,local_60);
      uVar7 = (ulong)uVar2;
      bVar11 = false;
    }
    else {
      if (param_3 != 4) {
        if (param_3 == 0x10) goto LAB_10055f0cf;
        goto LAB_10055f2d5;
      }
LAB_10055f064:
      FUN_1003a12b6(param_1,0,1,0,&local_58,&local_5c);
      FUN_1003a12b6(param_2,0,1,0,&local_68,&local_60);
      bVar11 = (char)local_60 != '\0' || (char)local_68 == '\0';
      uVar7 = (ulong)(bVar11 - 1);
      if (((char)local_58 != '\0') && (uVar6 = (ulong)bVar11, (char)local_5c == '\0'))
      goto LAB_10055f30a;
    }
LAB_10055f2cf:
    uVar6 = uVar7;
    if (!bVar11) goto LAB_10055f30a;
LAB_10055f2d5:
    uVar4 = FUN_1003a18fc(param_1,param_3);
    uVar5 = FUN_1003a18fc(param_2,param_3);
    uStack_54 = 0;
    local_58 = param_3;
    uVar6 = FUN_1002dfd64(uVar4,uVar5,&local_58,param_4);
  }
  else {
    if (param_3 < 0xba) {
      if ((param_3 != 0x1b) && (param_3 != 0x1e)) goto LAB_10055f2d5;
      bVar11 = *(uint *)(param_1 + 0x18) < *(uint *)(param_2 + 0x18);
      bVar12 = *(uint *)(param_1 + 0x18) == *(uint *)(param_2 + 0x18);
    }
    else {
      if (param_3 != 0xba) {
        if (param_3 == 0xc2) goto LAB_10055f064;
        goto LAB_10055f2d5;
      }
LAB_10055f0cf:
      if ((*(byte *)(param_1 + 0xf9) & 8) == 0) {
        uVar2 = FUN_1003a4b24(param_1);
        *(uint *)(param_1 + 0x7c) = uVar2;
        *(byte *)(param_1 + 0xf9) = *(byte *)(param_1 + 0xf9) | 8;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x7c);
      }
      if ((*(byte *)(param_2 + 0xf9) & 8) == 0) {
        uVar3 = FUN_1003a4b24(param_2);
        *(uint *)(param_2 + 0x7c) = uVar3;
        *(byte *)(param_2 + 0xf9) = *(byte *)(param_2 + 0xf9) | 8;
      }
      else {
        uVar3 = *(uint *)(param_2 + 0x7c);
      }
      bVar11 = uVar2 < uVar3;
      bVar12 = uVar2 == uVar3;
    }
    uVar6 = 0xffffffff;
    if (!bVar11) {
      uVar6 = (ulong)(!bVar11 && !bVar12);
    }
  }
LAB_10055f30a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

