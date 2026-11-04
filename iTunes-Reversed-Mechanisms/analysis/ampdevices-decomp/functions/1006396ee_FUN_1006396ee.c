// name: FUN_1006396ee
// address: 1006396ee

void FUN_1006396ee(undefined4 *param_1)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  ushort uVar8;
  ulong uVar9;
  char *pcVar10;
  undefined4 *puVar11;
  ulong uVar12;
  undefined4 *puVar13;
  char *pcVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 local_8d8 [16];
  undefined4 *local_8c8;
  long *plStack_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  long local_8a8;
  ulong local_8a0;
  long local_898;
  undefined4 *local_890;
  undefined4 *local_888;
  undefined4 *local_880;
  undefined1 local_878 [1056];
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_10048bc57(*param_1);
  if (lVar3 != 0) {
    FUN_1001b7a44(local_8d8);
    local_8b8 = 0;
    uStack_8b0 = 0;
    local_8c8 = (undefined4 *)0x0;
    plStack_8c0 = (long *)0x0;
    if (*(long *)(lVar3 + 0x250) == 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_458 = 0x8220202;
        local_454 = "Assertion failure";
        local_44c = 0x822;
        local_44a = "playlist->handlerProc != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
      }
      FUN_1001782e9(0,0);
      FUN_1001b7a50(local_8d8);
      goto LAB_100639a5e;
    }
    uVar8 = *(ushort *)(param_1 + 1);
    uVar9 = (ulong)uVar8;
    if (1 < uVar8) {
      local_888 = param_1 + 0x18;
      pcVar14 = (char *)(param_1 + 0x124);
      uVar12 = 1;
      uVar16 = 0;
      local_898 = lVar3;
      local_880 = param_1;
      do {
        if (((*(char *)(local_888 + uVar16 * 0x10c) == '\0') &&
            (local_890 = local_888 + uVar16 * 0x10c, *(char *)((long)local_890 + 1) != '\0')) &&
           (pcVar10 = pcVar14, uVar15 = uVar12, uVar16 + 1 < uVar9)) {
          do {
            if (((*pcVar10 == '\0') && (pcVar10[1] != '\0')) &&
               ((pcVar10[0x42d] != '\0' || (*(char *)((long)local_890 + 0x42d) != '\0')))) {
              FUN_100637a00(local_880,uVar16 & 0xffffffff,&local_458);
              FUN_100637a00(local_880,uVar15 & 0xffffffff,local_878);
              if ((*(char *)((long)local_890 + 0x42d) == '\0') ||
                 (cVar2 = FUN_100183bb2(&local_458,local_878), cVar2 == '\0')) {
                if ((pcVar10[0x42d] != '\0') &&
                   (cVar2 = FUN_100183bb2(local_878,&local_458), cVar2 != '\0')) {
                  *(undefined1 *)((long)local_890 + 1) = 0;
                  uVar9 = (ulong)*(ushort *)(local_880 + 1);
                  break;
                }
              }
              else {
                pcVar10[1] = '\0';
              }
              uVar9 = (ulong)*(ushort *)(local_880 + 1);
            }
            uVar15 = uVar15 + 1;
            pcVar10 = pcVar10 + 0x430;
          } while (uVar15 < uVar9);
        }
        uVar16 = uVar16 + 1;
        uVar12 = uVar12 + 1;
        pcVar14 = pcVar14 + 0x430;
      } while ((long)uVar16 < (long)(uVar9 - 1));
      if ((short)uVar9 == 0) {
        uVar8 = 0;
      }
      else {
        uVar12 = 0;
        uVar8 = 0;
        puVar6 = local_888;
        puVar13 = local_888;
        do {
          if (*(char *)((long)puVar6 + uVar12 * 0x430 + 1) == '\0') {
            puVar11 = puVar6 + uVar12 * 0x10c;
            puVar6 = puVar13;
            uVar16 = uVar12;
            do {
              puVar5 = puVar6;
              uVar16 = uVar16 + 1;
              puVar6 = local_888;
              if (uVar9 <= uVar16) goto LAB_100639962;
              puVar6 = puVar5 + 0x10c;
            } while (*(char *)((long)puVar5 + 0x431) == '\0');
            _memcpy(puVar11,puVar5 + 0x10c,0x430);
            *(undefined1 *)((long)puVar5 + 0x431) = 0;
            uVar8 = uVar8 + 1;
            puVar6 = local_888;
          }
          else {
            uVar8 = uVar8 + 1;
          }
LAB_100639962:
          uVar12 = uVar12 + 1;
          puVar13 = puVar13 + 0x10c;
        } while (uVar12 != uVar9);
      }
      *(ushort *)(local_880 + 1) = uVar8;
      param_1 = local_880;
      lVar3 = local_898;
    }
    if (uVar8 != 0) {
      FUN_100314020(lVar3);
      lVar7 = *(long *)(lVar3 + 0x78);
      local_8a0 = 0;
      local_8a8 = lVar7;
      if (param_1[2] != 0) {
        local_8a0 = FUN_1004839f2(lVar3);
        local_8a0 = -(ulong)(local_8a0 == 0) | local_8a0;
        lVar7 = *(long *)(lVar3 + 0x78);
      }
      uVar1 = *(uint *)(lVar3 + 0x240);
      if (*(int *)(lVar7 + 0x18) == 0) {
        *(uint *)(lVar3 + 0x240) = uVar1 | 0x40;
      }
      plStack_8c0 = &local_8a8;
      local_8c8 = param_1;
      FUN_100483f95(lVar3,0x706c6564);
      *(uint *)(lVar3 + 0x240) = *(uint *)(lVar3 + 0x240) & 0xffffffbf | uVar1 & 0x40;
      FUN_1003142ca(lVar3);
    }
    *(undefined4 *)(DAT_1008c76a0 + 0x160c) = 0;
    FUN_1001b7a50(local_8d8);
  }
  FUN_1001dcc15(param_1 + 4);
  FUN_1001c64c1(param_1);
LAB_100639a5e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

