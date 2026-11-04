// name: FUN_1001d1887
// address: 1001d1887

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1001d1887(long param_1,undefined8 *param_2,uint param_3,code *param_4,undefined8 param_5,
                 uint *param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  uint local_34;
  
  iVar3 = FUN_1001cf1e5();
  if (iVar3 == 0) {
    uVar4 = FUN_1001d153d(param_1);
    if (param_6 != (uint *)0x0) {
      *param_6 = uVar4;
    }
    iVar3 = 0;
    if (param_2 != (undefined8 *)0x0) {
      if (param_3 < uVar4) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          FUN_1006b19e4(uVar5);
        }
        FUN_1001782e9(0,0);
        iVar3 = -0x32;
      }
      else {
        FUN_1001c62d9(param_2,0x88);
        uVar4 = *(uint *)(param_1 + 0xc);
        uVar1 = *(uint *)(param_1 + 0x10);
        if ((uVar4 & 1) != 0) {
          *(undefined1 *)((long)param_2 + 0xf) = 1;
        }
        if ((uVar4 & 2) != 0) {
          *(undefined1 *)((long)param_2 + 0xe) = 1;
        }
        *param_2 = 0x100010074734c53;
        *(uint *)(param_2 + 1) =
             uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        if (uVar1 != 0) {
          puVar8 = (undefined8 *)(*(long *)(param_1 + 0x68) + 0x10);
          uVar4 = 0;
          puVar7 = param_2 + 0x11;
          do {
            puVar6 = puVar7 + 7;
            FUN_1001c62d9(puVar7,0x38);
            *puVar7 = puVar8[-2];
            cVar2 = *(char *)(puVar8 + -1);
            *(char *)(puVar7 + 1) = cVar2;
            *(bool *)((long)puVar7 + 9) = *(char *)((long)puVar8 + -6) == '\0';
            if (cVar2 == '\0') {
              local_34 = *(uint *)((long)puVar8 + -4);
              iVar3 = FUN_1001de2b7(param_1 + 0x18,*(undefined4 *)puVar8,puVar6,0);
              if (iVar3 != 0) {
                return iVar3;
              }
              if (param_4 != (code *)0x0) {
                iVar3 = (*param_4)((int)*puVar7,puVar6,local_34);
                goto LAB_1001d1a2d;
              }
            }
            else {
              local_34 = FUN_1001d153d(*puVar8);
              iVar3 = FUN_1001d1887(*puVar8,puVar6,local_34,param_4,param_5,&local_34);
LAB_1001d1a2d:
              if (iVar3 != 0) {
                return iVar3;
              }
            }
            puVar6 = (ulong *)((long)puVar6 + (ulong)local_34);
            if ((local_34 & 1) != 0) {
              *(undefined1 *)puVar6 = 0;
              puVar6 = (ulong *)((long)puVar6 + 1);
            }
            auVar9._8_8_ = 0;
            auVar9._0_8_ = *puVar7;
            auVar9 = pshufb(auVar9,_DAT_10070e4b0);
            *puVar7 = auVar9._0_8_;
            *(uint *)((long)puVar7 + 0x34) =
                 local_34 >> 0x18 | (local_34 & 0xff0000) >> 8 | (local_34 & 0xff00) << 8 |
                 local_34 << 0x18;
            uVar4 = uVar4 + 1;
            puVar8 = puVar8 + 4;
            puVar7 = puVar6;
          } while (uVar4 < *(uint *)(param_1 + 0x10));
          iVar3 = 0;
        }
      }
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_1006b1978(iVar3,uVar5);
    }
  }
  return iVar3;
}

