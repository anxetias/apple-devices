// name: FUN_1002e2674
// address: 1002e2674

int FUN_1002e2674(long param_1,undefined1 param_2,long *param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  short *psVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  undefined4 local_6d0;
  int local_6cc;
  long local_6c8;
  undefined4 local_6c0;
  undefined4 local_6bc;
  long local_6b8;
  long local_6b0;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
  undefined4 local_6a0;
  undefined4 uStack_69c;
  undefined4 uStack_698;
  undefined4 uStack_694;
  undefined1 local_690;
  long *local_688;
  long local_680;
  uint local_678;
  undefined4 local_674;
  long local_670;
  undefined1 local_668 [512];
  undefined1 local_468 [526];
  undefined1 local_25a [32];
  ushort local_23a;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_6b0 = 0x3ff0000000000000;
  if (param_4 != (long *)0x0) {
    *param_4 = 0;
  }
  if (param_3 == (long *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_22a = "params != nullptr";
LAB_1002e2c6e:
      local_22c = 0x822;
      local_234 = "Assertion failure";
      local_238 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
  }
  else {
    if (param_1 != 0) {
      if (*(int *)(param_1 + 0x80) != 0x74646174) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_238 = 0x8220202;
          local_234 = "Assertion failure (expected to be true)";
          local_22c = 0x822;
          local_22a = "trackData->magic == \'tdat\'";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
        }
        cVar4 = FUN_1001782e9(0,1);
        if (cVar4 == '\0') goto LAB_1002e2962;
      }
      local_6d0 = 0x66696c65;
      local_6b8 = param_3[2];
      local_6c8 = param_3[3];
      local_6c0 = (undefined4)param_3[4];
      local_6bc = (undefined4)param_3[5];
      local_6b0 = param_3[6];
      uStack_6a8 = (undefined4)param_3[7];
      uStack_6a4 = *(undefined4 *)((long)param_3 + 0x3c);
      local_6a0 = (undefined4)param_3[8];
      uStack_69c = *(undefined4 *)((long)param_3 + 0x44);
      uStack_698 = (undefined4)param_3[9];
      uStack_694 = *(undefined4 *)((long)param_3 + 0x4c);
      local_690 = (undefined1)param_3[10];
      local_6cc = (uint)(*(char *)((long)param_3 + 0x2c) != '\0') * 9 + 4;
      iVar5 = FUN_10048e13a(param_1,param_2,&local_6d0,&local_670);
      if (iVar5 == -0x80) goto LAB_1002e298e;
      if (iVar5 != 0) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_238 = 0x8220202;
          local_234 = "Assertion failure";
          local_22c = 0x400;
          local_22a = (char *)CONCAT44(local_22a._4_4_,iVar5);
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_238,0x12);
        }
        goto LAB_1002e298e;
      }
      lVar9 = local_670 + 0x158;
      local_688 = param_4;
      uVar7 = FUN_1004821e1(param_2);
      FUN_100538877(lVar9,uVar7);
      if ((*(byte *)(param_1 + 0x1bb5) & 8) != 0) {
        FUN_100538c95(local_670 + 0x158,0x5a);
      }
      FUN_100538b99(local_670 + 0x138,local_670 + 0x158);
      FUN_100538abf(local_670 + 0x138,&DAT_100741da0);
      *(undefined2 *)(local_670 + 0x10) = *(undefined2 *)((long)param_3 + 0x24);
      *(uint *)(local_670 + 0x240) =
           (*(uint *)(local_670 + 0x240) & 0xfffffff7) + (*(byte *)((long)param_3 + 0x2d) & 1) * 8;
      FUN_1001c62d9(local_25a,0x22);
      uVar8 = (ulong)(local_23a & 0xfffffb62);
      local_23a = (ushort)(*(char *)((long)param_3 + 0x2c) == '\0') +
                  (short)(local_23a & 0xfffffb62) + 0x49c;
      FUN_100538877(local_25a,local_670 + 0x138);
      uVar7 = FUN_1005396f9(&DAT_1008c7742,&DAT_10074b090,0);
      FUN_100538f6e(local_25a,uVar7);
      if ((*(byte *)(param_1 + 0x1bb5) & 0x10) != 0) {
        FUN_100538c95(local_25a,0x5a);
      }
      if ((*(byte *)(local_670 + 0x240) & 4) == 0) {
        local_23a = local_23a | 0xa02;
      }
      local_680 = param_1;
      FUN_10049089c(local_670,local_25a);
      if (*param_3 != 0) {
        cVar4 = FUN_1004935a5();
        if (cVar4 == '\0') {
          local_678 = 0;
        }
        else {
          local_678 = (uint)CONCAT71((int7)(uVar8 >> 8),
                                     *(undefined1 *)(*(long *)(local_670 + 8) + 0x1bb0)) &
                      0xffffff01;
        }
        lVar9 = *param_3;
        if ((*(int *)(lVar9 + 0x268) == *(int *)(local_670 + 0x268)) && ((char)local_678 == '\0')) {
          FUN_1004862fd();
          lVar9 = *param_3;
          local_674 = 1;
          if (*(char *)((long)param_3 + 0x2e) == '\0') {
            local_674 = 0x78;
          }
          if (lVar9 == 0) goto LAB_1002e2b9f;
        }
        else {
          local_674 = 1;
          if (*(char *)((long)param_3 + 0x2e) == '\0') {
            local_674 = 0x78;
          }
        }
        iVar5 = *(int *)(*(long *)(lVar9 + 0x78) + 0x18);
        if (iVar5 != 0) {
          iVar10 = 0;
          do {
            lVar9 = FUN_10037ddf6(*(undefined8 *)(*param_3 + 0x3c0),local_674,0,iVar10);
            if (((lVar9 != 0) && (cVar4 = FUN_1003a8311(lVar9), cVar4 != '\0')) &&
               (cVar4 = FUN_1003a7de7(lVar9), cVar4 == '\0')) {
              lVar2 = *(long *)(*(long *)(lVar9 + 8) + 0x58);
              cVar4 = FUN_1002b630e(lVar2);
              if ((((cVar4 != '\0') && (0xfb < (byte)(*(char *)(lVar2 + 0x45) - 10U))) ||
                  (*(char *)(*(long *)(*(long *)(lVar9 + 8) + 0x58) + 0x45) == '\0')) &&
                 (iVar6 = FUN_10048feae(lVar9), iVar6 != 0)) {
                lVar2 = *(long *)(lVar9 + 8);
                uVar1 = *(uint *)(lVar2 + 0xc2);
                if ((uVar1 & 8) == 0) {
LAB_1002e2b1d:
                  if (((char)local_678 == '\0') ||
                     ((lVar9 = FUN_100300729(*(undefined8 *)(local_670 + 8),
                                             *(undefined8 *)(lVar2 + 0x188)), lVar9 != 0 &&
                      (lVar9 = FUN_10048a4b3(lVar9), lVar9 != 0)))) {
                    FUN_1003a790f(lVar9,0,local_670,0,0);
                  }
                }
                else if (*(long *)(lVar2 + 0x58) == 0) {
                  if ((uVar1 >> 0xb & 1) == 0) goto LAB_1002e2b1d;
                }
                else if ((uVar1 & 0x800) == 0 &&
                         (*(uint *)(*(long *)(lVar2 + 0x58) + 0x48) & 0x80000) == 0)
                goto LAB_1002e2b1d;
              }
            }
            iVar10 = iVar10 + 1;
          } while (iVar5 != iVar10);
        }
      }
LAB_1002e2b9f:
      FUN_100489fba(local_670,FUN_1002e1cd0,0);
      psVar3 = (short *)param_3[1];
      if ((psVar3 == (short *)0x0) || (*psVar3 == 0)) {
        FUN_1001c34b7(0x23280001,local_468);
        FUN_1001c34b7(0x23280002,local_668);
        FUN_10048c7a0(local_680,local_468,local_668,&local_238);
      }
      else {
        FUN_1001e1c39(psVar3,&local_238);
      }
      FUN_1004872d8(local_670,&local_238);
      iVar5 = 0;
      if (local_688 != (long *)0x0) {
        *local_688 = local_670;
      }
      goto LAB_1002e298e;
    }
LAB_1002e2962:
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_22a = "TrackDataIsValid(trackData)";
      goto LAB_1002e2c6e;
    }
  }
  FUN_1001782e9(0,0);
  iVar5 = -0x32;
LAB_1002e298e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

