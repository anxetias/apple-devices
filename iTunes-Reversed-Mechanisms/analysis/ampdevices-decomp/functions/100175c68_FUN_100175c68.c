// name: FUN_100175c68
// address: 100175c68

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100175c68(int *param_1,int param_2,int param_3,undefined8 param_4,uint param_5,
                 ulong *param_6)

{
  ushort *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  int *piVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint local_23c;
  ulong local_238;
  ulong local_230;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x63687064)) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_1006821e4(uVar5);
    }
LAB_100175d48:
    FUN_1001782e9(0,0);
  }
  else {
    iVar9 = param_2 + (uint)(param_2 == 0);
    if (param_2 != -1) {
      uVar3 = FUN_10017605c(param_1,iVar9);
      local_23c = uVar3;
      if (uVar3 != 0) {
        if (param_3 < 0x70746368) {
          if (param_3 == 0x6e616d65) {
            if ((param_1[3] & 1U) == 0) {
              param_1[3] = param_1[3] | 1;
              *(undefined1 *)(param_1 + 4) = 1;
            }
            piVar10 = param_1 + 10;
            lVar8 = *(long *)(param_1 + 10);
LAB_100175f64:
            if (lVar8 != 0) {
              FUN_1001c64c1();
            }
            piVar10[0] = 0;
            piVar10[1] = 0;
            *(undefined1 *)((long)param_1 + 0x4e) = 0;
            FUN_1001c631b(param_6,&local_238,param_5);
            if (1 < param_5) {
              uVar6 = 0;
              do {
                puVar1 = (ushort *)((long)&local_238 + uVar6 * 2);
                *puVar1 = *puVar1 << 8 | *puVar1 >> 8;
                uVar6 = uVar6 + 1;
              } while (param_5 >> 1 != uVar6);
            }
            uVar5 = *(undefined8 *)(param_1 + 6);
          }
          else {
            if (param_3 == 0x70636368) goto LAB_100175eb2;
            if (param_3 != 0x706c6f63) goto LAB_100175ff0;
            if ((param_1[3] & 2U) == 0) {
              param_1[3] = param_1[3] | 2;
              *(undefined1 *)(param_1 + 4) = 1;
            }
            if (*(long *)(param_1 + 0xc) != 0) {
              FUN_1001c64c1();
            }
            param_1[0xc] = 0;
            param_1[0xd] = 0;
            uVar7 = 0x10;
            if (param_5 < 0x10) {
              uVar7 = param_5;
            }
            FUN_1001c631b(param_6,&local_238,uVar7);
            auVar11._8_8_ = 0;
            auVar11._0_8_ = local_238;
            auVar11 = pshufb(auVar11,_DAT_10070e4b0);
            if ((int)local_238 == 0x7472616b) {
              auVar12._8_8_ = 0;
              auVar12._0_8_ = local_230;
              auVar12 = pshufb(auVar12,_DAT_10070e4b0);
              local_230 = auVar12._0_8_;
            }
            *(undefined1 *)((long)param_1 + 0x4e) = 0;
            uVar5 = *(undefined8 *)(param_1 + 6);
            param_3 = 0x706c6f63;
            local_238 = auVar11._0_8_;
          }
          param_6 = &local_238;
        }
        else {
          if (param_3 < 0x75726c20) {
            if (param_3 == 0x70746368) {
LAB_100175eb2:
              iVar9 = FUN_10017599b(param_1,iVar9,1,&local_23c);
              if (iVar9 != -0x80) {
                if (iVar9 != 0) {
                  uVar5 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar2 != '\0') {
                    FUN_100682102(iVar9,uVar5);
                  }
                  if (iVar9 != 0) goto LAB_100175d57;
                }
                iVar9 = 0;
                iVar4 = FUN_10015bb96(*(undefined8 *)(param_1 + 8),local_23c,param_3,1,0);
                local_238 = CONCAT44(local_238._4_4_,iVar4);
                if (iVar4 == 0) {
                  iVar9 = 0;
                  FUN_10015c160(*(undefined8 *)(param_1 + 8),local_23c,param_3,0,1,param_5,param_6,
                                &local_238);
                }
                else {
                  FUN_10015bc91(*(undefined8 *)(param_1 + 8),iVar4,param_5,param_6);
                }
              }
              goto LAB_100175d57;
            }
            if (param_3 == 0x736d7044) {
              iVar9 = 0;
              if (*(ulong **)(param_1 + 0x16) != param_6) {
                FUN_1001705fc(param_6);
                FUN_10017060f(*(undefined8 *)(param_1 + 0x16));
                *(ulong **)(param_1 + 0x16) = param_6;
              }
              goto LAB_100175d57;
            }
          }
          else if (param_3 == 0x75726c20) {
            if ((param_1[3] & 4U) == 0) {
              param_1[3] = param_1[3] | 4;
              *(undefined1 *)(param_1 + 4) = 1;
            }
            if (*(long *)(param_1 + 0xe) != 0) {
              FUN_1001c64c1();
            }
            param_1[0xe] = 0;
            param_1[0xf] = 0;
          }
          else if (param_3 == 0x75726c74) {
            if ((param_1[3] & 4U) == 0) {
              param_1[3] = param_1[3] | 4;
              *(undefined1 *)(param_1 + 4) = 1;
            }
            piVar10 = param_1 + 0xe;
            lVar8 = *(long *)(param_1 + 0xe);
            goto LAB_100175f64;
          }
LAB_100175ff0:
          *(undefined1 *)((long)param_1 + 0x4e) = 0;
          uVar5 = *(undefined8 *)(param_1 + 6);
        }
        FUN_10015c0de(uVar5,uVar3,param_3,param_5,param_6);
        *(undefined1 *)(param_1 + 4) = 1;
        iVar9 = 0;
        goto LAB_100175d57;
      }
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        FUN_10068216e(uVar5);
      }
      goto LAB_100175d48;
    }
  }
  iVar9 = -0x32;
LAB_100175d57:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

