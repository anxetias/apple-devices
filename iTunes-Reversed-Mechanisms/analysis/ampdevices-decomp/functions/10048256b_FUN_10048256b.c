// name: FUN_10048256b
// address: 10048256b

undefined8 FUN_10048256b(int *param_1,byte *param_2)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  byte bVar10;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (byte *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    uVar9 = 0xffffffce;
    if (cVar4 == '\0') goto LAB_100482c69;
    local_4a = "info != nullptr";
    goto LAB_100482c44;
  }
  FUN_1001c62d9(param_2,0xe);
  if (param_1 == (int *)0x0) {
LAB_100482688:
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    uVar9 = 0xffffffce;
    if (cVar4 != '\0') {
      local_4a = "PlaylistIsValid(playlist)";
      goto LAB_100482c44;
    }
    goto LAB_100482c69;
  }
  if (*param_1 != 0x706c7374) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be true)";
      local_4c = 0x822;
      local_4a = "playlist->magic == \'plst\'";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar4 = FUN_1001782e9(0,1);
    if (cVar4 == '\0') goto LAB_100482688;
  }
  lVar3 = *(long *)(param_1 + 2);
  iVar2 = *(int *)(lVar3 + 0x84);
  if (iVar2 == 0x69646172) {
    bVar10 = 0;
  }
  else {
    bVar10 = 1;
    if (iVar2 == 0x20647664) {
      param_2[6] = 1;
      param_2[7] = 1;
    }
    else if (((iVar2 == 0x2062696c) && ((*(byte *)(param_1 + 0xcc) & 0x80) == 0)) &&
            (1 < *(uint *)(*(long *)(param_1 + 0x1e) + 0x18))) {
      param_2[4] = 1;
    }
  }
  if ((*(byte *)(param_1 + 0x90) & 4) != 0) {
    if (iVar2 < 0x6d657274) {
      if (iVar2 < 0x4433504d) {
        if (iVar2 == 0) goto switchD_10048270f_caseD_1e;
        if (iVar2 == 0x2062696c) {
          param_2[10] = 1;
          param_2[0xb] = 0;
          lVar7 = lVar3;
          if (DAT_1008bf931 == '\0') {
            cVar4 = FUN_1001cd44e("show-library-playlist",0,0);
            DAT_1008bf931 = (cVar4 == '\0') + '\x01';
            lVar7 = *(long *)(param_1 + 2);
          }
          *param_2 = DAT_1008bf931 == '\x02' & *(byte *)(lVar7 + 0x1bb0);
        }
        else if (iVar2 == 0x20647664) goto LAB_1004827b3;
      }
      else if (iVar2 < 0x646f5069) {
        if ((iVar2 == 0x4433504d) || (iVar2 == 0x64637561)) {
LAB_1004827b3:
          param_2[10] = 0x43;
          param_2[0xb] = 0;
          goto LAB_1004828ac;
        }
      }
      else if (iVar2 == 0x646f5069) {
        param_2[10] = 0x41;
        param_2[0xb] = 0;
      }
      else if (iVar2 == 0x69646172) goto switchD_10048270f_caseD_1e;
    }
    else if (iVar2 < 0x7264656d) {
      if (iVar2 == 0x6d657274) {
        param_2[10] = 0x45;
        param_2[0xb] = 0;
        goto LAB_1004828ac;
      }
      if ((iVar2 == 0x706d6574) || (iVar2 == 0x70746e63)) goto switchD_10048270f_caseD_1e;
    }
    else if (iVar2 < 0x74736574) {
      if (iVar2 == 0x7264656d) goto switchD_10048270f_caseD_1e;
      if (iVar2 == 0x72767273) {
        param_2[10] = 0x62;
        param_2[0xb] = 0;
        param_2[7] = 1;
      }
    }
    else {
      if (iVar2 == 0x74736574) goto switchD_10048270f_caseD_1e;
      if (iVar2 == 0x77615269) {
        param_2[10] = 0x44;
        param_2[0xb] = 0;
      }
    }
    goto switchD_10048270f_caseD_8;
  }
  uVar1 = *(ushort *)(param_1 + 4);
  if (uVar1 == 0) {
LAB_100482913:
    FUN_100491e8f(param_1,param_2);
    goto switchD_10048270f_caseD_8;
  }
  switch(uVar1) {
  case 1:
    uVar8 = 5;
    if (iVar2 != 0x646f5069) {
      uVar8 = 0x8a;
    }
    *(undefined2 *)(param_2 + 10) = uVar8;
    *param_2 = iVar2 != 0x646f5069;
    param_2[3] = 1;
    param_2[8] = 1;
    param_2[9] = 1;
    param_2[6] = 1;
    break;
  case 2:
    param_2[10] = 5;
    param_2[0xb] = 0;
    goto LAB_100482a21;
  case 3:
    param_2[10] = 7;
    param_2[0xb] = 0;
LAB_100482a21:
    param_2[3] = 1;
    goto LAB_100482ae0;
  case 4:
    param_2[10] = 3;
    param_2[0xb] = 0;
    param_2[2] = 0;
    break;
  case 5:
    param_2[10] = 10;
    param_2[0xb] = 0;
    goto LAB_100482ae0;
  case 6:
    param_2[3] = 1;
    param_2[4] = 0;
    param_2[6] = 1;
    param_2[8] = 1;
    param_2[9] = 1;
    param_2[10] = 0xb;
    param_2[0xb] = 0;
    param_2[0] = 0;
    param_2[1] = 1;
    break;
  case 7:
    param_2[10] = 4;
    param_2[0xb] = 0;
    param_2[1] = 1;
    param_2[6] = 1;
    param_2[3] = 1;
    param_2[4] = 0;
    param_2[9] = 1;
    break;
  case 8:
  case 9:
  case 0x15:
  case 0x18:
  case 0x44:
    break;
  case 10:
    param_2[10] = 8;
    param_2[0xb] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
  case 0x1e:
switchD_10048270f_caseD_1e:
    *param_2 = 1;
    break;
  case 0xb:
    param_2[10] = 8;
    param_2[0xb] = 0;
    goto LAB_100482cb8;
  case 0xc:
    param_2[10] = 0x83;
    param_2[0xb] = 0;
    goto LAB_1004828ac;
  case 0xd:
  case 0xe:
  case 0x2a:
    param_2[10] = 0x62;
    param_2[0xb] = 0;
    break;
  case 0xf:
    param_2[10] = 0x24;
    param_2[0xb] = 0;
    break;
  case 0x10:
    param_2[10] = 0x8a;
    param_2[0xb] = 0;
    param_2[1] = 1;
    param_2[6] = 1;
    param_2[7] = 1;
    param_2[8] = 1;
    goto LAB_100482b49;
  case 0x11:
  case 0x1c:
    param_2[10] = 0x8a;
    param_2[0xb] = 0;
    break;
  case 0x12:
  case 0x16:
  case 0x17:
  case 0x19:
  case 0x1b:
  case 0x1f:
  case 0x21:
  case 0x22:
  case 0x24:
  case 0x32:
  case 0x34:
  case 0x36:
  case 0x37:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3e:
  case 0x47:
switchD_10048270f_caseD_12:
    *param_2 = 1;
    param_2[8] = 1;
    param_2[9] = 1;
    break;
  case 0x13:
  case 0x2e:
    param_2[8] = 1;
    param_2[9] = 1;
    param_2[10] = 0x85;
    param_2[0xb] = 0;
    goto switchD_10048270f_caseD_1e;
  case 0x14:
    param_2[10] = 0x23;
    param_2[0xb] = 0;
    break;
  case 0x1a:
    param_2[10] = 0x82;
    param_2[0xb] = 0;
    bVar5 = FUN_10036a52f();
    *param_2 = bVar5 ^ 1;
    param_2[4] = 0;
    param_2[8] = 1;
    break;
  case 0x1d:
    *param_2 = 1;
    param_2[2] = 0;
    param_2[3] = 1;
    param_2[4] = 0;
    break;
  case 0x20:
    param_2[10] = 0x82;
    param_2[0xb] = 0;
    param_2[8] = 1;
    param_2[0] = 1;
    param_2[1] = 1;
    break;
  case 0x23:
    param_2[10] = 0x86;
    param_2[0xb] = 0;
    bVar5 = 1;
    if ((*(byte *)(lVar3 + 0x1bb0) & 1) != 0) {
      bVar5 = FUN_10036a5a1();
      bVar5 = bVar5 ^ 1;
    }
    *param_2 = bVar5;
    param_2[1] = 1;
    param_2[8] = 1;
    break;
  case 0x25:
    param_2[10] = 0x82;
    param_2[0xb] = 0;
    *param_2 = 1;
    param_2[8] = 1;
LAB_1004828ac:
    param_2[6] = 1;
    param_2[7] = 1;
    break;
  case 0x26:
    param_2[10] = 0x8a;
    param_2[0xb] = 0;
    param_2[1] = 1;
    param_2[6] = 1;
    param_2[7] = 1;
    param_2[8] = 1;
    break;
  case 0x27:
    param_2[10] = 0x89;
    param_2[0xb] = 0;
    break;
  case 0x28:
  case 0x38:
    param_2[1] = 1;
    param_2[6] = 1;
    param_2[8] = 1;
    param_2[9] = 1;
    param_2[10] = 0x21;
    param_2[0xb] = 0;
LAB_100482b49:
    param_2[3] = 0;
    break;
  case 0x29:
    param_2[10] = 2;
    param_2[0xb] = 0;
    param_2[3] = 1;
    *param_2 = 0;
    param_2[7] = 1;
    break;
  case 0x2b:
    param_2[10] = 0x22;
    param_2[0xb] = 0;
    param_2[0] = 1;
    param_2[1] = 1;
    param_2[6] = 1;
    param_2[7] = 1;
    param_2[8] = 1;
    param_2[9] = 1;
    break;
  case 0x2c:
    param_2[10] = 0x89;
    param_2[0xb] = 0;
    goto LAB_100482a9e;
  case 0x2d:
  case 0x31:
  case 0x33:
  case 0x35:
switchD_10048270f_caseD_2d:
    param_2[10] = 0x8a;
    param_2[0xb] = 0;
    param_2[6] = 1;
    param_2[7] = 1;
    param_2[8] = uVar1 != 0x35;
    param_2[9] = 1;
    param_2[0] = 1;
    param_2[1] = 1;
    break;
  case 0x2f:
    param_2[10] = 3;
    param_2[0xb] = 0;
    param_2[2] = 0;
    param_2[8] = 1;
    param_2[6] = 1;
    lVar7 = FUN_100279b99();
    *param_2 = *(byte *)(lVar7 + 6);
    break;
  case 0x30:
    param_2[10] = 6;
    param_2[0xb] = 0;
    param_2[2] = 0;
    param_2[3] = 1;
    param_2[8] = 0;
    param_2[6] = 1;
    *param_2 = 0;
    break;
  case 0x3c:
    if (iVar2 != 0x646f5069) goto switchD_10048270f_caseD_3f;
    param_2[10] = 9;
    param_2[0xb] = 0;
LAB_100482ae0:
    *param_2 = 0;
    break;
  case 0x3d:
    param_2[10] = 0x81;
    param_2[0xb] = 0;
LAB_100482a9e:
    param_2[6] = 1;
    break;
  case 0x3f:
switchD_10048270f_caseD_3f:
    *param_2 = 1;
    param_2[6] = 1;
    param_2[8] = 1;
    param_2[9] = 1;
    param_2[10] = 0x8a;
    param_2[0xb] = 0;
    break;
  case 0x40:
    param_2[10] = 3;
    param_2[0xb] = 0;
    param_2[2] = 0;
    param_2[8] = 1;
    param_2[6] = 1;
    lVar7 = FUN_100279b99();
    *param_2 = *(byte *)(lVar7 + 6);
    param_2[3] = 1;
    break;
  case 0x41:
    *param_2 = 0;
    param_2[8] = 1;
    param_2[9] = 1;
    param_2[10] = 3;
    param_2[0xb] = 0;
    break;
  case 0x42:
  case 0x45:
  case 0x46:
    param_2[3] = 1;
    *param_2 = 0;
    param_2[8] = 1;
    param_2[9] = 1;
    param_2[10] = 5;
    param_2[0xb] = 0;
    break;
  case 0x43:
    *param_2 = 0;
    param_2[8] = 1;
    param_2[9] = 1;
    param_2[10] = 7;
    param_2[0xb] = 0;
LAB_100482cb8:
    param_2[3] = 1;
    break;
  default:
    switch(uVar1) {
    case 0x42f:
    case 0x431:
    case 0x432:
    case 0x433:
    case 0x434:
    case 0x435:
      goto switchD_10048270f_caseD_12;
    case 0x430:
      goto switchD_10048270f_caseD_1e;
    case 0x436:
      goto switchD_10048270f_caseD_2d;
    default:
      if (uVar1 - 200 < 7) goto LAB_100482913;
    }
  }
