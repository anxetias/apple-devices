// name: FUN_100581b2a
// address: 100581b2a

void FUN_100581b2a(int *param_1,int *param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 unaff_R13;
  ulong uVar13;
  int local_9c;
  undefined4 local_98;
  uint local_94;
  int local_90;
  byte local_8a;
  char local_89;
  undefined8 local_88 [4];
  undefined4 local_68;
  char *local_64;
  undefined2 local_5c;
  char *local_5a;
  ushort local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_100581dc6:
    uVar12 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar12,0x10);
    if (cVar10 != '\0') {
      local_5a = "PlaylistIsValid(playlist)";
LAB_100581e46:
      local_5c = 0x822;
      local_64 = "Assertion failure";
      local_68 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar12 = FUN_1001cc310();
      cVar10 = _os_log_type_enabled(uVar12,0x10);
      if (cVar10 != '\0') {
        local_68 = 0x8220202;
        local_64 = "Assertion failure (expected to be true)";
        local_5c = 0x822;
        local_5a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      cVar10 = FUN_1001782e9(0,1);
      if (cVar10 == '\0') goto LAB_100581dc6;
    }
    if (param_2 != (int *)0x0) {
      FUN_100314020(param_1);
      piVar1 = param_1 + 0xa8;
      local_90 = param_1[0xb0];
      local_8a = *(byte *)(param_1 + 0xa6);
      local_89 = *(char *)((long)param_1 + 0x2a1);
      uVar13 = CONCAT71((int7)((ulong)unaff_R13 >> 8),1);
      if (((((char)*param_2 == (char)param_1[0xa8]) && (*(char *)((long)param_2 + 1) == local_89))
          && (*(char *)((long)param_2 + 2) == *(char *)((long)param_1 + 0x2a2))) &&
         ((char)param_2[1] == (char)param_1[0xa9])) {
        if (param_2[9] == param_1[0xb1]) {
          if (((*(char *)((long)param_2 + 6) == *(char *)((long)param_1 + 0x2a6)) &&
              (*(char *)((long)param_2 + 3) == *(char *)((long)param_1 + 0x2a3))) &&
             (*(char *)((long)param_2 + 7) == *(char *)((long)param_1 + 0x2a7))) {
            if (local_89 == '\0') {
LAB_100581c85:
              if (*(char *)((long)param_2 + 2) == '\0') {
LAB_100581ca8:
                uVar13 = 0;
              }
              else if ((*(long *)(param_2 + 2) != 0) && (*(long *)(param_1 + 0xaa) != 0)) {
                cVar10 = FUN_1001cfa79();
                if (cVar10 != '\0') goto LAB_100581ca8;
              }
            }
            else if ((param_2[6] == param_1[0xae]) && ((char)param_2[7] == (char)param_1[0xaf])) {
              if ((param_2[8] == local_90) &&
                 (*(char *)((long)param_2 + 5) == *(char *)((long)param_1 + 0x2a5)))
              goto LAB_100581c85;
            }
          }
        }
      }
      FUN_1005814bd(piVar1);
      *(byte *)(param_1 + 0xa6) = *(byte *)(param_1 + 0xa6) | 1;
      *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 8);
      iVar11 = *param_2;
      iVar4 = param_2[1];
      iVar5 = param_2[2];
      iVar6 = param_2[3];
      iVar7 = param_2[5];
      iVar8 = param_2[6];
      iVar9 = param_2[7];
      param_1[0xac] = param_2[4];
      param_1[0xad] = iVar7;
      param_1[0xae] = iVar8;
      param_1[0xaf] = iVar9;
      *piVar1 = iVar11;
      param_1[0xa9] = iVar4;
      param_1[0xaa] = iVar5;
      param_1[0xab] = iVar6;
      param_1[0xba] = 0;
      if (param_3 != '\0') {
        FUN_1005821b3(param_1,1);
      }
      piVar2 = param_1 + 0xb2;
      FUN_1001c62d9(piVar2,0x20);
      if (*(long *)(param_1 + 0xaa) == 0) {
        *(undefined1 *)((long)param_1 + 0x2a2) = 0;
      }
      else {
        local_94 = (uint)uVar13;
        iVar11 = FUN_1001cf1a0();
        if ((iVar11 != -0x80) && (iVar11 != 0)) {
          uVar12 = FUN_1001cc310();
          cVar10 = _os_log_type_enabled(uVar12,0x10);
          if (cVar10 != '\0') {
            local_68 = 0x8220202;
            local_64 = "Assertion failure";
            local_5c = 0x400;
            local_5a = (char *)CONCAT44(local_5a._4_4_,iVar11);
            __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: err == (%d)",&local_68,0x12);
          }
        }
        if ((((short)param_1[4] == 0) && (*(int *)(*(long *)(param_1 + 2) + 0x84) == 0x646f5069)) &&
           (*(int *)(*(long *)(param_1 + 2) + 0x2d08) == 0x69506f64)) {
          cVar10 = FUN_10028a32b(*(undefined8 *)(param_1 + 0xaa),&local_98,local_88);
          if (cVar10 != '\0') {
            FUN_1001d019e(local_88[0],&local_9c);
            if (local_9c == 0) {
              iVar11 = FUN_1001d0484(local_88[0],0,0x400,0x3c,local_98);
              if ((iVar11 != -0x80) && (iVar11 != 0)) {
                uVar12 = FUN_1001cc310();
                cVar10 = _os_log_type_enabled(uVar12,0x10);
                if (cVar10 != '\0') {
                  local_68 = 0x8220202;
                  local_64 = "Assertion failure";
                  local_5c = 0x400;
                  local_5a = (char *)CONCAT44(local_5a._4_4_,iVar11);
                  __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: err == (%d)",&local_68,
                                      0x12);
                }
              }
              FUN_1001cf5c9(*(undefined8 *)(param_1 + 0xaa));
              *(undefined8 *)(param_1 + 0xaa) = local_88[0];
            }
            else {
              FUN_1001cf5c9();
            }
          }
        }
        uVar13 = (ulong)local_94;
        if (((char)*piVar1 != '\0') && (*(char *)((long)param_1 + 0x2a2) != '\0')) {
          FUN_1002899cf(*(undefined8 *)(param_1 + 0xaa),local_88);
          FUN_100538b99(piVar2,local_88);
        }
      }
      piVar3 = *(int **)(param_1 + 0xac);
      if (piVar3 != (int *)0x0) {
        if (*piVar3 == 0x4f4c5354) {
          if (piVar3[1] != 0) {
            piVar3[1] = piVar3[1] + 1;
            goto LAB_100581f9e;
          }
        }
        uVar12 = FUN_1001cc310();
        cVar10 = _os_log_type_enabled(uVar12,0x10);
        if (cVar10 != '\0') {
          local_68 = 0x8220202;
          local_64 = "Assertion failure";
          local_5c = 0x400;
          local_5a = (char *)CONCAT44(local_5a._4_4_,0xffffffce);
          __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: err == (%d)",&local_68,0x12);
        }
      }
