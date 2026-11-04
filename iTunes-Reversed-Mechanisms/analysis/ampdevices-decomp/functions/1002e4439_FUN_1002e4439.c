// name: FUN_1002e4439
// address: 1002e4439

undefined8 FUN_1002e4439(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 local_98 [12];
  undefined4 local_8c;
  long local_88;
  char local_7d;
  uint local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined6 uStack_68;
  undefined2 uStack_62;
  undefined8 uStack_60;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_88 = param_2;
  if ((param_1 == (undefined8 *)0x0) || (param_1[2] == 0)) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_78 = 0x8220202;
      uStack_74 = 0x7a0a90;
      uStack_70 = 1;
      uStack_6c = 0x822;
      uStack_6a = 0xcfad;
      uStack_68 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,1);
    goto LAB_1002e454f;
  }
  if (*(int *)(param_1[2] + 0x80) != 0x74646174) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_78 = 0x8220202;
      uStack_74 = 0x7ab58c;
      uStack_70 = 1;
      uStack_6c = 0x822;
      uStack_6a = 0xec03;
      uStack_68 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    cVar4 = FUN_1001782e9(0,1);
    if (cVar4 == '\0') {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_78 = 0x8220202;
        uStack_74 = 0x7a0a90;
        uStack_70 = 1;
        uStack_6c = 0x822;
        uStack_6a = 0xcfe4;
        uStack_68 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
      }
      FUN_1001782e9(0,1);
      goto LAB_1002e454f;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x2e);
  uVar3 = *(uint *)(local_88 + 0x10);
  pcVar9 = (char *)(ulong)uVar3;
  if ((((0x11 < uVar3) || ((0x37c41U >> (uVar3 & 0x1f) & 1) == 0)) && (uVar3 != 200)) &&
     (uVar3 != 0x65)) goto LAB_1002e454f;
  pcVar10 = pcVar9;
  if (uVar2 == 0) goto switchD_1002e4505_caseD_0;
  uVar7 = 0;
  if (0x11 < uVar3) {
    if ((uVar3 != 0x65) && (uVar3 != 200)) goto switchD_1002e4505_caseD_1;
    if (uVar2 != 0x65) goto LAB_1002e454f;
    goto switchD_1002e4505_caseD_0;
  }
  pcVar10 = (char *)((long)&switchD_1002e4505::switchdataD_1002e4ca4 +
                    (long)(int)(&switchD_1002e4505::switchdataD_1002e4ca4)[(long)pcVar9]);
  switch(pcVar9) {
  case (char *)0x0:
  case (char *)0x6:
  case (char *)0xa:
    goto switchD_1002e4505_caseD_0;
  default:
    goto switchD_1002e4505_caseD_1;
  case (char *)0xb:
  case (char *)0xc:
  case (char *)0xd:
  case (char *)0xe:
    break;
  case (char *)0x10:
    if (param_3 == (undefined8 *)0x0) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_78 = 0x8220202;
        uStack_74 = 0x7a0a90;
        uStack_70 = 1;
        uStack_6c = 0x822;
        uStack_6a = 0xd002;
        uStack_68 = 0x1007b;
        pcVar10 = "%{public}s: (%{public}s)";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
      }
      FUN_1001782e9(0,0);
    }
    cVar4 = FUN_1002e4d34(param_1,param_3);
    goto LAB_1002e4669;
  case (char *)0x11:
    cVar4 = FUN_1002e4e69(param_1,local_88 + 0x18);
LAB_1002e4669:
    if (cVar4 != '\0') goto switchD_1002e4505_caseD_0;
    goto LAB_1002e454f;
  }
  if (((0x11 < uVar2) || ((0x37800U >> (uVar2 & 0x1f) & 1) == 0)) && (uVar2 != 200))
  goto LAB_1002e454f;
