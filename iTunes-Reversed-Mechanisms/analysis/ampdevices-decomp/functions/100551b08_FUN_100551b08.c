// name: FUN_100551b08
// address: 100551b08

int FUN_100551b08(long param_1,int param_2,long param_3,uint param_4,uint *param_5,
                 undefined4 *param_6)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  uint uVar12;
  short *psVar13;
  undefined1 local_a4 [4];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  long local_70;
  ulong local_68;
  uint local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_70 = param_1;
  local_5c = param_4;
  if (param_3 == 0) {
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "location != nullptr";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (param_5 == (uint *)0x0) {
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "numDetails != nullptr";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (param_6 != (undefined4 *)0x0) {
      if (((param_2 != 0x4d46494c) && (iVar4 = -0x32, param_2 != 0x46494c45)) ||
         (iVar4 = FUN_10054d680(param_2,param_3,local_a4), iVar4 != 0)) goto LAB_100551cc6;
      iVar4 = 0;
      iVar5 = FUN_100548d34(0,local_70,param_2,param_3,0,1);
      if (iVar5 != 0) goto LAB_100551cc6;
      iVar4 = 0;
      iVar5 = FUN_100549f1e(local_70,0,param_2,param_3,0,0,0);
      if (iVar5 != 0) goto LAB_100551cc6;
      local_68 = 0;
      if ((local_5c != 0) && (*(int *)(local_70 + 0x850) == 0x6d703461)) {
        FUN_1001c34b7(0x138a0001,param_6 + 1);
        *param_6 = 0x70726f66;
        switch(*(undefined1 *)(local_70 + 0x891)) {
        case 1:
          uVar12 = 0x138a000b;
          break;
        case 2:
          bVar3 = *(char *)(local_70 + 0x649a) - 1;
          if (2 < bVar3) goto LAB_100551e1c;
          uVar12 = bVar3 | 0x138a000c;
          break;
        case 3:
          uVar12 = 0x138a0010;
          break;
        case 4:
          uVar12 = 0x138a000f;
          break;
        default:
          uVar12 = 0x138a0011;
        }
        FUN_1001c34b7(uVar12,param_6 + 0x81);
        local_68 = 1;
      }
LAB_100551e1c:
      if ((uint)local_68 < local_5c) {
        uVar8 = (ulong)((uint)local_68 * 0x404);
        FUN_1001c34b7(0x138a0002,(long)param_6 + uVar8 + 4);
        if (*(int *)(local_70 + 0x850) == 0x616c6163) {
          uVar12 = (uint)*(byte *)(local_70 + 0x1009);
        }
        else {
          uVar12 = *(uint *)(local_70 + 0x860);
        }
        if (uVar12 != 0) {
          puVar10 = (undefined4 *)(uVar8 + (long)param_6);
          iVar4 = 0x138a0012;
          if (uVar12 != 1) {
            iVar4 = (uVar12 != 2) + 0x138a0013;
          }
          iVar5 = 0x138a0014;
          if (*(uint *)(local_70 + 0x85c) < 3) {
            iVar5 = iVar4;
          }
          FUN_1001c34b7(iVar5,puVar10 + 0x81);
          *puVar10 = 0x6368616e;
          local_68 = (ulong)((int)local_68 + 1);
        }
      }
      if (((uint)local_68 < local_5c) && (*(int *)(local_70 + 0x850) == 0x616c6163)) {
        FUN_1001c334a(&local_58,0x138a0018);
        uVar8 = (ulong)(uint)((int)local_68 * 0x404);
        FUN_1001bb41a(&local_58,(long)param_6 + uVar8 + 4);
        puVar10 = (undefined4 *)(uVar8 + (long)param_6);
        *puVar10 = 0x73616d73;
        FUN_1001c334a(local_90,0x138a0019);
        FUN_1001b8e86(local_80,*(undefined4 *)(local_70 + 0x864),1);
        FUN_1001bbec4(local_a0,local_90,local_80);
        FUN_1001b7a50(local_80);
        FUN_1001b7a50(local_90);
        FUN_1001bb41a(local_a0,puVar10 + 0x81);
        local_68 = (ulong)((int)local_68 + 1);
        FUN_1001b7a50(local_a0);
        FUN_1001b7a50(&local_58);
      }
      if ((uint)local_68 < local_5c) {
        iVar4 = FUN_1005d872c(local_70 + 0x710,0,0,&local_58);
        lVar7 = CONCAT44(uStack_54,local_58);
        if (param_2 == 0x46494c45 && lVar7 == 0) {
          iVar4 = FUN_1003ce4f9(param_3 + 0x2c,&local_58);
          lVar7 = CONCAT44(uStack_54,local_58);
        }
        if (lVar7 == 0 || iVar4 != 0) goto LAB_10055202f;
        uVar11 = (ulong)(uint)((int)local_68 * 0x404);
        psVar13 = (short *)((long)param_6 + uVar11 + 0x204);
        iVar4 = FUN_1001cb213(lVar7,0xa9746f6f,psVar13);
        uVar8 = local_68;
        if ((iVar4 == 0) && (*psVar13 != 0)) {
          puVar10 = (undefined4 *)(uVar11 + (long)param_6);
          FUN_1001c34b7(0x138a0003,puVar10 + 1);
          *puVar10 = 0x656e6377;
          uVar8 = (ulong)((int)local_68 + 1);
        }
        uVar12 = (uint)uVar8;
        if (uVar12 < local_5c) {
          psVar13 = (short *)((long)param_6 + (ulong)(uVar12 * 0x404) + 0x204);
          iVar4 = FUN_1001cb213(CONCAT44(uStack_54,local_58),0xa9656e63,psVar13);
          if ((iVar4 == 0) && (*psVar13 != 0)) {
            puVar10 = (undefined4 *)((ulong)(uVar12 * 0x404) + (long)param_6);
            FUN_1001c34b7(0x138a0004,puVar10 + 1);
            *puVar10 = 0x656e6362;
            uVar8 = (ulong)(uVar12 + 1);
          }
        }
        uVar12 = (uint)uVar8;
        if (uVar12 < local_5c) {
          psVar13 = (short *)((long)param_6 + (ulong)(uVar12 * 0x404) + 0x204);
          iVar4 = FUN_1001cb213(CONCAT44(uStack_54,local_58),0x63707274,psVar13);
          if ((iVar4 == 0) && (*psVar13 != 0)) {
            puVar10 = (undefined4 *)((ulong)(uVar12 * 0x404) + (long)param_6);
            FUN_1001c34b7(0x138a0005,puVar10 + 1);
            *puVar10 = 0x636f7079;
            uVar8 = (ulong)(uVar12 + 1);
          }
        }
        uVar12 = (uint)uVar8;
        if (uVar12 < local_5c) {
          psVar13 = (short *)((long)param_6 + (ulong)(uVar12 * 0x404) + 0x204);
          *psVar13 = 0;
          FUN_1001e1c39(local_70 + 0x4c8,psVar13);
          if (*psVar13 != 0) {
            puVar10 = (undefined4 *)((ulong)(uVar12 * 0x404) + (long)param_6);
            if ((*(char *)(local_70 + 0x70c) != '\x01') ||
               (uVar9 = 0x138a0008, *(char *)(local_70 + 0x70d) == '\0')) {
              uVar9 = 0x138a0006;
            }
            FUN_1001c34b7(uVar9,puVar10 + 1);
            *puVar10 = 0x70757262;
            uVar8 = (ulong)(uVar12 + 1);
          }
        }
        uVar12 = (uint)uVar8;
        if (uVar12 < local_5c) {
          uVar11 = (ulong)(uVar12 * 0x404);
          *(undefined2 *)((long)param_6 + uVar11 + 0x204) = 0;
          lVar7 = FUN_100156d72();
          psVar13 = (short *)((long)param_6 + uVar11 + 0x204);
          if (*(char *)(lVar7 + 0x78) == '\x01') {
            lVar7 = FUN_100156d72();
            FUN_1001bb41a(lVar7 + 0x80,psVar13);
          }
          else {
            FUN_1001cb213(CONCAT44(uStack_54,local_58),0x61704944,psVar13);
          }
          if (*psVar13 != 0) {
            FUN_1001c34b7(0x138a0007,(undefined4 *)(uVar11 + (long)param_6) + 1);
            *(undefined4 *)(uVar11 + (long)param_6) = 0x61704944;
            uVar8 = (ulong)(uVar12 + 1);
          }
        }
        uVar12 = (uint)uVar8;
        if (uVar12 < local_5c) {
          psVar13 = (short *)((long)param_6 + (ulong)(uVar12 * 0x404) + 0x204);
          *psVar13 = 0;
          FUN_1001cb213(CONCAT44(uStack_54,local_58),0x64776c72,psVar13);
          if (*psVar13 != 0) {
            puVar10 = (undefined4 *)((ulong)(uVar12 * 0x404) + (long)param_6);
            FUN_1001c34b7(0x138a0008,puVar10 + 1);
            *puVar10 = 0x64776e62;
            uVar8 = (ulong)(uVar12 + 1);
          }
        }
        uVar12 = (uint)uVar8;
        if ((uVar12 < local_5c) && (*(long *)(local_70 + 0x6c8) != 0)) {
          if ((*(int *)(local_70 + 0x6e8) < 0) ||
             ((0xff < *(uint *)(local_70 + 0x6ec) || (*(long *)(local_70 + 0x6d8) != 0)))) {
            lVar7 = 3;
            if (-1 < *(int *)(local_70 + 0x6e8)) {
              lVar7 = 2 - (ulong)(*(uint *)(local_70 + 0x6ec) < 0x100);
            }
            lVar1 = (ulong)(uVar12 << 10) + (uVar8 & 0xffffffff) * 4;
            FUN_1001c34b7(0x138a001a,(long)param_6 + lVar1 + 4);
            puVar10 = (undefined4 *)(lVar1 + (long)param_6);
            FUN_1001e1b6d(lVar7,puVar10 + 0x81);
            *puVar10 = 0x66707672;
            uVar8 = (ulong)(uVar12 + 1);
          }
        }
        uVar12 = (uint)uVar8;
        if (uVar12 < local_5c) {
          lVar7 = (ulong)(uVar12 << 10) + (uVar8 & 0xffffffff) * 4;
          psVar13 = (short *)((long)param_6 + lVar7 + 0x204);
          iVar4 = FUN_1005523e8(CONCAT44(uStack_54,local_58),psVar13);
          if ((iVar4 == 0) && (*psVar13 != 0)) {
            uVar6 = FUN_1001e6b97(psVar13);
            FUN_1001e24eb(uVar6,0x12,psVar13);
            param_6 = (undefined4 *)((long)param_6 + lVar7);
            FUN_1001c34b7(0x138a001c,param_6 + 1);
            *param_6 = 0x70757264;
            uVar12 = uVar12 + 1;
          }
        }
        FUN_1001c8d4b(CONCAT44(uStack_54,local_58),0);
      }
      else {
LAB_10055202f:
        uVar12 = (uint)local_68;
      }
      *param_5 = uVar12;
      iVar4 = 0;
      goto LAB_100551cc6;
    }
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "details != nullptr";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar4 = -0x32;
LAB_100551cc6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