LAB_100581f9e:
      if (((char)*piVar1 != '\0') && (*(char *)((long)param_1 + 0x2a1) != '\0')) {
        FUN_10048f775(param_1[0xb0],local_88);
        FUN_100538b99(piVar2,local_88);
        if (((local_8a & 1) != 0) &&
           (((param_1[0xb0] == 2 && (*(int *)(*(long *)(param_1 + 0x1e) + 0x18) != 0)) &&
            (local_89 == '\0' || local_90 != 2)))) {
          FUN_10048b1e7(param_1);
        }
      }
      if ((char)param_1[0xa9] != '\0') {
        FUN_1005389ba(piVar2,0x7d);
      }
      if ((char)uVar13 != '\0') {
        cVar10 = FUN_10031b8dc(*(undefined8 *)(param_1 + 2));
        if ((cVar10 == '\x06') && (0xfff8 < (ushort)((short)param_1[4] - 0xcfU))) {
          *(undefined2 *)(param_1 + 4) = 0;
        }
      }
      FUN_100489136(param_1,&local_68);
      if (((char)param_1[0xa8] == '\0') ||
         ((*(char *)((long)param_1 + 0x2a1) != '\0' && (param_1[0xb0] == 2)))) {
        local_48 = local_48 & 0xff67 | 0x80;
      }
      else {
        local_48 = local_48 & 0xff67;
      }
      FUN_10049089c(param_1);
      *(ulong *)(*(long *)(param_1 + 2) + 0x1bb0) =
           *(ulong *)(*(long *)(param_1 + 2) + 0x1bb0) | 0x20000000000;
      FUN_1003142ca(param_1);
      goto LAB_1005820b2;
    }
    uVar12 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar12,0x10);
    if (cVar10 != '\0') {
      local_5a = "smartOptions != nullptr";
      goto LAB_100581e46;
    }
  }
  FUN_1001782e9(0,0);
LAB_1005820b2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