switchD_1002e4505_caseD_0:
  FUN_100314161(param_1);
  sVar1 = *(short *)((long)param_1 + 0xc6);
  FUN_1001a8c1c(local_98,param_1 + 0x2c);
  uStack_68 = 0;
  uStack_62 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_6a = 0;
  local_7c = (uint)CONCAT71((int7)((ulong)pcVar10 >> 8),*(char *)((long)param_1 + 0x13e));
  if ((*(char *)((long)param_1 + 0x13e) == '\x01' & (byte)((ushort)sVar1 >> 0xf)) == 1) {
    local_8c = (undefined4)CONCAT71((int7)((ulong)local_88 >> 8),*(int *)(local_88 + 0x10) == 0);
  }
  else {
    local_8c = 0;
  }
  local_7d = FUN_100480cb7(param_1,PTR_cf_cloud_artwork_token_100844ad0);
  if (uVar2 != 0) {
    FUN_1001a7bd2(param_1 + 0x2c,0);
    param_1[0x2d] = 0;
    *(byte *)((long)param_1 + 199) = *(byte *)((long)param_1 + 199) & 0x7f;
  }
  uVar3 = *(uint *)(local_88 + 0x10);
  if ((ulong)uVar3 < 0x12) {
    lVar8 = (long)&switchD_1002e4729::switchdataD_1002e4cec +
            (long)(int)(&switchD_1002e4729::switchdataD_1002e4cec)[uVar3];
    switch(uVar3) {
    case 0:
      goto switchD_1002e4729_caseD_0;
    default:
switchD_1002e4729_caseD_1:
      cVar4 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
      if (cVar4 != '\0') {
        local_58 = local_58 & 0xffff0000;
        __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                            "logic error in TrackInfoSetArtworkSourceInfo()",&local_58,2);
      }
      FUN_100314411(param_1);
      FUN_1001ab006(local_98);
LAB_1002e454f:
      uVar7 = 0;
      goto switchD_1002e4505_caseD_1;
    case 6:
      uVar3 = local_7c;
      if (param_3 != (undefined8 *)0x0) {
        FUN_1002e4f8d(param_1,local_88,param_3,param_4);
        goto LAB_1002e49fd;
      }
      break;
    case 10:
      if (param_3 == (undefined8 *)0x0) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "inOptionalData != nullptr";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      FUN_1002e4f8d(param_1,local_88,param_3,param_4);
LAB_1002e49fd:
      uVar3 = 4;
      if (uVar2 == 0) {
        uVar3 = local_7c & 0xff;
      }
      break;
    case 0xb:
    case 0xc:
    case 0xd:
      uVar3 = local_7c & 0xff;
      if (uVar2 != 0) {
        uVar3 = 0;
      }
      break;
    case 0xe:
      if (param_3 == (undefined8 *)0x0) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "inOptionalData != nullptr";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        lVar8 = FUN_1001782e9(0,0);
      }
      local_7c = (uint)CONCAT71((int7)((ulong)lVar8 >> 8),8);
      FUN_1002e4f8d(param_1,local_88,param_3,param_4);
      uVar3 = local_7c;
      break;
    case 0x10:
      if (param_3 == (undefined8 *)0x0) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "inOptionalData != nullptr";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      iVar6 = FUN_10047d258(param_1,PTR_cf_artwork_data_100844ac0,*param_3,0,0);
      uVar3 = local_7c;
      if (iVar6 == 0) {
        FUN_1005389ba(&local_78,0xac);
        uVar3 = local_7c;
      }
      break;
    case 0x11:
      uVar7 = FUN_10047d258(param_1,PTR_cf_artwork_url_100844ab8,*(undefined8 *)(local_88 + 0x18),0,
                            0);
      if ((int)uVar7 == 0) {
        uVar7 = FUN_1005389ba(&local_78,0xac);
      }
      local_7c = (uint)CONCAT71((int7)((ulong)uVar7 >> 8),8);
      FUN_1002e51b6(param_1,local_88);
      uVar3 = local_7c;
    }
  }
  else {
    if (uVar3 == 0x65) {
      if (param_3 != (undefined8 *)0x0) {
        FUN_1002e4f8d(param_1,local_88,param_3,param_4);
      }
      goto LAB_1002e49fd;
    }
    if (uVar3 != 200) goto switchD_1002e4729_caseD_1;
switchD_1002e4729_caseD_0:
    uVar2 = 0;
    if ((byte)local_8c != '\0') {
      uVar2 = local_7c & 0xff;
    }
    local_7c = uVar2;
    lVar8 = FUN_1001ab132(local_98);
    if (-1 < sVar1 && lVar8 != 0) {
      FUN_1002e3d90(param_1[2],*param_1,local_98,"track");
    }
    cVar4 = FUN_100475919(param_1,PTR_cf_artwork_data_100844ac0,0);
    if (cVar4 != '\0') {
      FUN_1005389ba(&local_78,0xac);
    }
    cVar4 = FUN_100475919(param_1,PTR_cf_artwork_url_100844ab8,0);
    if (cVar4 != '\0') {
      FUN_1005389ba(&local_78,0xac);
    }
    uVar3 = local_7c;
    if (local_7d != '\0') {
      cVar4 = FUN_100475919(param_1,PTR_cf_cloud_artwork_url_100844ad8,0);
      if (cVar4 != '\0') {
        FUN_1005389ba(&local_78,0xac);
      }
      cVar4 = FUN_100475919(param_1,PTR_cf_cloud_artwork_token_100844ad0,0);
      if (cVar4 != '\0') {
        FUN_1005389ba(&local_78,0xac);
      }
      cVar4 = FUN_100475919(param_1,PTR_cf_cloud_artwork_color_values_100844ac8,0);
      uVar3 = local_7c;
      if (cVar4 != '\0') {
        FUN_1005389ba(&local_78,0xac);
        uVar3 = local_7c;
      }
    }
  }
  local_7c = uVar3;
  *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(local_88 + 0x10);
  FUN_1005389ba(&local_78,0x25);
  bVar5 = FUN_1002e5429(param_1,(undefined1)local_7c,0);
  if (((bVar5 | (byte)local_8c) & 1) != 0) {
    FUN_1005389ba(&local_78,0xaf);
  }
  FUN_1004755ef(param_1,0,&local_78);
  FUN_1001ab006(local_98);
  FUN_100314411(param_1);
  uVar7 = 1;
switchD_1002e4505_caseD_1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7;
}