switchD_10048270f_caseD_8:
  if ((param_1[0x90] & 8U) == 0) {
    if ((((uint)param_1[0x90] >> 9 & 1) != 0) && (*(int *)(*(long *)(param_1 + 0x1e) + 0x18) == 0))
    {
      *param_2 = 1;
    }
  }
  else {
    *param_2 = 1;
    param_2[8] = bVar10;
  }
  if ((*(byte *)(param_1 + 0x90) & 0x10) != 0) {
    param_2[7] = 1;
  }
  if ((*(byte *)(lVar3 + 0x2be0) & 2) != 0) {
    param_2[9] = 1;
  }
  if ((param_2[4] != 0) &&
     (((*(int *)(lVar3 + 0x84) != 0x2062696c || ((*(byte *)(param_1 + 0xcc) & 0x80) != 0)) ||
      (*(uint *)(*(long *)(param_1 + 0x1e) + 0x18) < 2)))) {
    param_2[4] = 0;
  }
  param_2[0xc] = (byte)*(short *)(param_2 + 10) >> 5;
  uVar9 = 0;
  if (*(short *)(param_2 + 10) == 0 && *param_2 == 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    uVar9 = 0;
    if (cVar4 != '\0') {
      local_4a = "info->hidden || info->sortGroup != 0";
LAB_100482c44:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_100482c69:
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

