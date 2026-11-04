// name: FUN_1003f889a
// address: 1003f889a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003f889a(undefined1 (*param_1) [16],long param_2,long param_3,long param_4,
                 undefined4 param_5)

{
  undefined1 auVar1 [16];
  uint uVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  char cVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 local_90 [16];
  long local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  long *local_68;
  undefined4 local_5c;
  uint local_58 [3];
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_5c = param_5;
  if (param_4 != 0) {
    local_68 = (long *)(param_3 + 0x4a8);
    local_80 = param_3;
    do {
      lVar8 = *(long *)(local_80 + 0x4b0);
      if (*(long *)(param_4 + 8) == 0) {
LAB_1003f890c:
        cVar4 = FUN_1003f8df3(param_1,param_4);
        cVar11 = '\0';
      }
      else {
        cVar11 = '\x01';
        cVar4 = (char)local_5c;
        if ((*(byte *)(*(long *)(param_4 + 8) + 0xc5) & 4) == 0) goto LAB_1003f890c;
      }
      if (cVar4 != '\0') {
        bVar12 = (char)local_5c != '\0';
        local_70 = *(undefined8 **)(param_4 + 8);
        FUN_1001c62d9(param_1,0x4c);
        *(undefined8 *)*param_1 = 0x4c7069686d;
        *(undefined4 *)(param_1[1] + 4) = *(undefined4 *)(param_4 + 0x40);
        *(undefined8 *)(param_1[3] + 0xc) = *(undefined8 *)(param_4 + 0x28);
        param_1[1][1] = cVar11;
        param_1[3][4] = *(byte *)(param_4 + 0x60) >> 3 & 1;
        if ((bVar12 && lVar8 != 0) && (plVar10 = (long *)*local_68, plVar10 != (long *)0x0)) {
          uVar3 = *(ulong *)(param_4 + 0x28);
          plVar7 = local_68;
          do {
            if ((ulong)plVar10[4] >= uVar3) {
              plVar7 = plVar10;
            }
            plVar10 = (long *)plVar10[(ulong)plVar10[4] < uVar3];
          } while (plVar10 != (long *)0x0);
          if (((plVar7 != local_68) && ((ulong)plVar7[4] <= uVar3)) &&
             (lVar8 = FUN_10048a10b(local_80,plVar7[5]), lVar8 != 0)) {
            *(undefined4 *)param_1[2] = *(undefined4 *)(lVar8 + 0x40);
          }
        }
        local_78 = param_1[4] + 0xc;
        if (cVar11 == '\0') {
          lVar8 = FUN_1002e2e73(param_4);
          *(undefined4 *)(param_1[1] + 0xc) = *(undefined4 *)(lVar8 + 0x60);
          *(undefined4 *)(param_1[1] + 8) = *(undefined4 *)(local_70 + 1);
          param_1[1][0] = *(byte *)((long)local_70 + 0xc2) >> 2 & 1;
          *(undefined8 *)(param_1[2] + 0xc) = *local_70;
          FUN_1001c62d9(local_58,0x14);
          local_58[0] = *(uint *)(param_4 + 0x44);
          if (param_1[0x10012][7] != '\0') {
            local_58[0] = local_58[0] >> 0x18 | (local_58[0] & 0xff0000) >> 8 |
                          (local_58[0] & 0xff00) << 8 | local_58[0] << 0x18;
          }
          FUN_1003f625f(param_1,local_58,0x14,100,&local_78);
          *(int *)(*param_1 + 0xc) = *(int *)(*param_1 + 0xc) + 1;
        }
        else {
          uVar9 = FUN_1002ba359(param_4);
          *(undefined8 *)(param_1[2] + 4) = uVar9;
          FUN_10047745d(local_90,local_70);
          cVar4 = FUN_1001b8428(local_90);
          if (cVar4 == '\0') {
            iVar5 = FUN_1003f7e59(param_1,local_90,1,*(undefined4 *)(param_1[0x10013] + 8),&local_78
                                 );
            if (iVar5 != 0) {
              if (iVar5 != -0x80) {
                uVar9 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar9,0x10);
                if (cVar4 != '\0') {
                  local_58[0] = 0x8220202;
                  local_58[1] = 0x7a0a90;
                  local_58[2] = 1;
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",local_58,0x12
                                     );
                }
              }
              FUN_1001b7a50(local_90);
              goto LAB_1003f8bf5;
            }
            *(int *)(*param_1 + 0xc) = *(int *)(*param_1 + 0xc) + 1;
          }
          if ((*(byte *)((long)local_70 + 0xc5) & 8) == 0) {
            *(undefined4 *)(param_1[1] + 8) = *(undefined4 *)(local_70 + 1);
          }
          FUN_1001b7a50(local_90);
        }
        uVar6 = (int)local_78 - (int)param_1;
        *(uint *)(*param_1 + 8) = uVar6;
        if (0x100000 < uVar6) {
          uVar9 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar9,0x10);
          if (cVar4 != '\0') {
            local_58[0] = 0x8220202;
            local_58[1] = 0x7a0a90;
            local_58[2] = 1;
            local_4c = 0x822;
            local_4a = "dbPlaylistItem->dataSize <= sizeof(context->objectBuffer)";
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        auVar14 = _DAT_100718a70;
        if (param_1[0x10012][7] != '\0') {
          auVar1 = *(undefined1 (*) [16])(param_1[1] + 4);
          auVar15 = pshufb(*(undefined1 (*) [16])(param_1[2] + 4),_DAT_100711fe0);
          auVar13 = pshufb(*param_1,_DAT_100718a70);
          *param_1 = auVar13;
          auVar14 = pshufb(auVar1,auVar14);
          *(undefined1 (*) [16])(param_1[1] + 4) = auVar14;
          *(undefined1 (*) [16])(param_1[2] + 4) = auVar15;
          uVar3 = *(ulong *)(param_1[3] + 0xc);
          *(ulong *)(param_1[3] + 0xc) =
               uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18
               | (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 |
               (uVar3 & 0xff0000) << 0x18 | (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
          uVar2 = *(uint *)(param_1[3] + 8);
          *(uint *)(param_1[3] + 8) =
               uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        }
        local_58[1] = 0;
        local_58[0] = uVar6;
        iVar5 = FUN_100160894(*(undefined8 *)param_1[0x10000],local_58,param_1);
        if (iVar5 != 0) {
          if (iVar5 != -0x80) {
            uVar9 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar9,0x10);
            if (cVar4 != '\0') {
              local_58[0] = 0x8220202;
              local_58[1] = 0x7a0a90;
              local_58[2] = 1;
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",local_58,0x12);
            }
          }
          goto LAB_1003f8bf5;
        }
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
      }
      param_4 = *(long *)(param_4 + 0x18);
    } while (param_4 != 0);
  }
  iVar5 = 0;
LAB_1003f8bf5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

